/*Atividade diaria 8
Matricula: 202611355 */

#include <iostream>
#include <locale>
using namespace std;
int n, i, op;

int quest1 (int n) {
	cout<< "Com for: \n";
	for(i = n; i >= 0; i--){
		if(i == 0){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com while: \n";
	i = n;
	while(i >= 0){
		if(i == 0){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
		i--;
	}
	cout<<"\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = n;
	do{
		if(i == 0){
			cout<< i;
		} else {
			cout<< i << ", ";
		}
		i--;
	}while(i >= 0);
	cout<<"\n-------------------------------------\n\n";
	return 0;
}

int quest2 (int n) {
	int c = 0;
	cout<< "Com for: \n";
	for(i = 1; i <= n;i++){
		if(n%3 == 0){
			if(i%3 == 0 and i == n){
				cout<<i;
				c++;
			} else if (i%3 == 0) {
				cout<< i <<",";
				c++;
			} 
		} else{
			if(i%3 == 0 and (i == n-2 or i == n-1)){
				cout<<i;
				c++;
			} 
			else if (i%3 == 0){
				cout<< i <<",";
				c++;
			} 	 			
		}
	}
	cout<<"\nMultiplos de 3: " << c <<"\n-------------------------------------\n";
	cout<< "Com while: \n";
	i = 1;
	c = 0;
	while (i <= n){
			if(n%3 == 0){
			if(i%3 == 0 and i == n){
				cout<<i;
				c++;
			} else if (i%3 == 0) {
				cout<< i <<",";
				c++;
			} 
		} else{
			if(i%3 == 0 and (i == n-2 or i == n-1)){
				cout<<i;
				c++;
			} 
			else if (i%3 == 0){
				cout<< i <<",";
				c++;
			} 	 			
		}
		i++;
	}
	cout<<"\nMultiplos de 3: " << c <<"\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 1;
	c = 0;
	do {
		if(n%3 == 0){
			if(i%3 == 0 and i == n){
				cout<<i;
				c++;
			} else if (i%3 == 0) {
				cout<< i <<",";
				c++;
			} 
		} else{
			if(i%3 == 0 and (i == n-2 or i == n-1)){
				cout<<i;
				c++;
			} 
			else if (i%3 == 0){
				cout<< i <<",";
				c++;
			} 	 			
		}
		i++;
		
	} while(i <= n);
	cout<<"\nMultiplos de 3: " << c <<"\n-------------------------------------\n";
	return 0;
}

int quest3 () {
	int p = 0, n = 0, z = 0, num;
	cout<< "Com for: \n";
	for(i = 0; i < 8;i++){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> num;
		if(num == 0){
			z++;
		} else (num > 0 ? p++ : n++);
	}
	cout<<"\n- Positivos: " << p <<"\n- Negativos: " << n <<"\n- Zeros: " << z << "\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 0, p = 0, n = 0, z = 0;
	while (i < 8) {
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> num;
		if(num == 0){
			z++;
		} else (num > 0 ? p++ : n++);
		i++;
	}
	cout<<"\n- Positivos: " << p <<"\n- Negativos: " << n <<"\n- Zeros: " << z << "\n-------------------------------------\n";
	cout<< "Com do...while: \n";
	i = 0, p = 0, n = 0, z = 0;
	do{
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> num;
		if(num == 0){
			z++;
		} else (num > 0 ? p++ : n++);
		i++;
	}while (i < 8);
	cout<<"\n- Positivos: " << p <<"\n- Negativos: " << n <<"\n- Zeros: " << z << "\n-------------------------------------\n";
	return 0;
}

int quest4 () {
	int m = 0;
	cout<< "Com for: \n";
	for(i = 0; i < 6;i++){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		(i == 0 ? m = n :(n > m ? m = n : m = m));
	}
	cout<<"\n- Maior: " << m << "\n-------------------------------------\n";
	cout<<"com while: \n";
	i = 0, m = 0;
	while(i < 6){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		(i == 0 ? m = n :(n > m ? m = n : m = m));
		i++;
	}
	cout<<"\n- Maior: " << m << "\n-------------------------------------\n";
	cout<<"com do.. while: \n";
	i = 0, m = 0;
	do{
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		(i == 0 ? m = n :(n > m ? m = n : m = m));
		i++;
	}while(i < 6);
	cout<<"\n- Maior: " << m << "\n-------------------------------------\n";
	return 0;
}

int quest5 (int n) {
	int soma = 0;
	cout<< "Com for: \n";
	for(i = 1; i <= n;i++){
		if(n%2 == 1){
			if(i%2 == 1 and i == n){
				cout<<i;
				soma+=i;
			} else if (i%2 == 1) {
				cout<< i <<"+";
				soma+=i;
			} 
		} else{
			if(i%2 == 1 and i == n-1){
				cout<<i;
				soma+=i;
			} 
			else if (i%2 == 1){
				cout<< i <<"+";
				soma+=i;
			} 	 			
		}
	}
	cout<<"\n- Soma: " << soma << "\n-------------------------------------\n";
	cout<<"com while: \n";
	i = 1, soma = 0;
	while (i <= n){
		if(n%2 == 1){
			if(i%2 == 1 and i == n){
				cout<<i;
				soma+=i;
			} else if (i%2 == 1) {
				cout<< i <<"+";
				soma+=i;
			} 
		} else{
			if(i%2 == 1 and i == n-1){
				cout<<i;
				soma+=i;
			} 
			else if (i%2 == 1){
				cout<< i <<"+";
				soma+=i;
			} 	 			
		}
		i++;
	}
	cout<<"\n- Soma: " << soma << "\n-------------------------------------\n";
	cout<<"com do...while: \n";
	i = 1, soma = 0;
	do{
		if(n%2 == 1){
			if(i%2 == 1 and i == n){
				cout<<i;
				soma+=i;
			} else if (i%2 == 1) {
				cout<< i <<"+";
				soma+=i;
			} 
		} else{
			if(i%2 == 1 and i == n-1){
				cout<<i;
				soma+=i;
			} 
			else if (i%2 == 1){
				cout<< i <<"+";
				soma+=i;
			} 	 			
		}
		i++;
	}while (i <= n);
	cout<<"\n- Soma: " << soma << "\n-------------------------------------\n";
	return 0;
}

int main() {
	int fim = 0;
	setlocale(LC_ALL,"portuguese");
	do {
		cout<<"\n Lista de questões diarias 8: \n- Questão 1\n- Questão 2\n- Questão 3\n- Questão 4\n- Questão 5\n - Encerrar: 0 \nInforme sua opção: ";
		cin>> op;
		switch(op) {
			case 1:
				cout<<"\n- Questão 1: Código que lê um número inteiro N e realiza uma contagem regressiva de N a 0\nInfome o valor de N:  ";
				cin>> n;
				if(n < 0) {
					while (n < 0) {
						cout<<"Erro! Valor invalido: ";
						cout<<"\nInfome o valor de N acima de 1: ";
						cin>> n;
					}
				}
				quest1(n);
				break;
			case 2:
				cout<<"\n- Questão 2: Código que mostra os multiplos de 3 de um intervalo entre 1 até N:\nInfome o valor de N: ";
				cin>> n;
				if(n < 1) {
					while (n < 1) {
						cout<<"Erro! Valor invalido: ";
						cout<<"\nInfome o valor de N acima de 1: ";
						cin>> n;
					}
				}
				quest2(n);
				break;
			case 3:
				cout<<"\n- Questão 3: Código que lê 8 valores e verifica a quantidade de positivos, negativos e nulos:\n";
				quest3();
				break;
			case 4:
				cout<<"\n- Questão 4: Código que lê 6 valores e verifica qual o maior deles:\n";
				quest4();
				break;
			case 5:
				cout<<"\n- Questão 5: Código que lê um número N e calcula a soma apenas dos números impares entre 1 e N:\nInfome o valor de N:  ";
				cin>> n;
				if(n < 1) {
					while (n < 1) {
						cout<<"Erro! Valor invalido: ";
						cout<<"\nInfome o valor de N acima de 1: ";
						cin>> n;
					}
				}
				quest5(n);
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