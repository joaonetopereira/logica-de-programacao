#include<stdio.h>
#include<stdlib.h>
main(){
	int n1=0,v,maior,menor;
	printf("Digite um numero :");
	scanf("%d",&v);
	maior=v;
	menor=v;
	do{
	  printf("Digite um numero: ");	
	  scanf("%d",&v);
	 if(v>maior){ maior=v;
	 }else{
		if(v<menor){ menor=v;
		}
	} 
	n1++;  
	}while(n1<3);
	printf("Maior valor: %d \n",maior);
	printf("Menor valor: %d \n\n",menor);
	system("pause");
}
