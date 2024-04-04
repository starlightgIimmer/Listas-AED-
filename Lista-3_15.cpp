15. Calcule a complexidade, no pior caso, do fragmento de código abaixo:
1 int i , j , k , s ;
2   for ( i = 0 ; i < N 1; i ++)
3     for ( j = i + 1 ; j < N; j ++)
4       for ( k = 1 ; k < j ; k++)
5         s = 1;

A complexidade total, no pior caso, é a multiplicação das complexidades dos loops:
  1) A complexidade do primeiro loop é = N.
  2) A complexidade do segundo loop é = N(N-1)/2, pois ele é executado N-1 vezes
na primeira repetição, N-2 na segunda, até N-N. E como são N repetições ele fica N(N-1)
o que se torna na soma de uma média aritmética.
  3) A complexidade do terceiro loop pode ser calculada pelo mesmo método do loop acima.

A complexidade total no pior caso se torna:
N x N(N-1)/2 x N(N-1)/2.
Simplificando a equação essa complexidade é O(N^3).
