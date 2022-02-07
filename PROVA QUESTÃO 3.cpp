#include<stdio.h>
#include<stdlib.h>
/*3) Elabore um programa e informe ao usuário seu lugar na fila da vacinação do covid-19
solicitando a idade.
Qual é a sua idade?
[1] – Menos de 18 anos
[2] – 18 a 34 anos
[3] - 35 a 59 anos
[4] – 60 anos ou mais
Respostas: 1 - Você se encontra no FIM da Fila – Novembro a Dezembro
Respostas: 2 - Você se encontra em PENÚLTIMO da Fila - Setembro a Outubro
Respostas: 3 - Você se encontra no MEIO da Fila - Junho a Agosto
Respostas: 4 - Você se encontra no INICIO da Fila – Março a Maio
Respostas: outra opção - Operação invalida!*/
main(){
	float n1;
	printf("informe sua idade :");
	scanf("%e",&n1);
	if((n1>=1)&&(n1<=17)){ printf("Voce se encontra no FIM da Fila de Novembro a Dezembro \n\n");
	}
	if((n1 >= 18) && (n1 <= 34)){ printf("Voce se encontra em PENULTIMO na Fila de Setembro a Outubro \n\n");
	}
	if((n1 >= 34) && (n1 <= 59)){ printf("Voce se encontra no MEIO da Fila de Junho a Agosto \n\n");
	}
	if(n1 >= 60){printf("Você se encontra no INICIO da Fila de Março a Maio \n\n");
	}else{
	if(n1<=0){printf("Operacao invalida \n\n");
	}
}
	system("pause");  
}
