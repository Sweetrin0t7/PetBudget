//1-Fun��o que calcula a Necessidade Energetica do gato de acordo com o Peso e Informa��es
double calcularNecessidadeEnergeticaPdia(float PesoGato, char ehcastrado, char ehobeso, char sexo);
	//Esta fun��o � a pedra angular do projeto, calculando a necessidade energ�tica di�ria do gato. Com base no peso do gato
	// e informa��es adicionais, como se ele � castrado, obeso ou seu sexo, esta fun��o utiliza equa��es nutricionais 
	//bem estabelecidas para determinar a quantidade de energia necess�ria para o dia a dia do animal.

//2-Fun��o que calcula a Necessidade Energetica do gato em desmame (semanas<=6)
double calcularNecessidadeEnergeticaCrescimento(double NecessidadeEnergetica, float PesoGato, float PesoEstimado);
	//Durante o per�odo de crescimento, que abrange as primeiras seis semanas de vida do gato, � fundamental fornecer 
	//os nutrientes certos. Esta fun��o ajuda a calcular a necessidade energ�tica durante essa fase cr�tica, considerando
	//o peso atual do gato e seu peso estimado.

//3-Fun��o que calcula a Quantidade de Comida em Gramas por dia
float CalculoQuantidadeComidaGramasDia(double NecessidadeEnergetica, int EM_Racao_KG);
	//Para transformar a necessidade energ�tica em a��o pr�tica, esta fun��o calcula a quantidade de comida necess�ria 
	//em gramas por dia. Ela leva em considera��o a necessidade energ�tica determinada e a energia metaboliz�vel da ra��o.

//4-Fun��o Trivial, apenas uma opera��o de multiplica��o que calcula a Quantidade de Comida em Gramas por mes
float CalculoQuantidadeComidaGramasMes(float NecessidadeEnergetica, int EM_Racao_KG);

//5-ponteiro no vetor pra mudar o valor dele l� no main e printar os gastos (a ideia e mudar de acordo com a idade do bichano)
void ArrayValoresSemanaRacao(float *ArraySemanalRacao, float ValorRacao, float KgRacao, int tam, float QuantidadeAlimentodia);
	//Esta fun��o utiliza um ponteiro em um vetor para armazenar os valores das semanas de alimenta��o. Isso permite 
	//que o programa acompanhe as mudan�as nas necessidades de alimenta��o � medida que o gato envelhece.(falta implementar)

//6-soma o total do array de valores nas semanas
float SomaArray(float *ArraySemanalRacao, int tam);
	//Uma fun��o de soma que calcula o total dos valores semanais armazenados no vetor. Isso proporciona uma 
	//vis�o geral do gasto mensal com a alimenta��o do gato.

//7-Fofuras
void printGatinho();
	//Adicionando um toque de fofura, esta fun��o � respons�vel por exibir um gatinho 
	//que torna a intera��o com o programa mais agrad�vel.

//8-Fun��es Trivial
void Limpa();
//9-Fun��es Trivial
void Footer();
//10-Fun��es Trivial
void Header();
	//Fun��es triviais que auxiliam na organiza��o e formata��o da interface do usu�rio, 
	//tornando a experi�ncia de uso mais agrad�vel.


