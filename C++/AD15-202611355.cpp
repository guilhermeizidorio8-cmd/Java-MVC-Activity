/*Atividade diaria 14
matricula: 202611355*/

#include <iostream>
using namespace std;

/*void quest1(int [], int);
int quest2(int [], int, int);*/
int quest3(int [], int, int, int);
int quest4();
int quest5();

int main(){
	/*//Questão 1
	int tam1 = 10;
	int v1[tam1];
	for(int i = 0; i < tam1; i++){
		cin>>v1[i];
	}
	quest1(v1, tam1);
	return 0;
	//Questão 2
	int tam2 = 50, difabs;
	int v2[tam2];
	for(int i = 0; i < tam2; i++){
		cin>>v2[i];
	}
	difabs = quest2(v2, tam2, difabs);
	cout<< difabs;
	return 0;
	//Questão 3
	int tam3 = 8, smaior, maior;
	int v3[tam3];
	for(int i = 0; i < tam3; i++){
		cin>>v3[i];
	}
	smaior = quest3(v3, tam3, smaior, maior);
	cout<< smaior;
	return 0;*/
	//Questão 4
	int tam4 = 10, soma1, soma2;
	int v4[tam4];
	bool igual = false;
	for(int i = 0; i < tam4; i++){
		cin>>v4[i];
	}
	igual = quest4(v4, tam4, soma1, soma2);
	cout<< smaior;
}

void quest1(int v1[], int tam1){
	for(int i = 5; i < tam1; i++){
		cout<<v1[i] << " ";
	}
	for(int i = 0; i < tam1/2; i++){
		cout<<v1[i] << " ";
	}
}

int quest2(int v2[], int tam2, int difabs){
	for(int i = 0; i < tam2; i++){
		if(i == 1) difabs = v2[i]-v2[i-1];
		else if(v2[i]-v2[i-1] > difabs) difabs = v2[i]-v2[i-1];
	}
	return difabs;
}

int quest3(int v3[],int tam3,int smaior,int maior){
	for(int i = 0; i < tam3; i++){
		if(i == 0) {
			maior = v3[i];
			smaior = v3[i];
		} 
		else if(i == 1) {
			if(v3[i] < maior) smaior = v3[i];
			else {
				smaior = maior;
				maior = v3[i];
			}
		}
		
		if(v3[i] > maior) {
			smaior = maior;
			maior = v3[i];
		} else if(v3[i] > smaior)
			smaior = v3[i];
			
			cout<<"\n";
			cout<< smaior << "\t";
			cout<< maior;
			cout<<"\n";
	}
	return smaior;
}

bool quest4(int v4[], int tam4, int soma1, int soma2){
	int j = tam4
	for(int i = 0; i < tam4; i++){
		if(i == 0) {
			soma1 = v4[i] + v4[j];
			j--;
		} 
		if(i == 1) soma2 = v4[i] + v4[j];
		if(soma1 == soma2) {
			return 
		}
	}
	return true;
}