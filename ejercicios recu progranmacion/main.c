#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarMuertosPorDia(ePais* pais, int muertosDias);
void sacarVocales(char palabra[]);
void ordenarCaracteres(char palabra[]);

int main()
{
    int muertosDias = 80;
    char palabra[20] = "antonio";
    char palabraDos[20] = "antonio";
    ePais pais;

    pais.muertos = 0;

    actualizarMuertosPorDia(&pais, muertosDias);

    printf("%d\n", pais.muertos);

    sacarVocales(palabra);

    printf("%s", palabra);

    ordenarCaracteres(palabraDos);

    printf("\n%s\n", palabraDos);

    return 0;
}

void actualizarMuertosPorDia(ePais* pais, int muertosDias)
{
    pais->muertos = muertosDias + pais->muertos;
}

void sacarVocales(char palabra[])
{
   for(int i = 0; i < strlen(palabra); i++)
    {
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            palabra[i] = ' ';
        }
    }
}

void ordenarCaracteres(char palabra[]){

    char aux;

    for(int i = 0; i < strlen(palabra) - 1; i++){

     for(int j = i + 1; j < strlen(palabra); j++){

        if(palabra[i] > palabra[j])
        {
            aux = palabra[j];
            palabra[j] = palabra[i];
            palabra[i] = aux;
        }
     }
   }
}
