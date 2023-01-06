#include<stdio.h>
int main(){
	
	int i, N, nmenores;
	double soma, media, percentualmenores;
	
	printf("Quantas pessoas serao digitadas: ");
	scanf("%d", &N);
	
	char nomes[N][50];
	int idades[N];
	double alturas[N];
	
	for (i = 0; i < N; i++){
		printf("Dados da %da pessoa:\n", i + 1);
		printf("Nome: ");
		fseek(stdin, 0, SEEK_END);
		gets(nomes[i]);	
		printf("Idade: ");
		scanf("%d", &idades[i]);
		printf("Altura: ");
		scanf("%lf", &alturas[i]);
	}
	
	soma = 0;
	for (i = 0; i < N; i++){
		soma = soma + alturas[i];
	}
	
	media = soma / N;
	printf("Altura media: %.2lf\n", media);
	
	nmenores = 0; 
	for(i = 0; i < N; i++){
		if(idades[i] < 16){
			nmenores = nmenores + 1;
		}
	}
	
	percentualmenores = (double)nmenores * 100.0 / N;
	
	printf("Pessoas com menos de 15 anos: %.1lf %%\n", percentualmenores);
	
	for(i = 0; i < N; i++){
		if(idades[i] < 16){
			printf("%s", nomes[i]);
		}
	}
	
	return 0;
	system("PAUSE");
};