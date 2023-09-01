#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "renata.h"

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char animal[20], sexo='m', ehobeso='n', ehcastrado='n';
	float PesoGato, PesoEstimado;
	int idadeMeses,EM_Racao_KG,meses,semanas;
	float QuantidadeAlimentodia;
	
	printGatinho();
	Header();	

	printf("Gato ou Cachorro? (gato/cachorro):\n");
	scanf("%s", animal);
	Limpa();
	
	if (strcmp(animal, "gato") == 0) {
	 	Header();
	 	printf("\nQuantas semanas o Gato possui?\n");
		scanf("%i", &semanas);
		
			if(semanas>=4 && semanas<=6){
				Limpa();
				Header();
				printf("\nseu gato está na fase de DESMAME (faze de Crescimento)\n");
				
					printf("\nDigite o peso do gato:\n");
					scanf("%f", &PesoGato);
					printf("\nQual o Peso Estimado para a Raça dele?:\n");
					scanf(" %f", &PesoEstimado);
					
					Limpa();
					Header();
					double NecessidadeEnergetica = calcularNecessidadeEnergeticaPdia(PesoGato, ehcastrado, ehobeso, sexo);
					printf("\nQual a Energia Metabolizável na tabela nutricional da Ração? (kcal/kg):\n");
					scanf(" %i", &EM_Racao_KG);
					
					Limpa();
					Header();
          printf("\n-------------------------------------------------------------\n");
          double NecessidadeEnergeticaDesmame = calcularNecessidadeEnergeticaCrescimento(NecessidadeEnergetica, PesoGato, PesoEstimado);
					printf("\n - Necessidade Energetica Diária do gato em Desmame: %.2lf Kcal\n", NecessidadeEnergeticaDesmame);
					QuantidadeAlimentodia = CalculoQuantidadeComidaGramasDia(NecessidadeEnergeticaDesmame, EM_Racao_KG);
					printf("\n - Quantidade de ração para o gato (gramas ao dia): %.2lf g\n", QuantidadeAlimentodia);
					float QuantidadeAlimentoMes = CalculoQuantidadeComidaGramasMes(NecessidadeEnergeticaDesmame, EM_Racao_KG);
					printf("\n - Quantidade de ração para o gato (KG ao mês): %.2f kg\n", QuantidadeAlimentoMes/1000);
          printf("\n-------------------------------------------------------------\n");
					
			}else if(semanas>6){
				Limpa();
				Header();
				printf("seu gato já saiu da fase de DESMAME (faze de Crescimento)\n");
				
					printf("\nDigite o peso do gato:\n");
					scanf("%f", &PesoGato);
					printf("\nO gato é obeso?:(s/n)\n");
					scanf(" %c", &ehobeso);
					printf("\nO gato é castrado?:(s/n)\n");
					scanf(" %c", &ehcastrado);
					printf("\nFemea ou Macho? (f/m):\n");
					scanf(" %c", &sexo);			
					printf("\nQual a Energia Metabolizável na tabela nutricional da Ração? (kcal/kg):\n");
					scanf(" %i", &EM_Racao_KG);
					
					Limpa();
					Header();
					printf("\n-------------------------------------------------------------\n");
					double NecessidadeEnergetica = calcularNecessidadeEnergeticaPdia(PesoGato, ehcastrado, ehobeso, sexo);
					printf("\n - Necessidade Energetica Diária do gato: %.2lf Kcal\n", NecessidadeEnergetica);
					
					QuantidadeAlimentodia = CalculoQuantidadeComidaGramasDia(NecessidadeEnergetica, EM_Racao_KG);
					printf("\n - Quantidade de ração para o gato (gramas ao dia): %.2lf g\n", QuantidadeAlimentodia);
						
					float QuantidadeAlimentoMes = CalculoQuantidadeComidaGramasMes(NecessidadeEnergetica, EM_Racao_KG);
					printf("\n - Quantidade de ração para o gato (KG ao mês): %.2f kg\n", QuantidadeAlimentoMes/1000);	
					printf("\n-------------------------------------------------------------\n");				
			}

	  //-----------------------------------------------------------------------------------------------------
	    float ValorRacao=0.0, KgRacao=0.0;
	    char continuar, dobro;
	    
	    do{
	      printf("\nQual o valor da ração que você utiliza? Quantos KGs é? (R$/KG):\n");
				scanf(" %f %f", &ValorRacao, &KgRacao);	
	      
	      int tam ,i=0;
	      printf("\nVoce deseja saber os gastos de quantas semanas? :\n");
			  scanf(" %i", &tam);
	      
	      float ArraySemanalRacao[tam];
	             
	            printf("\n-------------------------------------------------------------\n\n");
	            ArrayValoresSemanaRacao(ArraySemanalRacao, ValorRacao, KgRacao, tam, QuantidadeAlimentodia);
	            for(i=1; i<=tam; i++){
	        	
	            printf(" - Semana[%i] = %.2f R$\n", i, ArraySemanalRacao[i]);
	            }
	            
	      		float soma = SomaArray(ArraySemanalRacao, tam);
	            printf("\nO gasto total foi: %.2f\n",soma);
	      		printf("\n-------------------------------------------------------------\n");
	      		
	      		printf("\nVoce deseja dobrar o valor (caso tenha 2 gatos com os mesmos dados)? (s/n):\n");
	      			scanf(" %c", &dobro);
	      			if (dobro=='s'){
	      				printf("\nO gasto total em dobro foi: %.2f\n",soma*2);
					}
	      			
	      
	            printf("\nVoce deseja testar outros valores? (s / n):\n");
			    scanf(" %c", &continuar);  
	      
	      for (i = 1; i <=tam; i++) {
	          ArraySemanalRacao[i] = 0.0;
	      }
	      
	    }while(continuar=='s');      
	  //-----------------------------------------------------------------------------------------------------
	        					
    } else if (strcmp(animal, "cachorro") == 0){
        printf("\n - Entrada é igual a 'cachorro'\n");
    }else{
    	printf("Entrada inválida\n");
	}
	
		Footer();
	
	return 0;
}
