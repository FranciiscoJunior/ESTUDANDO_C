#include<stdio.h>
int main(){
	
	int N, i;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &N);
	
	double vet[N];
	
	for(i=0; i<N; i++){
		printf("Digite um numero: ");
		scanf("%lf", &vet[i]);
	}
	
	printf("\nNumeros digitados: \n");
	for(i=0; i<N; i++){
		printf("%.llf\n", vet[i]);
	}
	
	return 0;
	system("PAUSE");
};