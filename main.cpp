#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Subway Randomizer
int main(){
	srand(time(NULL));
	
	//colocar as opcções de pao, sanduiche, queijo, vegetais, molhos
	int n_paes=5;
	char paes[n_paes][30] = {"9 graos", "9 graos com aveia e mel", "italiano", "parmesao e oregano", "3 queijos"};
	int n_sanduiches=14;
	char sanduiches[n_sanduiches][50] = {"beef bacon chipotle", "bmt", "frango", "presunto", "rosbife", "steak cheddar cremoso", 
	"carne e queijo", "subway club", "steak churrasco", "subway melt", "atum", "peito de peru", "vegetariano", "frango defumado com cream cheese"};
	int n_queijos=3;
	char queijos[n_queijos][20] = {"cheddar", "prato", "suico"};
	int n_vegetais=7;
	char vegetais[n_vegetais][30] = {"alface", "tomate", "pepinos", "pimentao verde", "cebola", "azeitona", "picles"};
	int n_molhos=7;
	char molhos[n_molhos][30] = {"mostarda e mel", "cebola agridoce", "barbecue", "parmesao", "chipotle", "mostarda", "maionese"};
	
	
	int chosen_pao;
	int chosen_sanduiche;
	int chosen_queijo;
	int chosen_vegetal;
	int chosen_molho;
	
	
	//escolher uma combinacao aleatoria	
	chosen_pao = rand()%n_paes;
	chosen_sanduiche = rand()%n_sanduiches;
	chosen_queijo = rand()%n_queijos;
	int n_chosen_vegetais = rand()%n_vegetais+1;
	int n_chosen_molhos = rand()%n_molhos+1;
	//int n_chosen_vegetais=7;
	//int n_chosen_molhos=7;
	
	
	//saida
	printf("Pao:\n%s\n\n", paes[chosen_pao]);
	printf("Sanduiche:\n%s\n\n", sanduiches[chosen_sanduiche]);
	printf("Queijo:\n%s\n\n", queijos[chosen_queijo]);
	
	printf("%d Vegetais:\n", n_chosen_vegetais);
	bool already_chosen_vegetais[n_vegetais] = {false};
	for(int i=0; i<n_chosen_vegetais; i++){
		if(i>0) printf(", ");
		
		do{
			chosen_vegetal = rand()%n_vegetais;
		}while(already_chosen_vegetais[chosen_vegetal]==true);
		
		already_chosen_vegetais[chosen_vegetal] = true;
		printf("%s", vegetais[chosen_vegetal]);
	}
	printf("\n\n");
	
	printf("%d Molhos:\n", n_chosen_molhos);
	bool already_chosen_molhos[n_molhos] = {false};
	for(int i=0; i<n_chosen_molhos; i++){
		if(i>0) printf(", ");
		
		do{
			chosen_molho = rand()%n_molhos;
		}while(already_chosen_molhos[chosen_molho]==true);
		
		already_chosen_molhos[chosen_molho] = true;
		printf("%s", molhos[chosen_molho]);
	}
	printf("\n\n");
	
	
	//exemplo de saida
	// pao, queijo, vegetais, molhos, sanduiche
	//["parmesao e oregano", "prato", ["tomate", "alface", "picles"], ["cebola agridoce", "parmesao"],  "bmt"]
	return 0;
}
