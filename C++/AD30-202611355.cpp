#include <iostream>
using namespace std;
void quest1();

void quest2();
void soma10(int *);

void quest3();
void zerar(int *);

void quest4();
void troca(int *, int *);

void quest5();
void somaDif(int *, int *);


int main() {
	char op;
	bool fim = false;
	do{
		cout<<"\nEscolha questao de 1 a 5, 0 para finalizar: \n";
		cin>> op;
		switch (op) {
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
				cout<<"Valor invalido.";
				break;
		}
	}while (fim == false);
	return 0;
}


void quest1() {
	int n;
	cin>> n;
	int *ptrn = &n;
	*ptrn = *ptrn*2;
	cout<< n;
}


void quest2(){
	int n;
	cin>> n;
	cout<< n << "\n";
	soma10(&n);
	cout<< n;
}
void soma10(int *x) {
	*x += 10;
}


void quest3() {
	int n;
	cin>> n;
	zerar(&n);
	cout<< n;
}
void zerar(int *x) {
	*x -= *x;
}


void quest4(){
	int n, p;
	cin>> n >> p;
	cout<< n << ", " << p;
	troca(&n, &p);
	cout<< "\n" <<n << ", " << p;
}
void troca(int *x, int *y) {
	int aux = *x;
	*x = *y;
	*y = aux;
}


void quest5(){
	int n, p;
	cin>> n >> p;
	cout<< n << ", " << p;
	somaDif(&n, &p);
	cout<< "\nSoma: " <<n << "\nDiferenca: " << p;
}
void somaDif(int *x, int *y) {
	int aux = *x;
	*x = *x + *y;
	*y = aux - *y;
}