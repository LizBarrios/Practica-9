//(Funciones de validar números, método de búsqueda)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validarNumeros(char mensaje[], int ri, int rf);
int Buscar(int vect[], int n, int num);
int repetir();
int llenar_vector_sin_repetir(int vec[], int n, int ri, int rf);
int random(int ri, int rf);
int imprimirVec(int vec[]);

// valida la entrada de numeros
int validarNumeros(char mensaje[], int ri, int rf)
{
    char entrada[100];
    int num;
    do
    {
        printf("%s", mensaje);
        fgets(entrada, sizeof(entrada), stdin);
        num = atoi(entrada);
        if (num < ri || num > rf)
        {
            printf("INGRESE EL NUMERO OTRA VEZ PORFAVOR\n");
        }
    } while (num < ri || num > rf);
    return num;
}

// para repetir hasta que el usuario decida salir
int repetir()
{
    int repetir;
    repetir = validarNumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
    if (repetir == 1)
    {
        return 1;
    }
    else
    {
        printf("FIN DEL POGRAMA");
        return 0;
    }
}

// busca los numeros repetidos
int Buscar(int vect[], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (vect[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// llenar vector sin repetir num
int llenar_vector_sin_repetir(int vec[], int n, int ri, int rf)
{
    int i, num, rango;
    for (i = 0; i < n; i++)
    {
        do
        {
            num = random(ri, rf);
        } while (Buscar(vec, i, num) != -1);
        vect[i] = num;
    }
}

// funcion para hacer los numeros aleatorios
int random(int ri, int rf)
{
    int r;
    r = (rf - ri) + 1;
    return (rand() % r) + ri;
}

// funcion para imprimir el vetor
int imprimirVec(int vec[])
{
    printf("%d");
}