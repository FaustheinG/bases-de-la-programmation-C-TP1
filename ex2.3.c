#include <stdio.h>

int main() {
	int nb1, nb2;
	printf("Entrez un 1er nombre entier : ");
	scanf("%d", &nb1);
	printf("Entrez un 2eme nombre entier : ");
	scanf("%d", &nb2);
	
	if (nb1 > nb2){
		printf("%d est plus grand que %d.\n", nb1, nb2);
	}
	else if (nb1 < nb2){
		printf("%d est plus grand que %d.\n", nb2, nb1);
	}
	else{
		printf("%d et %d sont égaux.\n", nb1, nb2);
	}
	
}
