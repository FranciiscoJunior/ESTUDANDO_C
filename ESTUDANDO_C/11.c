#include<stdio.h>
int main(){
	
	int M, N, I, J;
	
	printf("Quantas linha vai ter a matriz? ");
	scanf("%d", &M);
	
	printf("Quantas colunas vai ter a matriz? ");
	scanf("%d", &N);
	
	int mat[M][N];
	
	for (I=0; I<M; I++){
		for(J=0; J<N; J++){
			printf("Elemento [%d,%d]:",I,J);
			scanf("%d",&mat[I][J]);
		}
	}
	
	printf("\nmatriz digitada:\n");
	
	for(I=0; I<M; I++){
		for(J=0; J<N; J++){
			printf("%d",mat[I][J]);
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
};