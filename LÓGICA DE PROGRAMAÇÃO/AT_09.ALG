Algoritmo "at_09"

Var
custo_gas,m_car,km,m_gasto,mgiv:real

Inicio
      escreva("informe o custo da gasolina: ")
      leia(custo_gas)
      escreva("informe o consumo m�dio do ve�culo: ")
      leia(m_car)
      escreva("informe a distancia de percusso: ")
      leia(km)
      limpatela
      m_gasto <- (custo_gas / m_car) * km
      mgiv <- ((custo_gas / m_car) * km)*2
      escreval("m�dia de gasto R$ ",m_gasto:5:2)
      
      escreval("m�dia de gasto de ida e volta ",mgiv:5:2)

Fimalgoritmo