#include<stdio.h>
#include<stdlib.h>
main(){
	char rua[20] = "Nova Iguacu", bairro[20] = "Limeira";
	int n = 34;
	float r = 100.000;
	
	printf("Rua: %s \n",rua);
	printf("Bairro: %s \n",bairro);
	printf("N: %d \n",n);
	printf("Valor: R$ %.3f \n\n",r);
	system("pause");
}
