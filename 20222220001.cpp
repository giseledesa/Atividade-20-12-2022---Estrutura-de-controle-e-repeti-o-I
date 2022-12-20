#include<stdio.h>

int main(){
	float i,j,soma = 0;
	for (i=0;i<5;i++){
		printf("Digite um valor: ");
		scanf("%f", &j);
		soma += j;
	} 
	printf("\nSoma = %.2f", soma);
	return 0;
}
