#include <iostream>
using namespace std;

void quest1();
int somaPar(int, int *);

void quest2();
void subZero(int, int *);

void quest3();
int maio(int, int *);

void quest4();
void inverso(int *, int *);


int main() {
	char op;
	bool fim = false;
	do{
		cout<<"\nEscolha questao de 1 a 4 (So fiz 4), 0 para finalizar: \n";
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

void quest1(){
	int tam = 8;
	int v[tam];
	int *vptr = v;
	for(int i = 0; i < tam; i++){
		cin >> *vptr;
		vptr++;
	}
	vptr = v;
	for(int i = 0; i < tam; i++){
		cout<< *vptr << "\t";
		vptr++;
	}
	vptr = v;
	cout<< "\nSoma do vetor = " << somaPar(tam-1, vptr);
}
int somaPar(int t, int *p){
	if(t == 0) {
		if(*p%2 == 0) return *p;
		else return 0;
	}
	if(*p%2 == 0) {
		return *p + somaPar(t-1, p+=1);
	} 
	else return 0 + somaPar(t-1, p+=1);
}

void quest2(){
	int tam = 10;
	int v[tam];
	int *vptr = v;
	for(int i = 0; i < tam; i++){
		cin >> *vptr;
		vptr++;
	}
	vptr = v;
	cout<< "\nAntigo Vetor = ";
	for(int i = 0; i < tam; i++){
		cout<< *vptr << "\t";
		vptr++;
	}
	vptr = v;
	cout<< "\nNovo Vetor = ";
	subZero(tam-1, vptr);
}
void subZero(int t, int *p){
	if(t == 0){
		if(*p < 0) *p = 0;
		cout<< *p;
	} 
	else if(*p < 0) {
		*p = 0;
		cout<< *p << "\t";
		subZero(t-1, p+=1);
	}
	else {
		cout<< *p << "\t";
		subZero(t-1, p+=1);
	}
}

void quest3(){
	int tam = 7;
	int v[tam];
	int *vptr = v;
	for(int i = 0; i < tam; i++){
		cin >> *vptr;
		vptr++;
	}
	vptr = v;
	cout<< "\nVetor = ";
	for(int i = 0; i < tam; i++){
		cout<< *vptr << "\t";
		vptr++;
	}
	vptr = v;
	int maior =  maio(tam-1, vptr);
	cout<< "\nMaior Valor = " << maior << "\nPosicao = ";
	for(int i = 0; i < tam; i++){
		 if(maior == *vptr){
			 cout<< i;
			 break;
		 }
		 vptr++;
	}
	vptr = v;
}
int maio( int t, int *p){
	if(t == 0) return *p;
	int m = maio(t-1, p+=1);
	if(m >= *p)
		return m;
	else 
		return *p;
}

void quest4(){
	int tam = 10;
	int v[tam];
	int *viptr = v;
	int *vfptr = &v[tam-1];
	for(int i = 0; i < tam; i++){
		cin >> *viptr;
		viptr++;
	}
	viptr = v;
	cout<< "\nVetor = ";
	for(int i = 0; i < tam; i++){
		cout<< *viptr << "\t";
		viptr++;
	}
	viptr = v;
	inverso(viptr, vfptr);
	cout<< "\n";
	for(int i = 0; i < tam; i++){
		cout<< *viptr << "\t";
		viptr++;
	}
	viptr = v;
}
void inverso(int *pi, int *pf){
	int aux;
	if(pi >= pf){
		return; 
	}
	aux = *pf;
	*pf = *pi;
	*pi = aux;	
	inverso(pi+=1, pf-=1);
}