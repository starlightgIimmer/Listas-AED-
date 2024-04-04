4. Suponha um algoritmo A e um algoritmo B com funções de complexidade de tempo
a(n) = n^2 - n + 549 e b(n) = 49n + 49, respectivamente. Determine quais são os valores 
de n pertencentes ao conjunto dos números naturais para os quais A leva menos tempo 
para executar do que B.
  Para encontrar o intervalo de números em que a(n) leva menos tempo para executar do que b(n)
basta resolver a desigualdade a(n) < b(n) = n^2 - n + 549 < 49n + 49.
  Rearranjando a inequação: n^2 - 50n + 500 < 0.
  Calculando por Bháskara temos que n1 = 9 e n2 = 41.
  Ou seja, a(n) leva menos tempo para executar do que b(n) os números de 9 até 41.
