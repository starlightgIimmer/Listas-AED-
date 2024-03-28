2 - Qual a diferença entre Struct e Class? Inclua em sua resposta os
Modificadores de Visibilidade (+publico, -privado, #protegido).
  
  Em C++, tanto struct quanto class podem ser usados para definir tipos de dados que contêm membros de dados e membros de função e a principal diferença entre eles está na visibilidade padrão de seus membros.
  Em uma struct, todos os membros (atributos e métodos) são por padrão públicos e podem ser acessados de fora da estrutura 
sem a necessidade de especificar um modificador de acesso. 
  Já em uma class, todos os membros são por padrão privados, assim, só podem ser acessados por métodos da própria classe.
  Em uma struct, a herança é pública por padrão. 
  Em uma class, a herança é privada por padrão.
  struct é geralmente usado para pequenas estruturas de dados simples, onde os membros são geralmente públicos e a abstração é simples.
class é frequentemente usada para criar tipos de dados mais complexos, onde a encapsulação e a ocultação de informações são importantes. 
  Por exemplo, classes são frequentemente usadas em programação orientada a objetos para modelar objetos com comportamentos e atributos.
