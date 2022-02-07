#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, t;
	printf("Digite um valor: ");
	scanf("%d", &n1);
	printf("Digite outro valor: ");
	scanf("%d", &n2);
	t = n1;
	n1 = n2;
	n2 = t;
	printf("troca: %d\n",n1);
	printf("troca: %d\n\n",n2);
	system("pause");
}
