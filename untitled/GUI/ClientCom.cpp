#include "ClientCom.h"

int ClMain(void) {
struct sockaddr_in dirServer;
dirServer.sin_family = AF_INET;
dirServer.sin_addr.s_addr = inet_addr("127.0.0.1");
dirServer.sin_port = htons(8080);

int cliente = socket(AF_INET, SOCK_STREAM, 0);
if (connect(cliente, static_cast<sockaddr *>((void*) &dirServer), sizeof(dirServer)) != 0) {
perror("No se pudo conectar");
return 1;
}

while (1) {
char mensaje[1000];
scanf("%s", mensaje);

send(cliente, mensaje, strlen(mensaje), 0);
}

return 0;
}