14. Calcule a complexidade, no pior caso, do fragmento de código abaixo:
1 int i , j , k ;
2   for ( i = 0 ; i < N; i ++)
3     for ( j = 0 ; j < N; j ++)
4         R[ i ] [ j ] = 0 ;
5             for ( k = 0 ; k < N; k++)
6                 R[ i ] [ j ] += A [ i ] [ k ] ∗ B [ k ] [ j ] ;
7 }
8 }

  A complexidade no pior caso desse fragmento de código pode ser calculada 
identificando o pior caso de cada ciclo de repetição.
  Portanto, o pior caso de cada um é i, j, k serem todos iguais a N. Assim
o pior caso é O(n.n.n) = O(n^3).
