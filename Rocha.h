#ifndef ROCHA_H
#define ROCHA_H

#include "lista_de_minerais.h" //incluir depois

typedef struct{
    int id;
    float peso;
    lista_de_minerais minerais; //mudar depois
    char categoria[20];
    float latitude;
    float longitude;
    char data[11];
}RochaMineral

void Rocha(RochaMineral *rocha, int id, float peso, float latitud, float longitude, const char *data);
void Categoria(RochaMineral *rocha);
void Imprime(const RochaMineral *rocha);

#endif

