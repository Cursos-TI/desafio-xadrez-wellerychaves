#include <stdio.h>

int main() {

	// bishop movement - 5 top right diagonally
	printf("Movimento bispo - 5 diagonal superior direita\n");

	for (int index = 0; index < 5; index++) {
		printf("Cima\n");
		printf("Direita\n");
	}

	printf("\n\n");

	// rook movement - 5 to the right
	int whileCounter = 0;

	printf("Movimento torre 5 a direita\n");
	while (whileCounter < 5) {
		printf("Direita\n");
		whileCounter++;
	};

	printf("\n\n");

	// Queen movement - 8 to the left
	int doWhileCounter = 0;

	printf("Movimento rainha - 8 para esquerda\n");
	do {
		printf("Esquerda\n");
		doWhileCounter++;
	} while (doWhileCounter < 8);

	printf("\n\n");

	// knight movement - L down and left
	int knightCounter = 0;

	printf("Movimento do cavalo - L baixo esquerda\n");
	for (int index = 0; index < 1; index++) {
		while (knightCounter < 2) {
			printf("Baixo\n");
			knightCounter++;
		};
		printf("Esquerda\n");
	};
	return 0;
}
