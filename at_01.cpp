#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, soma, subi, multi, divi;
	printf("Digite um valor: \n");
	scanf("%d", &n1);
	printf("Digite outro valor: \n");
	scanf("%d", &n2);
	soma = (n1 + n2);
	subi = (n1 - n2);
	multi = (n1 * n2);
	divi = (n1 / n2);
	printf("soma: %d\n",soma);
	printf("subtracao: %d\n",subi);
	printf("multiplicacao: %d\n",multi);
	printf("divisao: %d\n\n",divi);
	system("pause");
}
