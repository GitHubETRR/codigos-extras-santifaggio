#include <stdio.h>
union DatosNumero {
    float numeroReal;
    unsigned char bytesNumero[4]; 
};

void imprimirBytesNumero(union DatosNumero datos); 

int main() {
    union DatosNumero datos;

    printf("Ingrese un numero real: ");
    scanf("%f", &datos.numeroReal);
    imprimirBytesNumero(datos); 

    return 0;
}


void imprimirBytesNumero(union DatosNumero datos) { 
    printf("Bytes del numero real: ");
    for (int i = 0; i < 4; i++) {
        printf("%02X ", datos.bytesNumero[i]);  
    }
}