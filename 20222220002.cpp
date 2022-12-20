#include<stdio.h>

int main(){
	int i,j,soma = 0;
	for (i=0;i<50;i++){
		printf("Digite um valor: ");
		scanf("%d", &j);
		if ((j%2) != 0)
		{
			soma += j;
		}
	} 
	printf("\nSoma = %d", soma);
	return 0;
}
