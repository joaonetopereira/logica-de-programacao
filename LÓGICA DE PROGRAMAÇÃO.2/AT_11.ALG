Algoritmo "at_11"

Var
v1, v2, v3, v4, m:real

Inicio
      escreva("Informe a 1° nota: ")
      leia(v1)
      escreva("Informe a 2° nota: ")
      leia(v2)
      escreva("Informe a 3° nota: ")
      leia(v3)
      escreva("Informe a 4° nota: ")
      leia(v4)
      limpatela
      m <- (v1 + v2 + v3 + v4)/4
se (m >= 7)entao
    escreval("aprovado")
    escreva("media:",m)
    senao
       se (m < 4.5)entao
           escreval("reprovado")
           escreva("media:",m)
           senao
              escreval("recuperação")
              escreva("média: ",m)
      fimse
fimse
Fimalgoritmo