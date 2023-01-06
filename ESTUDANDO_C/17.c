#include<stdio.h>
int main(){
	
	int a, b, c, menor;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &b);
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &c);
	
	 if(a < b && a < c){
	 	menor = a;
	 }
	 
	 else if(b < c){
	 	menor = b;
	 }
	 
	 else{
	 	menor = c;
	 }
	
	printf("Menor = %d\n", menor);
	
	return 0;
	system("PAUSE");
};