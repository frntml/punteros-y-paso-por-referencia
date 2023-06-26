#include <iostream>

using namespace std;

void ordenarVector(float* vec, size_t vec_size) {
	for (int i = 0; i < vec_size; i++) {
		for (int j = 0; j < vec_size - i - 1; j++) {
			if (*(vec + j) > *(vec + j + 1)) {
				int aux = *(vec+j);
				*(vec+j) = *(vec+j+1);
				*(vec+j+1) = aux;
			}
		}	
	}
}

int main() {
	float puntero[5];
	for(int i=0; i<5; i++){
		cout << "ingresa numero " << i << ": ";
		cin >> puntero[i];
	}
	
	ordenarVector(puntero, 5);
	
	for(int i=0; i<5; i++){
		cout << puntero[i] << endl;
	}
}
