/*Atividade diaria 12
matricula: 202611355*/

#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

/*Utilizei IA apenas para aprender a como alterar o valor
 de uma variavel local do main dentro de uma função: 
É necessario colocar o "&" comercial antes da variavel
para identificar o endereço de memoria que deve ser enviado
o valor que será armanezado, sem ele, a funçao nao consegue
alterar o valor da variavel*/
int Q1LeitorAlunos(int &n1){
	do{
		cout<<"\nInforme a quantidade de alunos na sala: ";
		cin>> n1;
		if(n1 < 1 or n1 > 50) cout<<"\nErro! Tente novamente\n";
	} while(n1 < 1 or n1 > 50);
	return 0;
}
int Q1LeitorNotas(float &notas, int n1, float &soma, int &q7, float &media){
	for(int c = 1; c <= n1; c++){
		cout<<"\nInforme a " << c << "° nota: ";
		cin>> notas;
		if(notas >= 7) q7++;
		soma += notas;
	}
	media = soma/n1;
	return 0;
}


int Q2Expoente(int &e){
	do {	
		cout<<"\nInforme o valor do expoente: ";
		cin>> e;
		if(e < 0 or e > 20) cout<<"\nErro! Tente novamente\n";
	} while(e < 0 or e > 20);
	return 0;
}
int Q2Potencia(int b, int e, int &p){
	p = 1;
	for(int i = 1; i <= e; i++){
		p = p*b;
	}
	return 0;
}


int Q3ValidacaoN(int &n3){
	do{
		cout<<"\nInforme o valor de um numero inteiro: ";
		cin>>n3;
		if(n3 < 0 || n3 > 12) cout<<"\nErro! Tente novamente\n";
	} while(n3 < 0 || n3 > 12);
	return 0;
}
int Q3Fatorial( int &f, int n3){
	f = 1;
	for(int c = 1; c <= n3; c++){
		f = f*c;
	}	
	return 0;
}


int Q4Quantidade(int &q){
	do{
		cout<<"\nInforme quantas pessoas estão participando da pesquisa: ";
		cin>>q;
		if(q < 1 || q > 100) cout<<"\nErro! Tente novamente\n";
	} while(q < 1 || q > 100);
	return 0;
}
int Q4Idade(int q, int &id, float &soma4, float &media4, int &q17, int &q60){
	soma4 = 0, q17 = 0, q60 = 0;
	for(int c = 1; c <= q; c++){
		do{
			cout<<"\nInforme a idade do " << c << "° participante: ";
			cin>>id;
			if(id < 0 || id > 120) cout<<"\nErro! Tente novamente\n";
		} while(id < 0 || id > 120);
		if(id < 18) q17++;
		if(id > 60) q60++;
		soma4 = soma4+id;
	}
	media4 = soma4/q;
	return 0;
}

int Q5SomaDois(float &n1, float &n2, float &s){
	cout<<"Informe o valor do primeiro número: ";
	cin>>n1;
	cout<<"Informe o valor do segundo número: ";
	cin>>n2; 	
	s = n1 + n2;
	return 0;
}
int Q5MediaTres(float &n1, float &n2, float &s, float &m, float &n3){
	cout<<"Informe o valor do primeiro número: ";
	cin>>n1;
	cout<<"Informe o valor do segundo número: ";
	cin>>n2; 
	cout<<"Informe o valor do terceiro número: ";
	cin>>n3; 
	s = n1 + n2 + n3;
	m = s/3;
	return 0;
}
int Q5Sequencia(float &n1){
	do{
		cout<<"Informe o valor do primeiro número: ";
		cin>>n1;
		if(n1 < 0) cout<<"\nErro! Tente novamente\n";
	}while(n1 < 0);
	for(int c = 1; c <= n1; c++){
		cout<< c <<" ";
	}
	return 0;
}

int quest5() {
	char op;
	bool fim = false;
	float n1;
	float n2;
	float m;
	float n3;
	float s;
	do {
		cout<<"\nMenu:\n1 - Somar dois números\n2 - Calcular a média de três números\n3 - Exibir os números de 1 até N \n0 - Sair.\n Informe sua opção: ";
		cin>>op;
		switch (op) {
			case '1':
				Q5SomaDois(n1, n2, s);
				cout<<"Soma: " << s;
				break;
			case '2':
				Q5MediaTres(n1, n2, s, m, n3);
				cout<<"Média: " << m;
				break;
			case '3':
				Q5Sequencia(n1);
				break;
			case '0':
				fim = true;
				break;
			default:
				cout<<"\nTente novamente! Valor invalido\n";
		}
	} while (fim == false);
	return 0;
}

int main() {
	char op;
	bool fim = false;
	setlocale(LC_ALL, "portuguese");
	//Questao 1
	int n1;
	float notas;
	float soma = 0;
	float media;
	int q7 = 0;
	//Questao 2
	int b;
	int e;
	int p;
	//Questao 3
	int n3;
	int f;
	//Questao 4
	int q;
	int id;
	float media4;
	float soma4;
	int q17;
	int q60;
	
	do{
		cout<<"- Questão 1 \n- Questão 2\n- Questão 3\n- Questão 4\n- Questão 5\n'0' para encerar o programa\nEscolha qual questão: ";
		cin>>op;
		setlocale(LC_ALL, "portuguese");
		switch(op){
			case '1':
				cout<<"\nQuestao 1: Calculo de média e verificação de aprovação de notas\n";
				Q1LeitorAlunos(n1);
				Q1LeitorNotas(notas,n1,soma,q7, media);
				cout<< "\nMédia dos alunos: " << media << "\nQuantidade de pessoas acima de 7: " << q7 <<"\n";
				break;
			case '2':
				cout<<"\nQuestao 2: Calculo de potencia\n";
				cout<<"\nInfome a base valor: ";
				cin>> b;
				Q2Expoente(e);
				Q2Potencia(b, e, p);
				cout<< "\nPotencia: " << p << "\n";
				break;
			case '3':
				cout<<"\nQuestao 3: Calculo de fatorial\n";
				Q3ValidacaoN(n3);
				Q3Fatorial(f, n3);
				cout<< "\nFatorial: " << f << "\n";
				break;
			case '4':
				cout<<"\nQuestao 4: Leitoria de idade para pesquisa\n";
				Q4Quantidade(q);
				Q4Idade(q, id, soma4, media4, q17, q60);
				cout<< "\nMédia dos alunos: " << media4 << "\nQuantidade de pessoas abaix dos 17: " << q17 <<"\nQuantidade de pessoas a cima dos 60: " << q60 << "\n";
				break;
			case '5':
				quest5();
				break;
			case '0':
				fim = true;
				break;
			default:
				cout<<"\nValor invalido! Tente novamente\n";
				break;
		}
	}while(fim == false);
	return 0;
}