cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Grafos/Grafo.cpp Grafos/Grafo.h Grafos/Nodo.cpp Grafos/Nodo.h Grafos/Arco.cpp Grafos/Arco.h Server/SvMain.cpp Server/SvMain.h GUI/ClientCom.cpp GUI/ClientCom.h)