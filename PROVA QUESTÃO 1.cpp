#include<stdio.h>
#include<stdlib.h>
/*1) Faça um programa que leia um número e mostre uma mensagem indicando se este número é
par ou ímpar e se é positivo ou negativo:*/
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
