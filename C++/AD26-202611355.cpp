#include <iostream>
using namespace std;
int quest1(int [], int, int);
int quest2(int [], int, int, int);
int quest3(int [], int, int);
void quest4(int);
int quest5(int [], int, int);

int main(){
	int tam;
	int posi;
	int n;
	char op;
	bool fim = false;
	do{
		cout<<"\nInforme qual questao deseja acessar (Questao 1 a 5, e 0 para sair): ";
		cin>> op;
		switch(op){
		case '1': {
			posi = 0;
			cin>> tam;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest1(v, tam, posi);
			break;	
		}
		case '2': {
			cin>> tam;
			posi = tam;
			cin>> n;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest2(v, tam, posi, n);
			break;
		}
		case '3':{
			posi = 1;
			cin>> tam;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest3(v, tam, posi);
			break;
		}
		case '4':{
			posi = 0;
			cin>> n;
			quest4(n);
			break;
		}
		case '5': {
			posi = 0;
			cin>> tam;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest5(v, tam, posi);
			break;
		}
		case '0':
			fim = true;
			cout<<"\nFim do programa\n";
			break;
		default:
			cout<<"\nValor invalido, tente novamente\n";
			break;
		}
	}while(fim == false);
}

int quest1(int v[], int t, int p){
	int q = 0;
	if(p >= t) return q;
	else {
		 if((v[p] < 0 && v[p+1] > 0) || (v[p] > 0 && v[p+1] < 0)) q++;
		 return q + quest1(v, t, p+1);
	}
}
int quest2(int v[], int t, int p, int x){
	if(p <= 0) {
		return -1;
	}
	int q = quest2(v, t, p-1, x);
	if(v[p] == x){
		if(p > q) return p;
	} else{
		return q;
	}
	
}
int quest3(int v[], int t, int p){
	int q = 0;
	if(p >= t-1) return q;
	else {
		 if(v[p] > v[p-1] && v[p] > v[p+1]) q++;
		 return q + quest3(v, t, p+1);
	}
}
void quest4(int n){
	if(n == 0){
		return;
	}
	quest4(n/2);
	cout<< n%2;
}
int quest5(int v[], int t, int p){
	int soma = v[p] - v[p+1];
	if(p == t-1) {
		return soma;
	}
	else  {
		if((v[p] - v[p+1]) >= 0)
		return soma = soma + quest5(v, t, p+1);
		else
		return soma = (soma)*-1 + quest5(v, t, p+1);
	}
}