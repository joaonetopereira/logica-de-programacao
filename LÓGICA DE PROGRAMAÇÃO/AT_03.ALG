Algoritmo "at_03"

Var
x, y, t: inteiro

Inicio
      escreva("Informe o valor de x: ")
      leia (x)
      escreva("Informe o valor de y: ")
      leia (y)
      t <- x
      x <- y
      y <- t
      limpatela
      escreval("O resultado da troca:")
      escreval("resultado de x: ",x)
      escreval("resultado de y: ",y)
Fimalgoritmo