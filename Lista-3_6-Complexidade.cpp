6. É verdade que 2n^3 + 5 = Θ(n3)? Explique.
  Para determinar se 2n^3 + 5 = Θ(n3), precisamos encontrar funções superior e inferior que são assintoticamente limitadas pela função dada.
No caso da função o termo dominante é 2^3 quando n tende ao infinito. Portanto, podemos dizer que 2n^3 + 5 = Θ(n3) porque:
Limite superior: 
2n^3 + 5 é limitada superiormente por uma constante multiplicativa vezes n^3.
Limite inferior: Da mesma forma, 
2n^3 + 5 é limitada inferiormente por uma constante multiplicativa vezes n^3
 . Podemos escolher 
�
=
1
2
C= 
2
1
​
  e para 
�
n suficientemente grande, 
2
�
3
+
5
≥
1
2
�
3
2n 
3
 +5≥ 
2
1
​
 n 
3
 .

Portanto, podemos concluir que 
2
�
3
+
5
=
Θ
(
�
3
)
2n 
3
 +5=Θ(n 
3
 ), porque para algum 
�
1
,
�
2
>
0
C 
1
​
 ,C 
2
​
 >0 e para todo 
�
n maior que algum 
�
0
n 
0
​
 , temos:

�
1
⋅
�
3
≤
2
�
3
+
5
≤
�
2
⋅
�
3
C 
1
​
 ⋅n 
3
 ≤2n 
3
 +5≤C 
2
​
 ⋅n 
3
 

Assim, a função 
2
�
3
+
5
2n 
3
 +5 tem o mesmo comportamento assintótico que 
�
3
n 
3
 , e portanto 
2
�
3
+
5
2n 
3
 +5 é 
Θ
(
�
3
)
Θ(n 
3
 ).







