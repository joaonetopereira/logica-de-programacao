#include<stdio.h>
#include<stdlib.h>
/*1) Fa�a um programa que leia um n�mero e mostre uma mensagem indicando se este n�mero �
par ou �mpar e se � positivo ou negativo:*/
main(){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if(x % 2 == 0){
	printf("numero e par");	
	}else{printf("numero e impar");
	}
	if(x<0){printf(" e negativo\n\n");
	}else{printf(" e positivo\n\n");
	}
	system("pause");
}
