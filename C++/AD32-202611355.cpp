#include <iostream>
using namespace std;
void quest1();
void preencherMatriz(int *, int, int);
void exibir(int *, int, int);

void quest2();
int somaLinha(int *, int, int, int);

void quest3();
int maiorEleColuna(int *, int, int, int);

void quest4();
void multK(int *, int , int ,int, int);

void quest5();
float mediaMatriz(int *, int , int);
int maiorqMedia(int *, int, int, int, int);

void quest1(){
	int l = 3, c = 4;
	int m[l][c];
	int *mptr = &m[0][0];
	preencherMatriz(mptr, l, c);
	exibir(mptr, l, c);
}

void preencherMatriz(int *p, int l, int c){
	cout<<"\nPreencha o Vetor:\n";
	for(int i = 0; i < l*c; i++){
		cin>> *(p + i);
	}
}
void exibir(int *p, int l, int c){
	cout<<"\nMatriz Preenchida:\n";
	for(int i = 1; i <= l*c; i++){
		cout<< *(p + (i-1)) << (i%c == 0 ? "\n" : "\t");
	}
}

void quest2(){
	int l = 4, c = 5;
	int m[l][c];
	int *mptr = &m[0][0];
	int indl;
	do{
		cin>> indl;
	} while(indl < 0 || indl > 3);
	preencherMatriz(mptr, l, c);
	exibir(mptr, l, c);
	cout<<"\n- Linha escolhida: " << indl <<"\n- Soma da linha: " << somaLinha(mptr, c-1, c, indl);
}

int somaLinha(int *p, int c, int cc, int indl){
	if(c == 0) return *(p + indl * cc + c);
	else return *(p + indl * cc + c) + somaLinha(p, c-1, cc, indl);
}


void quest3(){
	int l = 4, c = 4;
	int m[l][c];
	int *mptr = &m[0][0];
	int indc;
	do{
		cin>> indc;
	} while(indc < 0 || indc > 3);
	preencherMatriz(mptr, l, c);
	exibir(mptr, l, c);
	cout<<"\n- Coluna escolhida: " << indc <<"\n- Maior elemento da coluna: " << maiorEleColuna(mptr, l-1, c, indc);
}

int maiorEleColuna(int *p, int l, int c, int indc){
	if(l == 0) return *(p + l * c + indc);
	int maior = maiorEleColuna(p, l-1, c, indc);
cout<< maior << "\n";
	if(*(p + l * c + indc) > maior) return *(p + l * c + indc);
	else return maior;
}

void quest4(){
	int l = 3, c = 3;
	int m[l][c];
	int *mptr = &m[0][0];
	int k;
	cin>> k;
	preencherMatriz(mptr, l, c);
	exibir(mptr, l, c);
	multK(mptr, l-1, c-1, c, k);
	exibir(mptr, l, c);
}

void multK(int *p, int l, int c, int cc, int k){
	if(c == 0 && l == 0) *(p + l * cc + c)*=k;
	else {
		if(l >= 0) {
			*(p + l * cc + c)*=k;
			multK(p, l-1, c, cc, k);
		} else {
			*(p + l * cc + c)*=k;
			l = cc;
			multK(p, l, c-1, cc, k);
		}
	}
}

void quest5(){
	int l = 3, c = 4;
	int m[l][c];
	int *mptr = &m[0][0];
	preencherMatriz(mptr, l, c);
	exibir(mptr, l, c);
	int media = mediaMatriz(mptr, l, c);
	cout<<"\n- Media = " << mediaMatriz(mptr, l, c);
	cout<<"\n- Elementos maiores que a media: " << maiorqMedia(mptr, l, c, (l*c)-1, media);
}

float mediaMatriz(int *p, int l, int c) {
	int soma = 0;
	for(int i = 0; i < l*c; i++)
	soma = soma + *(p+i);
	return soma/(l*c);
}

int maiorqMedia(int *p, int l, int c, int a, int m){
	if(a == 0) {
		if(*(p+a) > m) return 1;
		else return 0;
	}
	if(*(p+a) > m) return 1 + maiorqMedia(p, l, c, a-1, m);
	return 0 + maiorqMedia(p, l, c, a-1, m);		
}

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
