#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <malloc.h>

int mainSv(void) {
    struct sockaddr_in dirSv;
    dirSv.sin_family = AF_INET;
    dirSv.sin_addr.s_addr = INADDR_ANY;
    dirSv.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    if (bind(servidor, reinterpret_cast<const sockaddr *>(&dirSv), sizeof(dirSv)) != 0) {
        perror("Falló el bind");
        return 1;
    }

    printf("Estoy escuchando\n");
    listen(servidor, 100);

    struct sockaddr_in dirCl;
    unsigned int len;
    int cliente = accept (servidor, static_cast<sockaddr *>((void *) &dirCl), &len);

    printf("Recibí una conexión en %d!!\n", cliente);
    send(cliente, ":)\n", 4, 0);

    char* buffer = static_cast<char *>(malloc(1000));

    while (1) {
        int bytesRecibidos = recv(cliente, buffer, 1000, 0);
        if (bytesRecibidos <= 0) {
            perror("El chabón se desconectó o bla.");
            return 1;
        }

        buffer[bytesRecibidos] = '\0';
        printf("Me llegaron %d bytes con %s\n", bytesRecibidos, buffer);
    }

    free(buffer);

    for(;;);
    return 0;
}
#include "SvMain.h"
