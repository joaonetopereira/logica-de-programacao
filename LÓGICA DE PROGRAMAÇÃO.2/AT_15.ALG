Algoritmo "at_15"

Var
n1, n2, n3, n4, n5, maior, menor:inteiro

Inicio
escreva("digite um número: ")
leia(n1)
maior <- n1
menor <- n1
escreva("digite outro número: ")
leia(n2)
se(n2 > maior)entao
   maior <- n2
   senao
     se(n2 < menor)entao
        menor <- n2
     fimse
fimse
escreva("digite outro número: ")
leia(n3)
se(n3 > maior)entao
   maior <- n3
   senao
     se(n3 < menor)entao
        menor <- n3
     fimse
fimse
escreva("digite outro número: ")
leia(n4)
se(n4 > maior)entao
   maior <- n4
   senao
     se(n4 < menor)entao
        menor <- n4
     fimse
fimse
escreva("digite outro número: ")
leia(n5)
se(n5 > maior)entao
   maior <- n5
   senao
     se(n5 < menor)entao
        menor <- n5
     fimse
fimse
escreval("maior valor: ",maior)
escreva("menor valor: ",menor)
Fimalgoritmo