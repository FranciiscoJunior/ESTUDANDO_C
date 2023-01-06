#include<stdio.h>
#include<string.h>
int main(){
	
	int idade;
	double salario;
	char nome[50];
	char sexo;
	
	idade = 32;
	salario = 5500.50;
	strcpy(nome, "Maria Silva");
	sexo = 'F';
	
	printf("A funcionaria %s Sexo %c Ganha %.2lf Tem %d Anos\n",nome, sexo, salario, idade);
	
	return 0;
	system("PAUSE");
}; 