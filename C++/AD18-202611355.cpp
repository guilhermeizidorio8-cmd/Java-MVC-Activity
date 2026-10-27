//AD18-202611355

#include <iostream>
#include <locale>
using namespace std;


void quest1(int [], int [], int, int);


int quest2(int [], int [], int, int);


int quest3(int [], int [], int , int, int &);


void quest4Med(float [], float [], int, int);
void quest4Maior(float [], int, int, int &);


void quest5Dig(int [], int [], int , int);
int quest5Soma(int [], int, int, int);


int main(){
	setlocale(LC_ALL,"portuguese");
	int l, c;
	char op;
	bool fim = false;
	do{
		cout<<"\n\nEscolha a questão que deseja acessar (1 a 5, 0 para sair): ";
		cin>> op;
		switch(op){
			case '1': {
				l = 4, c = 5;
				int m1[l][c], v1[l];
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m1[i][j];
					}
				}
				quest1(&m1[0][0], v1, l, c);
				break;
			}
			case '2': {
				l = 5, c = 4;
				int m2[l][c], v2[c];
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m2[i][j];
					}
				}
				quest2(&m2[0][0], v2, l, c);
				for(int i = 0; i < l; i++){
					cout<<"\n";
					for(int j = 0; j < c; j++){
						cout<< m2[i][j] << "\t";
					}
				}
				cout<<"\n";
				for(int i = 0; i < c; i++){
					cout<<"Maior número da " <<i+1 <<"° coluna: " << v2[i] << "\n";
				}
				break;
			}
			case '3': {
				l = 3, c = 6;
				int m3[l][c], v3[l];
				int qp = 0;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m3[i][j];
					}
				}
				quest3(&m3[0][0], v3, l, c, qp);
				for(int i = 0; i < l; i++){
					cout<<"\n";
					for(int j = 0; j < c; j++){
						cout<< m3[i][j] << "\t";
					}
				}
				cout<<"\n";
				for(int i = 0; i < l; i++){
					cout<<"Quantidade de números pares na " <<i+1 <<"° linha: " << v3[i] << "\n";
				}
				break;
			}
			case '4': {
				l = 4, c = 4;
				float m4[l][c], v4[l];
				int maior;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m4[i][j];
					}
				}
				quest4Med(&m4[0][0], v4, l, c);
				quest4Maior(v4, l, c, maior);
				for(int i = 0; i < l; i++){
					cout<<"\n";
					for(int j = 0; j < c; j++){
						cout<< m4[i][j] << "\t";
					}
				}
				cout<<"\n";
				for(int i = 0; i < l; i++){
					cout<<"Media da " << i+1 <<"° coluna: " << v4[i] << "\n";
				}
				cout<<"\nColuna com maior media: " << maior;
				break;
			}
			case '5': {
				l = 5, c = 5;
				int m5[l][c], v5[l];
				int soma = 0;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m5[i][j];
					}
				}
				quest5Dig(&m5[0][0], v5, l, c);
				soma = quest5Soma(v5, l, c, soma);
				for(int i = 0; i < l; i++){
					cout<<"\n";
					for(int j = 0; j < c; j++){
						if(i != j) cout<< m5[i][j] << "\t";
						else cout<< "[" << m5[i][j] << "] \t";
					}
				}
				cout<<"\nDiagonal Principal: ";
				for(int i = 0; i < l; i++)
					cout<<v5[i] << (i == l-1 ? "" : ", ");
				cout<<"\nSoma da diagonal: " << soma;
				break;
			}	
			case '0':
				cout<<"\nFim do programa\n";
				fim = true;
				break;
			default:
				cout<<"\nErro! Valor invalido, tente novamente";
				break;
		}
	}while(fim == false);
	return 0;
}


//Questao 1
void quest1(int m1[], int v1[], int l, int c) {
	int soma = 0;
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++){
			soma = soma+m1[i * c + j];
		}
		v1[i] = soma;
		soma = 0;
	}
	for(int i = 0; i < l; i++){
		cout<<"\n";
		for(int j = 0; j < c; j++){
			cout<< m1[i * c + j] << "\t";
		}
	}
	for(int i = 0; i < l; i++)
	cout<<"Soma da " <<i+1 <<"° linha: " << v1[i] << "\n";
}

//Questao 2
int quest2(int m2[], int v2[], int l, int c) {
	int maior;
	for(int j = 0; j < c; j++) {
		for(int i = 0; i < l; i++){
			if(i == 0) maior = m2[i * c + j];
			else if(maior < m2[i * c + j]) maior = m2[i * c + j];
		}
		v2[j] = maior;
	}
	return 0;
}

//Questao 3
int quest3(int m3[], int v3[], int l, int c, int &qp) {
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++){
			if(m3[i * c + j]%2 == 0) qp++;
		}
		v3[i] = qp;
	}
	return 0;
}


//Questao 4
void quest4Med(float m4[], float v4[], int l, int c) {
	float media = 0;
	for(int j = 0; j < c; j++) {
		for(int i = 0; i < l; i++){
			media = media + m4[i * c + j];
		}
		v4[j] = media/l;
		media = 0;
	}
}
void quest4Maior(float v4[], int l, int c, int &maior) {
	float valor;
	for(int i = 0; i < l; i++) {
		if(i == 0){
			maior = i+1;
			valor = v4[i];
		}
		else if(v4[i] > valor){
			maior = i+1;
			valor = v4[i];
		}
	}
}


//Questao 5
void quest5Dig(int m5[], int v5[], int l, int c) {
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < c; j++){
			if (i == j) v5[i] = m5[i * c + j];
		}
	}
}
int quest5Soma(int v5[], int l, int c, int soma) {
	for(int i = 0; i < l; i++) {
		soma = soma + v5[i];
	}
	return soma;
}