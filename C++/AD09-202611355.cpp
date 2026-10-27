#include <iostream>
#include <locale>
using namespace std;
int i;
int n;
int c = 0;
float soma = 0;
int q = 0;
bool fim = false;
char op;


// Questao 1: 
int quest1For (){
	q = 0, n = 1;
	for(i = 1; n != 0; i++){
		cout<<"Informe o " << i <<"° número: ";
		cin>> n;
		if(n == 0) {
			continue;	
		} 
		soma += n;
		q++;
	}
	i = i - 2;
	cout<<"\nSoma dos valores: "<<soma << "\nQuantidade de valores validos: " << i <<"\n";
	return 0;
}
int quest1While (){
	i = 0;
	n = 1;
	while(n != 0){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		if(n == 0) continue;
		soma += n; i++;
	}
	cout<<"\nSoma dos valores: "<<soma << "\nQuantidade de valores validos: " << i <<"\n";
	return 0;
}
int quest1Do(){
	i = 0;
	do{
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		if(n == 0) continue;	
		soma += n;
		i++;	
	} while(n!=0);
	
	cout<<"\nSoma dos valores: "<<soma << "\nQuantidade de valores validos: " << i <<"\n";
	return 0;	
}

//Questão 2
int quest2For (){
	int p = 0 , ne = 0 , z = 0;
	for(i = 1; n != 999; i++){
		cout<<"Informe o " << i <<"° número: ";
		cin>> n;
		if(n == 999) {
			continue;	
		} 
		if(n == 0){
			z++;
		} else (n > 0 ? p++ : ne++);
	}
	cout<<"\nValores positivos: "<< p << "\nValores negativos: " << ne <<"\nValores nulos: "<< z;
	return 0;
}
int quest2While (){
	int p = 0 , ne = 0 , z = 0, i = 1, n = 0;
	while(n != 999){
		cout<<"Informe o " << i <<"° número: ";
		cin>> n;
		if(n == 999) {
			continue;	
		} 
		if(n == 0){
			z++;
		} else (n > 0 ? p++ : ne++);
		i++;
	}
	cout<<"\nValores positivos: "<< p << "\nValores negativos: " << ne <<"\nValores nulos: "<< z;
	return 0;
}
int quest2Do(){
	int p = 0 , ne = 0 , z = 0, i = 1;
	do{
		cout<<"Informe o " << i <<"° número: ";
		cin>> n;
		if(n == 999) {
			continue;	
		} 
		if(n == 0){
			z++;
		} else (n > 0 ? p++ : ne++);
		i++;
	}while(n != 999);
	cout<<"\nValores positivos: "<< p << "\nValores negativos: " << ne <<"\nValores nulos: "<< z;
	return 0;	
}

// Questão 3
int quest3For (){
	int ma = 0, me = 0;
	for(i = 0; n != -1; i++){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		if(n < (-1)){
			while(n < (-1)){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> n;
			}
		}
		if(n == (-1))continue;	
		(i == 0 ? ma = n :(n > ma ? ma = n : ma = ma));
		(i == 0 ? me = n :(n < me ? me = n : me = me));
	}
	cout<<"\nMaior valor "<< ma << "\nMenor valor: " << me <<"\n";
	return 0;
}
int quest3While (){
	int ma = 0, me = 0, i = 0, n = 0;
	while(n != (-1)){
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		if(n < (-1)){
			while(n < (-1)){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> n;
			}
		}
		if(n == (-1)) {
			continue;	
		} 
		(i == 0 ? ma = n :(n > ma ? ma = n : ma = ma));
		(i == 0 ? me = n :(n < me ? me = n : me = me));
		i++;
	}
	cout<<"\nMaior valor "<< ma << "\nMenor valor: " << me <<"\n";
	return 0;
}
int quest3Do(){
	int ma = 0, me = 0, i = 0;
	do{
		cout<<"Informe o " << i+1 <<"° número: ";
		cin>> n;
		if(n < (-1)){
			while(n < (-1)){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> n;
			}
		}
		if(n == (-1)) {
			continue;	
		} 
		(i == 0 ? ma = n :(n > ma ? ma = n : ma = ma));
		(i == 0 ? me = n :(n < me ? me = n : me = me));
		i++;
	} while(n !=(-1));
	
	cout<<"\nMaior valor "<< ma << "\nMenor valor: " << me <<"\n";
	return 0;	
}

// Questão 4
int quest4For (){
	soma = 0, q = 0;
	float md = 0, nt;
	for(i = 0; nt != -1; i++){
		cout<<"Informe a " << i+1 <<"° nota: ";
		cin>> nt;
		if(nt < -1 || nt > 10){
			while(nt < -1 || nt > 10){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° nota: ";
				cin>> nt;
			}
		}
		if(nt == (-1)) {
			continue;	
		}
		soma += nt;
		(nt >= 7 ? q++:  q = q);
	}
	i -=1;
	md = soma/i;
	cout<<"\nMédia das notas: "<< md << "\nQuantidade de pessoas passadas: " << q <<"\n";
	return 0;
}
int quest4While (){
	i = 0, soma = 0, q = 0;
	int md = 0;
	while(n != -1){
		cout<<"Informe a " << i+1 <<"° nota: ";
		cin>> n;
		if(n < -1 || n > 10){
			while(n < -1 || n > 10){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° nota: ";
				cin>> n;
			}
		}
		if(n == (-1)) {
			continue;	
		}
		soma += n;
		(n >= 7 ? q++:  q = q);
		i++;
	}
	md = soma/i;
	
	cout<<"\nMédia das notas: "<< md << "\nQuantidade de pessoas passadas: " << q <<"\n";
	return 0;
}
int quest4Do(){
	i = 0, soma = 0, q = 0;
	int md = 0;
	do{
		cout<<"Informe a " << i+1 <<"° nota: ";
		cin>> n;
		if(n < -1 || n > 10){
			while(n < -1 || n > 10){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° nota: ";
				cin>> n;
			}
		}
		if(n == (-1)) {
			continue;	
		}
		soma += n;
		(n >= 7 ? q++:  q = q);
		i++;
	} while(n !=(-1));
	md = soma/i;
	
	cout<<"\nMédia das notas: "<< md << "\nQuantidade de pessoas passadas: " << q <<"\n";
	return 0;	
}

