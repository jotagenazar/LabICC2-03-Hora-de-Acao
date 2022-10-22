<p align="center">
  <img src="https://user-images.githubusercontent.com/106783009/191138556-b0ec92fb-8eb0-4151-b109-d5ca961b5c3c.png" />
</p>
Aluno: João Gabriel Manfré Nazar (13733652)

# LabICC2 - Trabalho 3 - Hora de Ação - Comparação entre Bubble Sort e Merge Sort
&ensp;Esse trabalho tem como intuito explorar a diferença de demanda computacional e tempo de execução entre um algoritmo de ordenação Bubble Sort e um algoritmo de ordenação Merge Sort. Deseja-se encontrar o número de trocas realizadas para descobrir qual dos dois participantes foi o último a trocar e portanto vencer o jogo


## Implementação do Bubble Sort

![image](https://user-images.githubusercontent.com/106783009/197308747-4251cb9e-0830-44d2-995b-8a3f3c2abba2.png)


## Implementação do Merge Sort

![image](https://user-images.githubusercontent.com/106783009/197310879-7112ff6a-5050-4e93-b0b3-c06b10c3b1e2.png)


## Casos de teste
&ensp;Os casos de teste de entrada podem ser encontrados na pasta input. A entrada consiste no tamanho do vetor que vai ser ordenado, seguida por cada elemento do vetor. As saídas do programa estão nas respectivas pastas para cada algoritmo. 

### Leitura para o Bubble Sort

![image](https://user-images.githubusercontent.com/106783009/197308781-37238d27-244c-4763-8757-130fd0aabcba.png)

### Leitura para o Merge Sort

![image](https://user-images.githubusercontent.com/106783009/197308867-11a9b8bc-d3e9-4477-995d-b6a8462c4d7f.png)


## Comparação dos Tempos de Execução
&ensp;O computador utilizado para os testes foi um notebook Dell G15 5510, com um processador Intel Core i5-10500H, funcionando conectado ao carregador com Eficiência Agressiva selecionado como opção de modo de aumento de desempenho do processador nas opções de energia do Windows 10 Pro 21H2. O computador possui 24GB de Memória RAM.

### Bubble Sort

![image](https://user-images.githubusercontent.com/106783009/197311179-8f6e869e-4da9-4be2-9829-c3359e71aeb4.png)

### Merge Sort

![image](https://user-images.githubusercontent.com/106783009/197311263-df9f5b6d-7b34-454e-b5e6-e722b93df2db.png)


## Considerações
&ensp; Nos tempos de execução, fica clara a diferença entre a complexidade de O(n*logn) do Merge Sort e O(n^2) do Bubble Sort. O Merge se saiu melhor em todos os casos e se provou como método mais eficiente para descobrir o vencedor do jogo com antecedência se comparado ao método convencional de Jaques e Fino, que se assemelha profundamente ao Bubble Sort.
