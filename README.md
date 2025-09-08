# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.
Desafío: Nível Mestre
Projeto educativo desenvolvido para fins académicos de aprendizagem de programação em C.

Têm 2 cartas pré-cadastradas para testar e cumprir com os requisitos do desafio.
O cadastro das cartas foi eliminado já que o desafio nível mestre é focado na comparação das cartas.
Os atributos das cartas são:
- Letra da Carta (A, B, C, D, E, F)
- Nome da Cidade
- Codigo da carta
- População (em milhões)
- Área (em km²)
- PIB (em bilhões de reais)
- Pontos Turísticos (número de pontos turísticos)
- Densidade Demográfica (calculada como população/área)
- pib_per_capita (calculada como PIB/população)
- Superpoder (calculado como a soma dos atributos: população + PIB + pontos turísticos + densidade demográfica + pib_per_capita)

No caso da densidade demográfica e do pib_per_capita, como são atributos calculados, eles não são inseridos diretamente, mas sim calculados com base nos valores fornecidos para população, área e PIB.

no momento de comparar as cartas, o programa deve calcular esses atributos automaticamente com base nos dados fornecidos.
A densidade demográfica menor indica uma área menos povoada, o que pode ser visto como um ponto positivo em termos de qualidade de vida. Portanto, ao comparar as cartas, a carta com a menor densidade demográfica deve ser considerada superior.
Requisitos pra executar o arquivo CartasSuperTrunfo.c:
- Ter um compilador C instalado (como GCC).
- Ter um editor de texto ou IDE para editar o código (opcional).
Instruções para compilar e executar:
1. Abra o terminal ou prompt de comando.
2. Navegue até o diretório onde o arquivo CartasSuperTrunfo.c está salvo.
3. Compile o código usando o comando:
   gcc -o CartasSuperTrunfo CartasSuperTrunfo.c
4. Execute o arquivo CartasSuperTrunfo e siga as instruções para jogar

Equipe de Ensino - MateCheck
