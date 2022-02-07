Algoritmo "at_28"

Var
F, M, x :inteiro
N, SEX: caracter
Inicio
      para x de 1 ate 100 faca
           escreva("Informe seu nome: ")
           leia(N)
           escreva("Informe seu sexo: ")
           leia(SEX)
           se (SEX =  "m") entao
             M <- 1
           fimse
           se (SEX =  "f") entao
             F <- 1
           fimse
           limpatela
       fimpara
       limpatela
           escreval("Total de homems: ",M)
           escreval("Total de mulheres: ",F)
Fimalgoritmo