16. Calcule a complexidade, no pior caso, do fragmento de co´digo abaixo:
1  int i , j , s ;
2   s = 0;
3     for ( i = 1 ; i < N 1; i ++)
4       for ( j = 1 ; j < 2 N; j ++)
5         s = s + 1 ;

  A linha 3 é executada N-1 vezes e a linha 4 é executada 2N-1 vezes.
Portanto sua complexidade pode ser dada por (N-1) x (2N-1) que,
simplificando fica: 2N^2...
Assim sua ordem de complexidade é O(N^2).
