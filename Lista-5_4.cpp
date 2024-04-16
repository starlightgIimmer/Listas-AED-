Questão 4: Este desafio consiste em calcular 100 alturas de alunos geradas
aleatoriamente entre 1-3 metros com até duas casas decimais. Essas alturas
servirão como parâmetro para a encomendada de bebedouros de alturas
especificas para conseguir atender todas as pessoas eficientemente, da
menor até a maior. Para a programação, você deve utilizar a ordenação
BubbleSort.
  Nesse desafio deve-se mostrar todas as alturas coletadas e como saída,
deve-se mostrar todas as alturas ordenadas em ordem crescente. Além
disso, para o cálculo dos números aleatórios deve-se usar as bibliotecas e 2
comandos:

#include<time.h>

#include<stdlib.h>

srand(time(NULL));
Essa função gera um número aleatório de acordo com o tempo.

  n+rand()%k;
Essa função diz o alcance dos números sorteados: de n ate k
