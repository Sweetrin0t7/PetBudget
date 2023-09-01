#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include "renata.h"


double calcularNecessidadeEnergeticaPdia(float PesoGato, char ehcastrado, char ehobeso, char sexo) {
    if (ehobeso == 's') {
    	printf(" \n   É recomendável entrar em contato com um veterinario, apesar da necessidade energética aumentar a quantidade de comida, o gato está com risco de vida!\n");
        return 130 * pow(PesoGato, 0.40);
    } else {
        if (ehobeso == 'n') {
            if (ehcastrado == 's') {
                if (sexo == 'f') {
                    return 65 * pow(PesoGato, 0.67);
                } else if (sexo == 'm') {
                    return 75 * pow(PesoGato, 0.67);
                }
            } else if (ehcastrado == 'n') {
                return 100 * pow(PesoGato, 0.67);
            } else {
                printf("Tipo de Dado de Castração inválido");
                exit(0); //Coloquei por enquanto que não melhoro a lógica pra dados invalidos
            }
        } else {
            printf("Tipo de Dado de Obesidade inválido");
            exit(0);//Coloquei por enquanto que não melhoro a lógica pra dados invalidos
        }
    }
    return 0; 
}

double calcularNecessidadeEnergeticaCrescimento(double NecessidadeEnergetica, float Peso, float PesoEstimado) {
    double p = Peso / PesoEstimado ;
    	//EM (kcal/dia) = energia necessária para manutenção x 6,7 x [e(-0,189p) – 0,66]
    double necessidadeEnergeticaDesmame = NecessidadeEnergetica * 6.7 * (exp(-0.189 * p) - 0.66);
		//exp para calcular o número de Euler (e) 
    return necessidadeEnergeticaDesmame;
}

float CalculoQuantidadeComidaGramasDia(double NecessidadeEnergetica, int EM_Racao_KG){
	float QuantidadeAlimentodia = (NecessidadeEnergetica / EM_Racao_KG) * 1000;
	
	return QuantidadeAlimentodia;
}

float CalculoQuantidadeComidaGramasMes(float NecessidadeEnergetica, int EM_Racao_KG){
	float QuantidadeAlimentodiaMes = CalculoQuantidadeComidaGramasDia(NecessidadeEnergetica, EM_Racao_KG);
	
	return  QuantidadeAlimentodiaMes * 30;
}
//-----------------------------------------------------------------------------------------------------
void ArrayValoresSemanaRacao(float *ArraySemanalRacao, float ValorRacao, float KgRacao, int tam, float QuantidadeAlimentodia) {
  int i;
  float ValorG = ValorRacao / (KgRacao * 1000);
  ValorG *= QuantidadeAlimentodia;
  for (i = 1; i <=tam; i++) {
    *(ArraySemanalRacao + i)= ValorG * 7 ;
    ;
  }
}

float SomaArray(float *ArraySemanalRacao, int tam){
  float soma=0.0;
  int i;
    for (i = 1; i <=tam; i++) {
      soma += *(ArraySemanalRacao + i);
    }
  return soma;
}
//-----------------------------------------------------------------------------------------------------

void printGatinho() {
 	printf(" _  ,/|\n");
    printf("'\\`o.O'\n");
    printf(" =(_ _)=\n");
    printf("   |U|\n");
    printf("  /  | É agora que meu dono descobre que to comendo demais, ferrou amigos e amigas\n");
    printf(" //  | ");
}

void Header(){
	printf("\n------------------------------------ PetBudget ------------------------------------\n\n\n");
}
void Footer(){
	printf("\n\n\n------------------------------ PetBudget Finalizado -------------------------------\n\n\n\n");
}
void Limpa(){
	system("cls");
}


