#include<stdio.h>
#include<string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
} 

int main(){
	
	double C, F;
	char resp;
	
	do{
		printf("Digite uma temperatura em celsius: ");
		scanf("%lf", &C);
		
		F = 9.0 * C / 5.0 + 32.0;
		
		printf("Equivalente em fahrenheit: %.llf\n", F);
		printf("deseja repetir (s/n)?");
		
		limpar_entrada();
		scanf("%c", &resp);
		
	}while (resp == 's');
	
		return 0;
	system ("PAUSE");
};