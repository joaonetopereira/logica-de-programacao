#include<stdio.h>
#include<stdlib.h>
main(){
	float n1, n2, n3, n4, media;
	printf("digite a 1 nota: ");
	scanf("%f", &n1);
	printf("digite a 2 nota: ");
	scanf("%f", &n2);
	printf("digite a 3 nota: ");
	scanf("%f", &n3);
	printf("digite a 4 nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	printf("a media de notas e: %.1f\n\n",media);
	system("pause");
}
