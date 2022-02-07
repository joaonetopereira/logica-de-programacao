#include<stdio.h>
#include<stdlib.h>
main(){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if(x % 2 == 0){
	printf("numero e par");	
}else{
	printf("numero e impar\n\n");
}
	system("pause");
}
