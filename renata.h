//1-Função que calcula a Necessidade Energetica do gato de acordo com o Peso e Informações
double calcularNecessidadeEnergeticaPdia(float PesoGato, char ehcastrado, char ehobeso, char sexo);
	//Esta função é a pedra angular do projeto, calculando a necessidade energética diária do gato. Com base no peso do gato
	// e informações adicionais, como se ele é castrado, obeso ou seu sexo, esta função utiliza equações nutricionais 
	//bem estabelecidas para determinar a quantidade de energia necessária para o dia a dia do animal.

//2-Função que calcula a Necessidade Energetica do gato em desmame (semanas<=6)
double calcularNecessidadeEnergeticaCrescimento(double NecessidadeEnergetica, float PesoGato, float PesoEstimado);
	//Durante o período de crescimento, que abrange as primeiras seis semanas de vida do gato, é fundamental fornecer 
	//os nutrientes certos. Esta função ajuda a calcular a necessidade energética durante essa fase crítica, considerando
	//o peso atual do gato e seu peso estimado.

//3-Função que calcula a Quantidade de Comida em Gramas por dia
float CalculoQuantidadeComidaGramasDia(double NecessidadeEnergetica, int EM_Racao_KG);
	//Para transformar a necessidade energética em ação prática, esta função calcula a quantidade de comida necessária 
	//em gramas por dia. Ela leva em consideração a necessidade energética determinada e a energia metabolizável da ração.

//4-Função Trivial, apenas uma operação de multiplicação que calcula a Quantidade de Comida em Gramas por mes
float CalculoQuantidadeComidaGramasMes(float NecessidadeEnergetica, int EM_Racao_KG);

//5-ponteiro no vetor pra mudar o valor dele lá no main e printar os gastos (a ideia e mudar de acordo com a idade do bichano)
void ArrayValoresSemanaRacao(float *ArraySemanalRacao, float ValorRacao, float KgRacao, int tam, float QuantidadeAlimentodia);
	//Esta função utiliza um ponteiro em um vetor para armazenar os valores das semanas de alimentação. Isso permite 
	//que o programa acompanhe as mudanças nas necessidades de alimentação à medida que o gato envelhece.(falta implementar)

//6-soma o total do array de valores nas semanas
float SomaArray(float *ArraySemanalRacao, int tam);
	//Uma função de soma que calcula o total dos valores semanais armazenados no vetor. Isso proporciona uma 
	//visão geral do gasto mensal com a alimentação do gato.

//7-Fofuras
void printGatinho();
	//Adicionando um toque de fofura, esta função é responsável por exibir um gatinho 
	//que torna a interação com o programa mais agradável.

//8-Funções Trivial
void Limpa();
//9-Funções Trivial
void Footer();
//10-Funções Trivial
void Header();
	//Funções triviais que auxiliam na organização e formatação da interface do usuário, 
	//tornando a experiência de uso mais agradável.


