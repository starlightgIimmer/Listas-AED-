20. Obtenha a equação matemática referente a análise do pior e melhor caso do fragmento 
de código abaixo:
1 for ( i = 0 ; i < N; i = i +2)
2   for ( j = N i ; j >=0; j ) 
3     if ( V [ i ] < V [ j ])
4       printf ( ”%d” , i ) ; 
5 }
6 }
7 }

  No pior caso N é impar e tanto o laço externo quanto o interno iteram N/2 vezes, ou seja,
a equação matemática que define a complexidade do pior caso é (N/2) * (N/2) = N^2/4.
  Já no melhor caso N é par e o laço externo itera N/2 vezes, mas, o interno por j ser produto
de N e i itera apenas uma vez. Assim a equação se torna N/2.
  
