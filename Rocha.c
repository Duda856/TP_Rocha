#include "Rocha.h" 
#include <stdio.h> 
#include <string.h> 

void inicializar_Rocha(RochaMineral *rocha, int id, float peso, float latitude, float longitude, const char *dataColeta) {
    rocha->id = id;                       
    rocha->peso = peso;                   
    rocha->latitude = latitude;           
    rocha->longitude = longitude;         
    strcpy(rocha->data, data);

    inicializa_lista_minerais(&(rocha->minerais));  
    
    strcpy(rocha->categoria, "Indefinida"); 
}

void imprimeRocha(const RochaMineral *rocha) {
    printf("Rocha ID: %d\n", rocha->id);
    printf("Peso: %.2f kg\n", rocha->peso);
    printf("Categoria: %s\n", rocha->categoria);
    printf("Localização: (%.2f, %.2f)\n", rocha->latitude, rocha->longitude);
    printf("Data de Coleta: %s\n", rocha->data);
    imprime_lista_minerais(&(rocha->minerais));  
}





