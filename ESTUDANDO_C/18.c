#include<stdio.h>
int main(){
	
	int soma, media, i, N;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &N);
	
	double vet[N];
	
	for(i = 0; i < N; i++){
		printf("Digite um numero: ");
		scanf("%lf", &vet[i]);
	}
	
	printf("\nValores\n: ");
	for(i = 0; i < N; i++){
		printf("%.1lf\n", vet[i]);
	}
	
	printf("\n");
	
	soma = 0;
	
	for(i = 0; i < N; i++){
		soma = soma + vet[i];
	}
	
	printf("SOMA = %.2lf\n", soma);
	
	media = soma / N;
	printf("MEDIA = %.2lf\n", media);
	
	return 0;
	system("PAUSE");
};