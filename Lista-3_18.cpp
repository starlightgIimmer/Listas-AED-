18. Obtenha a equação matemática referente a análise do pior e melhor caso do fragmento
de código abaixo:
1 for ( i = 0 ; i < N; i = i +2)
2   printf ( ”%d” , i ) ;

O pior caso do algoritmo é definido pelo número máximo de iterações. Então ele seria executado
N/2 vezes pois i não aumentaria algarismo por algarismo, ele soma de 2 em 2. A ordem então se
torna O(N).
  Já o melhor caso é a condição inical não ser satisfetia, ou seja, i>0. Então a ordem no melhor
caso do problema seria O(1).
