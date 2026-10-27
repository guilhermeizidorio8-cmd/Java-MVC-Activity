#include <iostream>
#include <locale>
using namespace std;
void quest1();
void quest2();
void quest3();
void quest4();
void quest5();



int main(){
	setlocale(LC_ALL,"portuguese");
	char op;
	bool fim = false;
	do{
		cout<<"Questão 1 = 1\nQuestão 2 = 2\nQuestão 3 = 3\nQuestão 4 = 4\nQuestão 5 = 5\nFinalizar = 0\n Escolha: ";
		cin>> op;
		switch(op){
			case '1': 
				quest1();
				break;
			case '2':
				quest2();
				break;
			case '3': 
				quest3();
				break;
			case '4':
				quest4();
				break;
			case '5': 
				quest5();
				break;
			case '0':
				cout<<"Fim do Programa";
				fim = true;
				break;
			default:
				cout<<"Valor invalido, tente novamente";
				break;
		}
	}while(fim == false);
	return 0;
}

void quest1(){
	int tam = 3;
	int n[tam];
	int maior, menor;
	for(int i = 0; i < tam; i++){
		cout<<"Informe o "<< i+1 <<"° valor: ";
		cin>> n[i];
		if(i == 0) {
			menor = n[i];
			maior = n[i];
			continue;
		} 
		if(n[i] > maior) maior = n[i];
		if(n[i] < menor) menor = n[i];
	}
	
	for(int i = 0; i < tam; i++){
		if(n[i] != maior && n[i]!= menor) cout<<"Valor intermediario: " <<n[i] << "\n\n";
	}
}
void quest2(){
	int tam = 3, qmaior = 0;
	int v[tam];
	int i = 0;
	do{
		cin>> v[i];
		if(v[i] == 0) break;
		else if(i == 0 && v[i] > v[tam-1]) qmaior++;
		else if(v[i] > v[i-1]) qmaior++;
		if(i == tam-1) i = 0;
		else i++;
	} while(v[i] != 0);
	cout<<"Quantidade de valores superiores ao anteiror: " << qmaior << "\n";
}
void quest3(){
	int n, a, b;
	cout<<"\nInforme um número: ";
	cin>> n;
	a = n;
	for(int i = 10; a > 0; i*=10){
		 b = a%i;
		 a = a - b;
		 cout<<b/(i/10);
	}
	cout<<"\n";
}
void quest4(){
	
}
void quest5(){
	int n; 
	int a; 
	int b; 
	int soma = 0;
	int qdivisor = 0;
	cout<<"\nInforme um número: ";
	cin>> n;
	a = n;
	for(int i = 10; a > 0; i*=10){
		 b = a%i;
		 a = a - b;
		 b = b/(i/10);
		 soma = b+soma;
	}
	for(int i = 1; i < n; i++){
		if(n%i == 0){
			qdivisor++;
		}
	}
	if(qdivisor == soma) cout<<"\nEle é especial\n";
	else cout<<"\nEle não é especial\n";
}