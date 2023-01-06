#include<stdio.h>
#include<string.h>
int main() {
	
	// precisa corrigir
	
	void limpar_entrada(){
		char c;
		while ((c - getchar()) != '\n' && c != EOF){
		}
}
	int idade;
	double salario, altura;
	char genero, nome[50];

	printf("Informe uma idade: \n");
	scanf("%d", &idade);

	printf("Informe o seu salario: \n");
	scanf("%lf", &salario);

	printf("Informe a sua altura: \n");
	scanf("%lf", &altura);

	printf("Informe o seu sexo: \n");
	scanf("%c", &genero);
	
	printf("Informe o seu nome: \n");
	limpar_entrada();
	fgets(nome, 50, getchar);

	printf("Idade: %d\n", idade);
	printf("Salario: %.2lf\n", salario);
	printf("Altura: %.2lf\n", altura);
	printf("Genero: %c\n", genero);
	printf("Nome: %s\n", nome);

	return 0;
	system("PAUSE");
};