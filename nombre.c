#include <stdio.h>

int main(void) {
	int compteur = 1;

	while (compteur<=100) {
		printf("%i", compteur);
		if (compteur%2==0) {
			printf("!!");
		}
		printf("\n");
		compteur++;
	}
}
