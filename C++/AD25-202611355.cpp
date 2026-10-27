#include <iostream>
using namespace std;
bool quest1(int [], int, int);
int quest2(int [], int, int, int);
bool quest3(int);
int quest4(int [], int, int);
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
			cin>> tam;
			cin>> posi;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest1(v, tam, posi);
			break;	
		}
		case '2': {
			cin>> tam;
			cin>> posi;
			cin>> n;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest2(v, tam, posi, n);
			break;
		}
		case '3':{
			cin>> n;
			if (quest3(n) == true) cout<< "\nPalindromo";
			else cout<<"\nNao e palindromo";
			break;
		}
		case '4':{
			cin>> tam;
			cin>> posi;
			int v[tam];
			for(int i = 0; i < tam; i++)
				cin>>v[i];
			cout<< quest4(v, tam, posi);
			break;
		}
		case '5': {
			cin>> tam;
			cin>> posi;
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

bool quest1(int v[], int t, int p){
	if(p == t) return true;
	else{
		if(v[p-1] > v[p]) return false;
		quest1(v, t, p+1);
	} 
}
int quest2(int v[], int t, int p, int x){
	int q = 0;
	if(p == t) return q;
	else {
		 if(v[p-1] == x) q++;
		 return q + quest2(v, t, p+1, x);
	}
	
}
bool quest3(int n){
	
}
int quest4(int v[], int t, int p){
	if(p == t) {
		return p;	
	}
	int ind = quest4(v, t, p+1);
	if(v[p-1] > v[ind]) return p;
	else return ind;
}
int quest5(int v[], int t, int p){
	int soma = 0;
	if(p == t) return soma = v[p-1];
	else {
		if((p-1)%2 == 0) soma = v[p-1];
		return soma+=quest5(v, t, p+1);
	}
}