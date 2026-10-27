/*Atividade diaria 14
matricula: 202611355*/

#include <iostream>
using namespace std;

int quest1(int v1[], int soma){
	for(int i = 0; i < 8; i++){
		soma += v1[i];
	}
	return soma;
}
void quest2(int v2[]){
	for(int i = 0; i < 10; i++){
		if(v2[i]%2 == 0)cout<< v2[i] << " ";
	}
}

int quest3(){
	int v3[6], maior = 0;
	for(int i = 0; i < 6; i++){
		cout<< "\nValor "<< i+1<<": ";
		cin>> v3[i];
		if(i == 0) v3[i] = maior;
		if(v3[i] > maior) maior = v3[i];
	}
	return maior;
}
void quest4(){
	int v4[5], media = 0, soma = 0;
	for(int i = 0; i < 5; i++){
		cout<< "\nValor "<< i+1<<": ";
		cin>> v4[i];
		soma += v4[i];
	}
	media = soma/5;
	cout<< media;
}
int quest5(int v5[], int qm){
	int media = 0, soma = 0;
	for(int i = 0; i < 7; i++){
		soma += v5[i];
	}
	media = soma/7;
	for(int i = 0; i < 7; i++){
		if(v5[i] > media) qm++;
	}
	return qm;
}

int main(){
	cout<< "\nQuestão 1:\n";
	int v1[8], soma = 0;
	for(int i = 0; i < 8; i++){
		cout<< "\nValor "<< i+1<<": ";
		cin>> v1[i];
	}
	soma = quest1(v1, soma);
	cout<< soma;
	
	cout<< "\nQuestão 2:\n";
	int v2[10];
	for(int i = 0; i < 10; i++){
		cout<< "\nValor "<< i+1<<": ";
		cin>> v2[i];
	}
	quest2(v2);
	
	cout<< "\nQuestão 3:\n";
	int maior;
	maior = quest3();
	cout<< maior;
	
	cout<< "\nQuestão 4:\n";
	quest4();
	
	cout<< "\nQuestão 5:\n";
	int v5[7], qm = 0;
	for(int i = 0; i < 7; i++){
		cout<< "\nValor "<< i+1<<": ";
		cin>> v1[i];
	}
	qm = quest5(v5, qm);
	cout<< qm;
}


