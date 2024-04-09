#include <stdio.h>


int main(int argc, char const *argv[])
{
    //int const Aumento = 0.25;
    int producto;
    int preciofinal;
    

    printf("\nBienvenido al sistema");
    printf("\n¡El día de hoy todos los productos de TODOS los catálogos tienen descuento");
    printf("\nIngresar el precio base del producto:");
    scanf("%i", &producto);
    //printf("\nIngresar el precio del producto del cual desea obtener su descuento");
    //scanf("%i", &producto);

    preciofinal = producto-(producto*0.15);

    printf("\nEl precio del producto que introdujo fue de: %i",producto);
    printf("\nEl descuento aplicable para todos los productos es del 15%");
    printf("\nEl precio final del producto es de: $ %i", preciofinal);
    
    
    






    return 0;
}
