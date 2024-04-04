19. Obtenha a equac¸a˜o matema´tica referente a´ ana´lise do pior e melhor caso do fragmento 
de código abaixo:
1   for ( i = 0 ; i < N; i = i +2)
2     printf ( ”%d” , i ) ;
3       i −−;
4         }

  Para obter a equação matemática referente à análise do pior e melhor caso do fragmento
de código fornecido, é necessário analisar quantas iterações ocorrem em cada caso.
  No pior caso, N é um número ímpar. Ou seja, o laço irá iterar até N e, em seguida, 
decrementar i em 1, resultando em N/2 iterações completas. A equação matemática é então: N/2.
  No melhor caso, N é um número par. Isso significa que o laço irá iterar até N e, em 
seguida, decrementar i em 1. Portanto, o número total de iterações no melhor caso é 
exatamente N/2. Aqui a equação também é N/2..
