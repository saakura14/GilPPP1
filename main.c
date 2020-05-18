#include <stdio.h>
#include <stdlib.h>



int aplicarDescuento (int descuento);

int main()
{
    int precio = 100;

    precio = aplicarDescuento(precio);

    printf("El precio con descuento es %d\n\n", precio);

    return 0;

}

int aplicarDescuento(int precio)
{
    int descuento;
    descuento = precio - (precio*5/100);

    return descuento;
}









