//lo que hace el programa es devolver los valores ingresados previamente, de forma vertical y horizontal. Pero tambien te ordena verticalmente ordenado de mayor a menor
#include <stdio.h>
void carga (int n, int Vector[]);				//declara la funcion CARGA
void imprimir (int n, int Vector[]);			//declara la funcion IMPRIMIR
void ordenar (int n, int Vector[]);				//declara la funcion ORDENAR
int main(){										//empieza el main
	int n=5;									//declara el valor de N (5)
	int V[n];									//declara el vector V sub N
	carga (n,V);								//llama la funcion CARGA (con los atributos N y V
	imprimir (n,V);								//llama la funcion IMPRIMIR (con los atributos N y V)
	ordenar (n,V);								//llama la funcion ORDENAR (con los atributos N y V)
	imprimir (n,V);								//llama la funcion IMPRIMIR de vuelta
	    printf("\n");							//imprime salto de linea
	    for (int i=0; i<n; i++){				//inicia un for
	        printf("%5d",V[i]);					//imprime el valor del vector V sub i
		}
	return 0;									//cierra el programa
}

void carga (int n, int Vector[]){				//empieza la funcion CARGA
	for (int i=0; i<n; i++){					//abre un for
	    printf("ingrese el valor de la posicion %d: ",i);	//imprime un texto
	    scanf("%d",&Vector[i]);					//escanea el valor ingresado por el usuario
	}
}

void imprimir (int n, int Vector[]){			//empieza la funcion IMPRIMIR
	for (int i=0; i<n; i++){					//abre un for
	  	printf("\n %5d",Vector[i]);				//imprime el valor del vector sub i
	}
	printf("\n");								//imprime salto de linea
}

void ordenar (int n, int Vector[]){				//empieza la funcion ORDENAR
	int aux;									//crea una variable tipo entero
	for (int i=0; i<n; i++){					//abre un ciclo for i
		for (int j=0; j<n; j++){				//abre un ciclo for j
			if (Vector[i]>Vector[j]){			//empieza un if
			    aux=Vector[i];					//declara la variable AUX igual al Vector sub i
			    Vector[i]=Vector[j];			//declara el Vector sub i igual al Vector sub j
			    Vector[j]=aux;					//declara el Vector sub j igual a la variable AUX
			}
		}
	}
	printf("\n");								//imprime salto de linea
}

