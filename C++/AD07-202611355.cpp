#include <iostream>
#include <locale>
using namespace std;
int n, i, op;

int quest1 () {
	cout<<"\nPrograma que exibe uma sequência de números interios de 1 até N:\nInfome o valor de N: ";
	cin>> n;
	if(n < 1) {
		while (n < 1) {
		cout<<"Erro! Valor invalido: ";
			cout<<"\nInfome o valor de N: ";
			cin>> n;
		}
	}
	cout<< "Com for: \n";
	for(i = 1; i <= n; i++){
		if(i == n){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com while: \n";
	i = 1;
	while(i <= n){
		if(i == n){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
		i++;
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 1;
	do{
		if(i == n){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
		i++;
	}while(i <= n);
	cout<<"\n-------------------------------------\n\n";
	return 0;
}

int quest2 () {
	cout<<"\nPrograma que exibe a tabuada dos números de 1 a 10:\nInforme um número de 1 a 10: ";
	cin>> n;
	if(n < 1 || n > 10) {
		while (n < 1 || n > 10) {
			cout<<"Erro! Valor invalido, digite um valor entre 1 a 10:\nInforme um número de 1 a 10: ";
			cout<<"\nInfome o valor de N: ";
			cin>> n;
		}
	}
	cout<< "Com for: \n";
	for(i = 1; i <= 10; i++){
		cout<< n << " x " << i << " = " << i*n << "\n";
	}
	cout<<"---------------------\n";
	cout<< "Com while: \n";
	i = 1;
	while(i <= 10){
		cout<< n << " x " << i << " = " << i*n << "\n";
		i++;
	}
	cout<<"---------------------\n";
	cout<< "Com do...while: \n";
	i = 1;
	do{
		cout<< n << " x " << i << " = " << i*n << "\n";
		i++;
	}while(i <= 10);
	cout<<"\n-------------------------------------\n\n";
	return 0;
}
int quest3 () {
	int soma = 0;
	cout<<"\nPrograma que exibe a soma da sequência de números interios de 1 até N:\nInfome o valor de N: ";
	cin>> n;
	if(n < 1) {
		while (n < 1) {
			cout<<"Erro! Valor invalido: ";
			cout<<"\nInfome o valor de N: ";
			cin>> n;
		}
	}
	cout<< "Com for: \n";
	for(i = 1; i <= n; i++){
		if(i == n){
			cout<< i << " = ";
		} else {
			cout<< i << " + ";
		}
		soma += i;
	}
	cout<< soma << "\n-------------------------------------\n";
	cout<< "Com while: \n";
	i = 1;
	soma = 0;
	while(i <= n){
		if(i == n){
			cout<< i << " = ";
		} else {
			cout<< i << " + ";
		}
		soma += i;
		i++;
	}
	cout<< soma << "\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 1;
	soma = 0;
	do{
		if(i == n){
			cout<< i << " = ";
		} else {
			cout<< i << " + ";
		}
		soma += i;
		i++;
	}while(i <= n);
	cout<< soma <<"\n-------------------------------------\n\n";
	return 0;
}

int quest4 () {
	cout<<"\nPrograma que exibe a sequência de números pares de 1 até N:\nInfome o valor de N: ";
	cin>> n;
	if(n < 1) {
		while (n < 1) {
			cout<<"Erro! Valor invalido: ";
			cout<<"\nInfome o valor de N: ";
			cin>> n;
		}
	}
	cout<< "Com for: \n";
	for(i = 1; i <= n; i++){
		if(n%2 == 0){
			if(i%2 == 0 && i == n)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		} else {
			if(i%2 == 0 && i == n-1)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		}
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com while: \n";
	i = 1;
	while(i <= n){
		if(n%2 == 0){
			if(i%2 == 0 && i == n)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		} else {
			if(i%2 == 0 && i == n-1)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		}
		i++;
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 1;
	do{
		if(n%2 == 0){
			if(i%2 == 0 && i == n)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		} else {
			if(i%2 == 0 && i == n-1)cout<< i;
			else if(i%2 == 0) cout<< i << ", ";
		}
		i++;
	}while(i <= n);
	cout<<"\n-------------------------------------\n\n";
	return 0;
}

int quest5 () {
	float media = 0, soma = 0, nt;
	cout<<"\nPrograma que exibe a média de 5 notas de um aluno\n";
	cout<< "Com for:\n\n";
	for(i = 1; i <= 5; i++){
		cout<<"Infome a " << i << "° nota: ";
		cin>> nt;
		if(nt < 0 || nt > 10) {
			while (nt < 0 || nt > 10) {
				cout<<"Erro! Valor invalido, informe um número entre 0 e 10: ";
				cout<<"\nInfome a" << i << "nota: ";
				cin>> nt;
			}
		}
		cout<<"\n";
		soma += nt;
	}
	media = soma/5;
	cout<<"Média das notas: " << media << "\n-------------------------------------\n";
	cout<< "Com while:\n\n";
	i = 1;
	soma = 0;
	while(i <= 5){
		cout<<"Infome a " << i << "° nota: ";
		cin>> nt;
		if(nt < 0 || nt > 10) {
			while (nt < 0 || nt > 10) {
				cout<<"Erro! Valor invalido, informe um número entre 0 e 10: ";
				cout<<"\nInfome a" << i << "nota: ";
				cin>> nt;
			}
		}
		cout<<"\n";
		soma += nt;
		i++;
	}
	media = soma/5; 
	cout<<"Média das notas: " << media << "\n-------------------------------------\n";
	cout<< "Com do...while:\n\n";
	i = 1;
	soma = 0;
	do{
		cout<<"Infome a " << i << "° nota: ";
		cin>> nt;
		if(nt < 0 || nt > 10) {
			while (nt < 0 || nt > 10) {
				cout<<"Erro! Valor invalido, informe um número entre 0 e 10: ";
				cout<<"\nInfome a" << i << "nota: ";
				cin>> nt;
			}
		}
		cout<<"\n";
		soma += nt;
		i++;
	}while(i <= 5);
	media = soma/5; 
	cout<<"\nMédia das notas: " << media << "\n-------------------------------------\n\n";
	return 0;
}


int main() {
	int fim = 0;
	setlocale(LC_ALL,"portuguese");
	do {
		cout<<"\n- Questão 1\n- Questão 2\n- Questão 3\n- Questão 4\n- Questão 5\n - Encerrar: 0 \nInforme sua opção: ";
		cin>> op;
		switch(op) {
			case 1:
				quest1();
				break;
			case 2:
				quest2();
				break;
			case 3:
				quest3();
				break;
			case 4:
				quest4();
				break;
			case 5:
				quest5();
				break;
			case 0:
				fim = 1;
				break;
			default:
				cout<<"Erro!";
				break;
		}
	}while(fim == 0);
	
	return 0;
}