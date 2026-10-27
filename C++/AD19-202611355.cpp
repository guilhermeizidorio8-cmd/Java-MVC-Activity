#include <iostream>
#include <locale>

using namespace std;

int quest1(int [], int, int, int &);

void quest2Mudar(int [], int [], int, int);
void quest2Exibir(int [], int [], int, int);

bool quest3(int [], int, int, bool &, int &, int &);

void quest4(int [], int [], int, int, int &);

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
				do{
					cout<<"\nInforme a quantidade de Linhas da matriz: ";
					cin>> l;
					cout<<"\nInforme a quantidade de Colunas da matriz: ";
					cin>> c;
				}while(l < 1 || c < 1);
				int m1[l][c], mfil;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						do{
							cout<<"\nInforme o valor do " <<j+1 << "° da " <<i+1 <<"° linha (1 para ocupado e 0 para livre): ";
							cin>> m1[i][j];
							if(m1[i][j] < 0 || m1[i][j] > 1)cout<<"\nErro! Valor invalido\n";
						}while(m1[i][j] < 0 || m1[i][j] > 1);
					}
				}
				quest1(&m1[0][0], l, c, mfil);
				cout<<"\n\nFileira com mais vagas disponiveis: " << mfil;
				break;
			}
			case '2': {
				do{
					cout<<"\nInforme a quantidade de linhas e colunas da matriz: ";
					cin>> l;
				}while(l < 1);
				c = l;
				int m2[l][c], m2m[l][c];
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"\nInforme o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m2[i][j];
					}
				}
				quest2Mudar(&m2[0][0], &m2m[0][0], l, c);
				quest2Exibir(&m2[0][0], &m2m[0][0], l, c);
				break;
			}
			case '3': {
				do{
					cout<<"\nInforme a quantidade de Linhas da matriz: ";
					cin>> l;
					cout<<"\nInforme a quantidade de Colunas da matriz: ";
					cin>> c;
				}while(l < 1 || c < 1);
				int m3[l][c], i1, i2;
				bool esp;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m3[i][j];
					}
				}
				quest3(&m3[0][0], l, c, esp, i1, i2);
				if(esp == true) cout<<"\nÉ espelhada a linha " << i1 << " e a linha " << i2;
				else cout<<"\nNão é tem linhas espelhadas";
				break;
			}
			case '4': {
				do{
					cout<<"\nInforme a quantidade de Linhas da matriz: ";
					cin>> l;
					cout<<"\nInforme a quantidade de Colunas da matriz: ";
					cin>> c;
				}while(l < 1 || c < 1);
				int p = l*c;
				int m4[l][c], v4[p], qp = 0;
				for(int i = 0; i < l; i++){
					for(int j = 0; j < c; j++){
						cout<<"Informe o valor do " <<j+1 << "° da " <<i+1 <<"° linha: ";
						cin>> m4[i][j];
					}
				}
				quest4(&m4[0][0], v4, l, c, qp);
				for(int j = 0; j < p; j++){
						if(v4[j].empty()) break;
						else cout<< v4[j] << "\t";
				}
				cout<<"\nQuantidade de Positivos: " << qp;
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
				//quest5Dig(&m5[0][0], v5, l, c);
				//soma = quest5Soma(v5, l, c, soma);
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


int quest1(int m1[], int l, int c, int &mfil) {
	int q1=0, q2=0;
	for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
			if(i == 0 && m1[i * c + j] == 0) q1++; 
			else if(m1[i * c + j] == 0) q2++;
		}
		if(q2 == q1) mfil = mfil;
		else if(q2 > q1) mfil = i+1;
		else if(i == 0) mfil = i+1;
		q1 = q2;
		q2 = 0;
    }
    return mfil;
}

void quest2Mudar(int m2[], int m2m[], int l, int c) {
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			if(i == 0 || i == 1-l || j == 0 || j == c-1) m2m[i * c + j] = 0;
			else m2m[i * c + j] = m2[i * c + j];
		}
	}
}

void quest2Exibir(int m2[], int m2m[], int l, int c) {
	cout<< "\nAntiga matriz:\n";
	for(int i = 0; i < l; i++){
		cout<<"\n";
		for(int j = 0; j < c; j++){
			cout<< m2[i * c + j] << "\t";
		}
	}
	cout<< "\nNova matriz:\n";
	for(int i = 0; i < l; i++){
		cout<<"\n";
		for(int j = 0; j < c; j++){
			cout<< m2m[i * c + j] << "\t";
		}
	}
}

bool quest3(int m3[], int l, int c, bool &esp, int &i1, int &i2){
	int q = 0;
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			for(int k = 0; k < c; j++)
					if(m3[i * c + k] == m3[j * c + k]) q++;
			if(q == l) {
				i1 = i;
				i2 = j;
				return true;	
			}
			else q = 0;
		}
	}
	return false;
}

void quest4(int m4[],int v4 [],int l,int c,int &qp){
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			if(m4[i * c + j] > 0) {
				v4[i+j] = m4[i * c + j];
				qp++;
			}
		}
	}
}