// Questão 5
int quest5For (){
	soma = 0, q = 0;
	float md = 0, nt, ma = 0;
	for(i = 0; nt != 0; i++){
		cout<<"Informe o valor da " << i+1 <<"° compra: R$";
		cin>> nt;
		if(nt < 0){
			while(nt < 0){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> nt;
			}
		}
		if(nt == 0) {
			continue;	
		}
		soma += nt;
		(nt >= 100 ? q++:  q = q);
		(i == 0 ? ma = nt :(nt > ma ? ma = nt : ma = ma));
	}
	i -=1;
	md = soma/i;
	cout<<"\nValor total vendido: R$"<< soma <<"\nMédia dos valores de vendas: R$"<< md <<"\nQuantidade de vendas realizadas: " << i <<"\nQuantidade de vendas a cima de 100: " << q <<"\n";
	return 0;
}
int quest5While (){
	i = 0, soma = 0, q = 0;
	float md = 0, nt, ma = 0;
	while(nt != 0){
		cout<<"Informe o valor da " << i+1 <<"° compra: R$";
		cin>> nt;
		if(nt < 0){
			while(nt < 0){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> nt;
			}
		}
		if(nt == 0) {
			continue;	
		}
		soma += nt;
		(nt >= 100 ? q++:  q = q);
		(i == 0 ? ma = nt :(nt > ma ? ma = nt : ma = ma));
		i++;
	}
	md = soma/i;
	cout<<"\nValor total vendido: R$"<< soma <<"\nMédia dos valores de vendas: R$"<< md <<"\nQuantidade de vendas realizadas: " << i <<"\nQuantidade de vendas a cima de 100: " << q <<"\n";
	return 0;
}
int quest5Do(){
	i = 0, soma = 0, q = 0;
	float md = 0, nt, ma = 0;
	do{
		cout<<"Informe o valor da " << i+1 <<"° compra: R$";
		cin>> nt;
		if(nt < 0){
			while(nt < 0){
				cout<<"\nErro, valor invalido!\n ";
				cout<<"Informe o " << i+1 <<"° número: ";
				cin>> nt;
			}
		}
		if(nt == 0) {
			continue;	
		}
		soma += nt;
		(nt >= 100 ? q++:  q = q);
		(i == 0 ? ma = nt :(nt > ma ? ma = nt : ma = ma));
		i++;
	}while(nt != 0);
	md = soma/i;
	
	cout<<"\nValor total vendido: R$"<< soma <<"\nMédia dos valores de vendas: R$"<< md <<"\nQuantidade de vendas realizadas: " << i <<"\nQuantidade de vendas a cima de 100: " << q <<"\n";
	return 0;	
}

int main (){
	setlocale(LC_ALL,"portuguese");
	do {
		cout<<"\n\nLista de questões diarias 9: \n- Questão 1\n- Questão 2\n- Questão 3\n- Questão 4\n- Questão 5\n - Encerrar: 0 \nInforme sua opção: ";
		cin>> op;
		switch(op) {
			case '1':
				cout<<"\n- Questão 1: Código que lê valores inteiros e contabiliza e soma os valores informados (Digite 0 para terminar o ciclo): \n";
				cout<<"\nCom For: \n";
				quest1For();
				cout<<"\nCom While: \n";
				quest1While();
				cout<<"\nCom Do..While: \n";
				quest1Do();
				break;
			case '2':
				cout<<"\n- Questão 2: Código que lê valores e verifica a quantidade de positivos, negativos e nulos (Digite 999 para terminar o ciclo): ";
				cout<<"\nCom For: \n";
				quest2For();
				cout<<"\nCom While: \n";
				quest2While();
				cout<<"\nCom Do..While: \n";
				quest2Do();
				break;
			case '3':
				cout<<"\n- Questão 3: Código que lê valores inteiros e informa o maior e o menor valor válido digitado (Digite -1 para terminar o ciclo): \n";
				cout<<"\nCom For: \n";
				quest3For();
				cout<<"\nCom While: \n";
				quest3While();
				cout<<"\nCom Do..While: \n";
				quest3Do();
				break;
			case '4':
				cout<<"\n- Questão 4: Código que um programa que permita registrar as notas dos alunos de uma turma (Digite -1 para terminar o ciclo):\n";
				cout<<"\nCom For: \n";
				quest4For();
				cout<<"\nCom While: \n";
				quest4While();
				cout<<"\nCom Do..While: \n";
				quest4Do();
				break;
			case '5':
				cout<<"\n- Questão 5: Código que registra os valores das vendas realizadas durante o dia, para saber antecipadamente quantas vendas ocorrerão.\n";
				cout<<"\nCom For: \n";
				quest5For();
				cout<<"\nCom While: \n";
				quest5While();
				cout<<"\nCom Do..While: \n";
				quest5Do();
				break;
			case 0:
				fim = true;
				break;
			default:
				cout<<"Erro!";
				break;
		}
	}while(fim == false);
}