#include <stdio.h>

void bishopMovement(int counter) {
	// bishop movement
	printf("Movimento bispo\n");

	for (int index = 0; index < counter; index++) {
		printf("Cima\n");
		for (int j = 0; j < 1; j++) {
			printf("Direita\n");
		}
	}
	printf("\n");
};

void rookMovement(int counter) {
	// rook movement
	int index = 0;

	printf("Movimento torre\n");
	while (index < counter) {
		printf("Direita\n");
		index++;
	};
	printf("\n");
};

void queenMovement(int counter) {
	// Queen movement
	int index = 0;

	printf("Movimento rainha\n");
	do {
		printf("Esquerda\n");
		index++;
	} while (index < counter);
	printf("\n");
};

void knightMovement() {
	// knight movement
	int counter = 0;
	printf("Movimento do cavalo\n");

	while (counter <= 1) {
		printf("Cima\n");

		for (int index = 0; index < 1; index++) {
			if (counter == 1) {
				printf("Direita\n");
			}
		}

		counter++;
		continue;
	};
	printf("\n");
};

int main() {
	bishopMovement(5);

	rookMovement(5);

	queenMovement(8);

	knightMovement();
	return 0;
}
