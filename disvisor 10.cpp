#include<stdio.h>
#include<stdlib.h>
main(){
	int n=0,v;
	do{printf("Digite um numero: ");
	scanf("%d",&v);
	printf("A metade e: %d\n\n",v/2);
	n=n+1;	
	}while(n<11);
	system("pause");
}
