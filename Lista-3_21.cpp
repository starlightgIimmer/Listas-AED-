21. Obtenha a equac¸a˜o matema´tica referente a´ ana´lise do pior e melhor caso do fragmento 
de co´digo abaixo:
1 for ( i = 1 ; i <= N; i =2*i )
2   printf ( ”%d” , i ) ;

  Para o pior caso i é menor que N, ou seja, o loop vai iterar i até chegar a N. O número total 
de iterações nesse caso é determinado pelo número de vezes que o valor de i pode ser 
duplicado antes de ultrapassar N. Se colocarmos x como o número de vezes que i vai ser duplicado,
obtem-se que 2^x = N. Assim dizendo, x = log2(n).
    O melhor caso nessa situação é a condição não se satisfazer. Ou seja, i>N.
