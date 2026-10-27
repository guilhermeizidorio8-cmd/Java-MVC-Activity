#include <iostream>
#include <locale>
using namespace std;
void quest1(int);
void quest2(int);
int quest3(int);
bool quest4(int [], int, int, int);
int quest5(int [], int, int);

int main(){
	setlocale(LC_ALL,"portuguese");
	char op;
	bool fim = false;
	do{
		cout<< "\nInforme a Questão deseja (Entre questão 1 a 5 e 0 para sair): ";
		cin>> op;
		switch(op){
			case '1': {
				int n;
				cin>> n;
				quest1(n);
				break;
			}
			case '2': {
				int n;
				cin>> n;
				quest2(n);
				break;
			}
			case '3': {
				int n;
				cin>> n;
				cout<< quest3(n);
				break;
			}
			case '4': {
				int tam;
				int pi;
				int valor;
				do{
					cout<<"Informe Tamanho: ";
					cin>> tam;	
				} while(tam <= 0);
				int v[tam];
				for(int i = 0; i < tam; i++) {
					cout<<"Informe Número do Vetor: ";
					cin >> v[i];
				}
				do{
					cout<<"Informe Posiçao inicial: ";
					cin>> pi;
				} while(pi < 0 || pi > tam);
				cout<<"Informe Valor a ser encontrado: ";
				cin>> valor;
				for(int i = 0; i < tam; i++)
					cout << v[i] << (i == tam-1 ? ".\n" : ", ");
				if(quest4(v, tam, pi, valor) == true)cout<< "Verdadeiro";
				else cout<< "Falso";
				break;
			}
			case '5': {
				int tam;
				int pi;
				do{
					cout<<"Informe Tamanho: ";
					cin>> tam;	
				} while(tam <= 0);
				int v[tam];
				for(int i = 0; i < tam; i++) {
					cout<<"Informe Número do Vetor: ";
					cin >> v[i];
				}
				do{
					cout<<"Informe Posiçao inicial: ";
					cin>> pi;
				} while(pi < 0 || pi > tam);
				for(int i = 0; i < tam; i++)
					cout << v[i] << (i == tam-1 ? ".\n" : ", ");
				cout<< "Qunatidade negativos: " << quest5(v, tam, pi);
				break;
			}
			case '0':
				fim = true;
				cout<< "\nFim do programa\n";
				break;
			default:
				cout<<"\nValor invalido\n";
				break;
		
		}
	}while (fim == false);

}

void quest1(int n){
	if(n == 0){
		cout<<0;
	} else{
		if(n%2 == 0) cout<< n << " ";
		n--;
		quest1(n);
	}
}


void quest2(int n){
	if(n == 0){
		
	} else{
		/* Anotação pessoal: Eu sinceramente não achei que iria funcionar,
		 mas funcionaou, que bruxaria é essa que só de fazer o chamado antes
		 de mostrar o resto é mostrado a ordem inversa? É por causa da pilha? */
		quest2(n/10);
		cout<< n%10 << " ";
	}
}
int quest3(int n){
	int q = 0;
	if(n == 0){
		return q;
	} else{
		if(n%10 > 5) q++;
		return q + quest3(n/10);
	}
}

bool quest4(int v[], int t, int p, int va){
	if(p < t){
		if(v[p-1] == va) return true;
		else {
			p++;
			quest4(v, t, p, va);
		}	
	}
	else{
		if(v[p-1] == va) return true;
		else return false;
	}
}

int quest5(int v[], int t, int p){
	int q = 0;
	if(p != t){
		if(v[p-1] < 0) q++;
		p++;
		return q + quest5(v, t, p);
	}
	else {
		if(v[p-1] < 0) q++;
		return q;
	} 
}