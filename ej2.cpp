// la primer variable devuelve la posicion de la variable X, el segundo devuelve el valor de X, y el tercero devuelve la posicion de la variable Y
#include <stdio.h>
int main() {
	int x, *y; //crea las 2 variables (la variable normal y el puntero)
	x=10; //declara el valor de X (10)
	y=&x; //la posicion de memoria de Y es igual a la de X
    printf("%d %d %d",y,*y,&y ); //imprime los valores
	return 0;
}

