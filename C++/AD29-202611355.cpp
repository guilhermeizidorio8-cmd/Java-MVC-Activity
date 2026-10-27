#include <iostream>
#include <locale>
using namespace std;

void quest1();
int sequencia(int [], int);

void quest2();
bool regular(int [], int);

void quest3();
int intervalo(int [], int, int);

void quest4();
bool segundoMaior(int [], int);

void quest5();
int maiorSoma(int [], int);

int main(){
	char op;
	cin>> op;
	switch (op){
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
		default:
			cout<<"Valor invalido";
			break;
	}
	return 0;
}

void quest1(){
	int tam;
	cin>> tam;
	int v[tam];
	for(int i = 0; i < tam; i++)
		cin>> v[i];
	for(int i = 0; i < tam; i++)
		cout<< v[i] << "\t";
	cout<< "\n" << sequencia(v, tam - 1);
}

int sequencia(int v[], int tam){
	if(tam == 0) return 0;
	if(v[tam-1] == v[tam] && v[tam] != v[tam-2]){
		return 1 + sequencia(v, tam - 1);
	} else{
		return 0 + sequencia(v, tam - 1);
	}
}

void quest2(){
	int tam;
	cin>> tam;
	int v[tam];
	for(int i = 0; i < tam; i++)
		cin>> v[i];
	for(int i = 0; i < tam; i++)
		cout<< v[i] << "\t";
	cout<< "\n" << regular(v, tam - 2);
}

bool regular(int v[], int tam){
	if(tam <= 0) return true;
	if((v[tam] - v[tam-1]) != (v[0] - v[1])){
		return false;
	} 
	regular(v, tam-2);
}

void quest3(){
	int tam;
	int pos = 1;
	cin>> tam;
	int v[tam];
	for(int i = 0; i < tam; i++)
		cin>> v[i];
	for(int i = 0; i < tam; i++)
		cout<< v[i] << "\t";
	cout<< "\n" << intervalo(v, tam - 1, pos);
}

int intervalo(int v[], int tam, int pos){
	if(pos == tam-1) return 0;
	if(v[0] >= v[tam]){
		if(v[pos] <= v[0] && v[pos] >= v[tam])
			return 1 + intervalo(v, tam, pos+1);
		else
			return 0 + intervalo(v, tam, pos+1);
	} else{
		if(v[pos] >= v[0] && v[pos] <= v[tam])
			return 1 + intervalo(v, tam, pos+1);
		else
			return 0 + intervalo(v, tam, pos+1);
	}
}

void quest4(){
	int tam;
	cin>> tam;
	int v[tam];
	for(int i = 0; i < tam; i++)
		cin>> v[i];
	for(int i = 0; i < tam; i++)
		cout<< v[i] << (i%2 == 1 ? "\t" : ",");
	cout<< "\n" << segundoMaior(v, tam-1);
}

bool segundoMaior(int v[], int tam){
	if(tam <= 0) return true;
	if(v[tam] < v[tam-1]) {
		return false;
	} 
	segundoMaior(v, tam-2);
}

void quest5(){
	int tam;
	cin>> tam;
	int v[tam];
	for(int i = 0; i < tam; i++)
		cin>> v[i];
	for(int i = 0; i < tam; i++)
		cout<< v[i] << "\t";
	cout<< "\n" << maiorSoma(v, tam - 1);
}

int maiorSoma(int v[], int tam){
	int soma = v[tam] + v[tam-1];
	cout<<"\nSoma linha " << tam << " : " <<  soma << "\n";
	if(tam <= 1) return soma;
	int maior = maiorSoma(v, tam-1);
	if(soma < maior){
		return maior;
	} else{
		return soma;
	}
}