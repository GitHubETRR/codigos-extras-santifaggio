#include <stdio.h>


typedef struct {
    float valorNumerico; 
    unsigned char bytesNumero[4]; 
    int parteEntera; 
} DatosNumeroFlotante;

void mostrarMenuPrincipal();
void obtenerOpcionMenu(int *opcionSeleccionada);
void ingresarNumeroFlotante(DatosNumeroFlotante *datosFlotante);
void imprimirDatosNumeroFlotante(DatosNumeroFlotante datosFlotante);

int main(void) {
    DatosNumeroFlotante datosFlotante; 
    int opcionSeleccionada; 

    do {
        mostrarMenuPrincipal();
        obtenerOpcionMenu(&opcionSeleccionada);
        switch (opcionSeleccionada) {
            case 2:
                imprimirDatosNumeroFlotante(datosFlotante);
                break;
            case 1:
                ingresarNumeroFlotante(&datosFlotante);
                break;
        }
    } while (opcionSeleccionada != 3);

    return 0;
}

void mostrarMenuPrincipal() {
    printf("---------------------------\n");
    printf("𝅇- Ingresar un número        (1)\n");
    printf("𝅇- Mostrar número almacenado (2)\n");
    printf("𝅇- Cerrar el programa        (3)\n");
    printf("---------------------\n");
}

void obtenerOpcionMenu(int *opcionSeleccionada) {
    int lecturaCorrrecta; 

    do {
        lecturaCorrrecta = scanf("%d", opcionSeleccionada);

        if (lecturaCorrrecta == 0) {
            printf("Entrada inválida. Intente nuevamente.\n");
        }
        else if (*opcionSeleccionada < 1 || *opcionSeleccionada > 3) {
            printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (lecturaCorrrecta == 0 || (*opcionSeleccionada < 1 || *opcionSeleccionada > 3));
}

void ingresarNumeroFlotante(DatosNumeroFlotante *datosFlotante) {
    printf("Ingrese un número flotante: ");

    if (scanf("%f", &datosFlotante->valorNumerico) != 1) {
        printf("Entrada inválida. Intente nuevamente.\n");
        datosFlotante->valorNumerico = 0.0f;
    }

    datosFlotante->parteEntera = (int)datosFlotante->valorNumerico;
    unsigned char *punteroBytes = (unsigned char *)&datosFlotante->valorNumerico;
    for (int i = 0; i < 4; i++) {
        datosFlotante->bytesNumero[i] = punteroBytes[i];
    }
}

void imprimirDatosNumeroFlotante(DatosNumeroFlotante datosFlotante) {
    unsigned int bytesHexadecimales = 0; 

    for (int i = 0; i < 4; i++) {
        bytesHexadecimales |= (datosFlotante.bytesNumero[i] << (8 * (3 - i)));
    }

    printf("Se guardó el número como: 0x%08X \n", bytesHexadecimales);
    printf("El número ingresado fue %f\n", datosFlotante.valorNumerico);
    printf("La parte entera en hexadecimal es: 0x%X\n", datosFlotante.parteEntera);
}