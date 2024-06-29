#include <stdio.h>


#define CANT_CORREDORES 5
#define CANT_MAX_LETRAS 50


typedef struct{
    char nombre [CANT_MAX_LETRAS];
    char nacionalidad [CANT_MAX_LETRAS];
    unsigned int titulos;
}corredor;


corredor INGRESAR_DATOS (corredor persona);
void PROCESAR_DATOS (corredor persona[], int cantidad);
void MOSTRAR_DATOS (corredor persona[], int cantidad);
void MOSTRAR_OPCIONES (void);


int main (void){
    
    
    corredor persona [CANT_CORREDORES];
    for (int i=0; i<CANT_CORREDORES; i++)
        persona [i].titulos=0;
    }
    
    
    unsigned int corredoresIngresados=0;
    printf("menu");
    int opcionElegida;
    
    do{
        MOSTRAR_OPCIONES();
        printf("Opción elegida: ");
        scanf("%i", &opcionElegida);
        while (opcionElegida!=1 && opcionElegida!=2 && opcionElegida!=3){
            printf("vuelva a elegir entre 1 , 2 o3");
            printf("Opción elegida: ");
            scanf("%i" , &opcionElegida);
        }
        
        switch(opcionElegida){
            case 1:
            persona[corredoresIngresados]= INGRESAR_DATOS (persona[corredoresIngresados]);
            corredoresIngresados++;
            break;
            
            
            case 2:
            MOSTRAR_DATOS (persona, corredoresIngresados);
            PROCESAR_DATOS(persona, corredoresIngresados+1));
            break;
        }
        
    }
    
    }while (opcionElegida!=3);
    return 0;
}
    
corredor INGRESAR_DATOS (corredor persona){
   printf("escribir el nombre del corredor: ")
   scanf("%c", &persona.nombre);
   printf("escribir la nacionalidad del corredor:");
   scanf("%c", &persona.nacionalidad);
   printf("escriba la cantidad de titulos del corredor: ");
   scanf("%i", &persona.titulos);
   return persona;
    
}
    

void PROCESAR_DATOS (corredor persona[], int cantidad){
    int promedio=0;
    int maximo=0;
    for (int i = 0; i<cant; i++){
        if (persona[i].titulos>persona[maximo].titulos){
            maximo=i;
        }
        promedio+=persona[i].titulos;
    }
    promedio/=cantidad;
    printf("%s tiene la max cantidad de titulos de rally con: %i" , persona[maximo].nombre, persona [maximo].titulos);   
    printf("El promedio de titulos es: %i",promedio);
}


void MOSTRAR_DATOS(corredor persona[], int cantidad){
    for (int i=0; i<cantidad; i++){
        printf("%i NOMBRE: %s, NACIONALIDAD: %s, SALARIO: %i", i+1, persona [i].nombre, persona[i].nacionalidad, persona[i].salario );
    }
}







