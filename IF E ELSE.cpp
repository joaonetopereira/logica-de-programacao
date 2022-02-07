#include<stdio.h>
#include<stdlib.h>
main(){
	float med;
	printf("Digite sua media: ");
	scanf("%f", &med);
	
	if(med >= 7){
		printf("APROVADO! \n");
    }else{
	    if(med < 4){
	        printf("REPROVADO! \n");	
		}else{
			printf("RECUPERACAO! \n");
		}
    }
system("pause");
}
