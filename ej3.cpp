//el programa devuelve los valores que ingresaste previamente, pero de forma vertical y de forma horizontal//
#include <stdio.h>
void carga (int n, int Vector[]);
void imprimir (int n, int Vector[]);
 
int main()
{
			int n=5;							//declara valor de N (5)
           	int V[n]; 							//crea un vector
			carga (n,V);						//pasa los valores a la funcion CARGA
	       	imprimir (n,V);						//pasa los valores a la funcion IMPRIMIR
           	printf("\n");						//imprime salto de linea
           	for (int i=0; i<n; i++){			//crea un for
    	        printf("%5d",V[i]);				//imprime el valor del vector sub i
	       	}
	       	return 0;
}
void carga (int n, int Vector[]){												//funcion de CARGA
           	 int i;																//crea la variable I
           	 for (i=0; i<n; i++){												//crea un for
    	                   	printf("ingrese el valor de la posicion %d: ",i);	//imprime texto 
    	                   	scanf("%d",&Vector[i]);								//escanea el valor ingresado por el usuario
           	  }
}
void imprimir (int n, int Vector[]){											//funcion de IMPRIMIR
           	 for (int i=0; i<n; i++){											//crea un for
  	                     	 printf("\n %5d",Vector[i]);						//imprime valor del vector sub i
	       	}
           	 printf("\n");														//imprime salto de linea
}
	
