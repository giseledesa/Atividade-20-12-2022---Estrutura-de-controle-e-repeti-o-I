#include<stdio.h>

int main()
{
	float i,j,soma = 0, maior = 0, menor = 0, media =0;
	for (i=0;i<3;i++)
	{
		printf("Digite a nota do %d Exercicio: ", i);
		scanf("%f", &j);
		soma += j;
		if (i == 0)
		{
			maior = j;
			menor = j;
		}
		if (maior < j)
		{
			maior = j;
		}
		else{
			menor = j;
		}
	}
	media = soma/3;
	printf("Maior: %.2f\nMenor: %.2f\nMedia: %.2f", maior, menor, media);
	return 0;
}
