//en el programa tenes que definir las columnas y filas de 2 matrices y luego darle los valores a cada una,
//posteriormente el programa te muestra las matrices y el producto o la multiplicacion de ambas
#define N 10
#include <stdio.h>
void leer_matriz(int A[N][N], int filas, int columnas);							//declara la funcion leer_matriz
void escribir_matriz(int A[N][N], int filas, int columnas);						//declara la funcion escribir_matriz
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p);	//declara la funcion multiplicar

int main ()  {																	//comienza el main
	int m, n, p;																//declara 3 variables (m, n y p) tipo enteros
	int A[N][N], B[N][N], C[N][N];												//declara 3 matrices (A, B y C)
    printf("\n Datos de la Matriz A: \n"); 										//imprime un texto
	printf("Filas: ");															//
	scanf("%d", &m);															//escanea los valores dados por el usuario
    printf("Columnas: ");														//imprime
	scanf("%d", &n);															//escanea los valores dados de las columnas de la matriz A
	leer_matriz(A, m, n);														//llama la funcion leer_matriz
    printf("\n Datos de la Matriz B: \n");										//imprime
	printf("Columnas: ");														//imrpime
	scanf("%d", &p);															//escanea los valores dados de las columnas de la matriz B
	leer_matriz(B, n, p);														//llama de vuelta a leer_matriz
	printf("\n Matriz A:\n");													//imprime
	escribir_matriz(A, m, n);													//llama a la funcion escrbir_matriz
    printf("\n Matriz B: \n");													//imprime
	escribir_matriz(B, n, p);													//llama de vuelta a escribir_matriz
    multiplicar(A, B, C, m, n, p);												//llama a la funcion multiplicar
    printf("\n Matriz AxB: \n");												//imprime
	escribir_matriz(C, m, p);													//llama escribir_matriz una vez mas
}

void leer_matriz(int A[N][N], int filas, int columnas) {						//empieza la funcion leer_matriz
	int i, j;																	//declara 2 variables (i, j) tipo enteros
	for (i=0; i<filas; i++){													//empieza un for i
    	for (j=0; j<columnas; j++){												//empieza un for j
    		printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);					//imprime para ingresar las entradas de la matriz A
			scanf("%d", &A[i][j]);												//escanea los valores dentro de la matriz A
    	}
    }
}

void escribir_matriz(int A[N][N], int filas, int columnas){						//empieza la funcion escribir_matriz
	int i, j;																	//declara 2 variables (i, j) tipo enteros
	for (i=0; i< filas; i++){													//empieza un for i
        for (j=0; j<columnas; j++){												//empieza un for j
            printf("\t%d", A[i][j]);											//imprime los valores de la matriz A
    	}
        printf("\n");															//salto de linea
 	}
}

void multiplicar (int A[N][N], int B[N][N], int C[N][N], int m, int n, int p){	//empieza la funcion multiplicar
    int i, j, k;																//declara 3 variables (i, j, k) tipo enteros
 //limpiar o inicializar matriz C
    for(i=0; i< m; i++)															//empieza un for i
    for(k=0; k< p; k++)															//empieza un for k
    C[i][k]=0;																	//declara la matriz C sub i sub k igual a 0
    for (i=0; i< m; i++)														//empieza un for i
    for (j=0; j< n; j++)														//empieza un for j
    for (k=0; k< p; k++)														//empieza un for k
    C[i][k] = C[i][k] + A[i][j]*B[j][k];										//la matriz C(i,k) es igual a C(i,k) + A(i,j) multiplicado por B(j,k)
}

