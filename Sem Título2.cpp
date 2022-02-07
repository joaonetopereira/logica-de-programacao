#include<stdio.h>
#include<stdlib.h>
main(){
	int n1,n2,n=0;
	do{
		printf("Digite um numero: ");
		scanf("%d",&n1);
		printf("Digite outro numero: ");
		scanf("%d",&n2);
		n= n1+n2;
		system("cls");
		printf("Resultado da soma: %d \n\n",n);
		system("pause");
		system("cls");
	}while(n<=20);
    printf("A soma foi maior que 20!\n");
    printf("O programa ira terminar!\n\n");
}
