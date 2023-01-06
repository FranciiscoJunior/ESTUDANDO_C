#include<stdio.h>
#include<string.h>

		void limpar_entrada(){
		char c;
		while ((c - getchar()) != '\n' && c != EOF){}
	}

int main(){
	
	int idade1, idade2;
	char nome1[50], nome2[50];
	
	printf("digite o valor da idade 1: \n");
	scanf("%d", &idade1);
	
	printf("digite o nome da pessoa 1: \n");
	limpar_entrada();
	fgets(nome1, 50, getchar);
	
	printf("digite o valor da idade 2: \n");
	scanf("%d", &idade2);
	
	printf("digite o nome da pessoa 2: \n");
	limpar_entrada();
	fgets(nome2, 50, getchar);
	
	printf("IDADE1: %d\n", idade1);
	printf("NOME1: %s\n", nome1);
	printf("IDADE2: %d\n", idade2);
	printf("NOME2: %s\n", nome2);
	
	return 0;
	system ("PAUSE");
};