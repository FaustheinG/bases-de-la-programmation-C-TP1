#include <stdio.h>

int main(){
	float nb1, nb2, r;
	char op;
	printf("Entrez un 1er nombre entier : ");
	scanf("%f", &nb1);
	printf("Entrez un 2eme nombre entier : ");
	scanf("%f", &nb2);
	printf("Entrez une opération : ");
	scanf(" %c", &op);
	
	
	if (op == '+'){
		r = (nb1 + nb2);
	}else if (op == '-'){
		r = (nb1 - nb2);
	}else if (op == '*'){
		r = (nb1 * nb2);
	}else if (op == '/'){
		if (nb2 == 0){
			printf("Division par 0 impossible\n");
		}else{
			r = (nb1 / nb2);
		}
	}
	if (!(op == '/' && nb2 == 0)){
		printf("%f%c%f=%f\n", nb1, op, nb2, r);
	}
}
