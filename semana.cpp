#include<stdio.h>
#include<stdlib.h>
main(){
	
	int sem;
	printf("Digite algun dia da semana: ");
	scanf("%d",&sem);
	switch(sem){
		case 1:
		printf("DOMINGO");
		break;
		case 2:
		printf("SEGUNDA FEIRA");
		break;
		case 3:
		printf("TERCA FEIRA");
		break;
		case 4:
		printf("QUARTA FEIRA");
		break;
		case 5:
		printf("QUINTA FEIRA");
		break;
		case 6:
		printf("SEXTA FEIRA");
		break;
		case 7:
		printf("SABADO");
		break;
		default:
		printf("erro valor invalido! \n\n");
		break;	
		system("pause");
	}
}
