#include <iostream>
#include<locale>
using namespace std;

/*Anotacao pessoal: Estou chamando m1 como um array de 1 fila pois durantes minhas 
pesquisas (Sem uso de IA) para entender como utilizar Matrizes dentro de funcoes, 
posso informar a posicao da matriz na memoria utilizando ponteiro e interagir com
ela com se ela fosse um vetor, pois aparentemente as informacaos sao guardadas em 
sequencia, segue exemplo:
como eu imaginava que era guardada:
linha 1: {1 2 3}
linha 2: {4 5 6}
linha 3: {7 8 9}
como (aparentemente) e guardada:
 {1 2 3} {4 5 6} {7 8 9}
 linha 1 linha 2 linha 3

 Assim, e possivel acessar os elementos da matriz como se fosse um grande vetor em
sequencia utilizando o calculo: l * nc + c, onde: l = linha dentro da matriz, nc =
numero de colunas da matriz e c = coluna atual dentro da matriz. 
Exemplo pratico: acessar em m[3][3] a posicao m[3][0]
	Linha 0	Linha 1 Linha 2
m = {0 1 2} {3 4 5} {6 7 8}
					 ^ objetivo 
l = 2 é a linha desejada
nc = 3 é o número de colunas
c = 0 é a coluna desejada

substituindo: 2 * 3 + 0 = 6 <- Posicao que desejamos atingir.

Assim, no meu ponto de vista, fica mais facil de lidar com as matrizes dentro de
uma funcao.

Site onde vi o codigo e interpretei a informacao: 
https://gist.github.com/senapk/84f7ef45a644fc30bda3b8f605107779
*/

//Questao 1
void q1LerMostrar(int [], int , int);
void q1Vagas(int [], int , int , int &);
void q1Maior(int [], int , int);

//Questao 2
void q2Ler(int [],int ,int);
void q2Mostrar(int [],int ,int);
bool q2Simetrica(int [],int ,int);
void q2SomaDig(int [],int ,int);

//Questao 3
void q3Ler(int [],int ,int);
void q3Calcular(int [],int, int, int []);
void q3Maior(int [], int, int, int []);
void q3Menos15(int [],int ,int);

//Questao 4
void q4Ler(int [],int ,int);
void q4MaiorLinha(int [], int, int, int[]);
void q4MenorColuna(int [], int, int, int[]);
void q4PontoDestaque(int [], int, int, int[], int[]);

//Questãp 5
void q5Ler(int [], int, int);
void q5VerificarMontar(int [], int, int, int [], int &);

int main() {
	setlocale(LC_ALL,"portuguese");
	
	//main
	char op;
	bool fim = false;
	int nl, nc;

	
	do {
		cout<<"\n\nEscolha a questão que deseja testar (Questões do 1 ao 5, aperte 0 para finalizar): ";
		cin>> op;
		switch(op){
			case '1': {
				int qv = 0;
				do{
			    	cout<<"\nInforme o valor de Linhas e Colunas (Maximo de 10):\n";
					cin >> nl >> nc;
					if(nl < 1 || nl > 10 || nc < 1 || nc > 10) cout<<"\nErro! Valor invalido\n";
				}while(nl < 1 || nl > 10 || nc < 1 || nc > 10);
			    int m1[nl][nc];
			    /*Anotacao pessoal: passa a posicao do início da matriz dentro da
				  memoria para realizar o calculo por isso o ponteiro, se nao 
				  utilizar ponteiro, a funcao nao consegue acessar o valor e altero
				  de forma correta*/
			    q1LerMostrar(&m1[0][0], nl, nc);   //passa a posição do início da matriz para realizar o calculo
			    q1Vagas(&m1[0][0], nl, nc, qv);
			    q1Maior(&m1[0][0], nl, nc);
				break;
			}
			case '2': {
				bool simetric = false;
				do{
			    	cout<<"\nInforme o valor da Matriz Quadratica (Entre 2 e 10): \n";
					cin >> nl;
					if(nl < 2 || nl > 10) cout<<"\nErro! Valor invalido\n";
				}while(nl < 2 || nl > 10);
				nc = nl;
			    int m2[nl][nc];
			    q2Ler(&m2[0][0], nl, nc); 
			    q2Mostrar(&m2[0][0], nl, nc);
			    simetric = q2Simetrica(&m2[0][0], nl, nc);
			    if(simetric == true) cout<<"É simetrica";
			    else cout<<"Não é simetrica";
			    q2SomaDig(&m2[0][0], nl, nc);
				break;
			}
			case '3': {
				nl = 5, nc = 7;
			    int m3[nl][nc], media[nl];
			    q3Ler(&m3[0][0], nl, nc); 
			    q3Calcular(&m3[0][0], nl, nc, media);
			    q3Maior(&m3[0][0], nl, nc, media);
			    q3Menos15(&m3[0][0], nl, nc);
				break;
			}
			case '4':{
				do{
			    	cout<<"\nInforme o valor de Linhas e Colunas (Maximo de 10):\n";
					cin >> nl >> nc;
					if(nl < 1 || nl > 10 || nc < 1 || nc > 10) cout<<"\nErro! Valor invalido\n";
				}while(nl < 1 || nl > 10 || nc < 1 || nc > 10);
			    int m4[nl][nc], maior[nl], menor[nc];
			    q4Ler(&m4[0][0], nl, nc);
			    q4MaiorLinha(&m4[0][0], nl, nc, maior);
			    q4MenorColuna(&m4[0][0], nl, nc, menor);
			    q4PontoDestaque(&m4[0][0], nl, nc, maior, menor);
			    break;
			}
			case '5':{
				do{
			    	cout<<"\nInforme o valor da Matriz Quadratica (Entre 2 e 10): \n";
					cin >> nl;
					if(nl < 2 || nl > 10) cout<<"\nErro! Valor invalido\n";
				}while(nl < 2 || nl > 10);
				nc = nl;
				int m5[nl][nc], vm5[nl][nc], nq = 0;
				q5Ler(&m5[0][0], nl, nc);
				q5VerificarMontar(&m5[0][0], nl, nc, &vm5[0][0], nq);
				break;
			}
			case '0':
				cout<<"\nFim do programa.\n";
				fim = true;
				break;
			default:
				cout<<"\nValor invalido! Tente novamente.\n";
				break;
		}
	}while(fim == false);
    return 0;
}


/*Questão 1: A, B, C e D */

void q1LerMostrar(int m1[], int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             do{
             	cout<<"Informe se a Vaga está 0, 1 ou 2:\n";
			 	 cin >> m1[i * nc + j]; //Realiza o calculo para colocar na posicao correta no m1[i][j];
	         	 if(m1[i * nc + j] < 0 || m1[i * nc + j] > 2) cout<<"\nErro! Valor invalido\n";
	         }while(m1[i * nc + j] < 0 || m1[i * nc + j] > 2);
		}
	}
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° Fileira: \n";
        for (int j = 0; j < nc; j++) {
			 	 cout << m1[i * nc + j] << "\t" ;
		}
	}
}
void q1Vagas(int m1[], int nl, int nc, int &qv) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++)
            if(m1[i * nc + j] == 0)qv++; 
    }
	cout<<"\n\nQuantidade de vagas disponiveis: " << qv;
}

void q1Maior(int m1[], int nl, int nc) {
    int q1=0, q2=0, mfil;
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
			if(i == 0 && m1[i * nc + j] == 0) q1++; 
			else if(m1[i * nc + j] == 0) q2++;
		}
		if(q2 > q1) mfil = i+1;
		else if(i == 0) mfil = i+1;
		q1 = q2;
		q2 = 0;
    }
	cout<<"\n\nFileira com mais vagas disponiveis: " << mfil;
}
void q1Reser(int m1[], int nl, int nc){
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
			if(m1[i * nc + j] == 2){
			  cout<<"\n\nExiste uma vaga reservada disponivel";
			  break;
			}	
		}
	}
}

/*Questão 2: A, B, C e D*/

void q2Ler(int m2[],int nl,int nc){
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             	cout<<"\nInforme um valor: ";
			 	 cin >> m2[i * nc + j]; //Realiza o calculo para colocar na posicao correta no m1[i][j];	         	 
		}
	}
}
void q2Mostrar(int m2[],int nl,int nc){
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° Fileira: \n";
        for (int j = 0; j < nc; j++) {
			 cout << m2[i * nc + j] << "\t" ;
		}
	}
}
bool q2Simetrica(int m2[],int nl,int nc) {
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° Fileira: \n";
        for (int j = 0; j < nc; j++) {
			 	 if(m2[i * nc + j] != m2[j * nc + i]) return false;
		}
	}
	return true;
}

void q2SomaDig(int m2[],int nl,int nc) {
	int soma = 0;
	for (int i = 0; i < nl-1; i++) {
        for (int j = 0; j < nc; j++) {
		 	 if(j > i) soma += m2[i * nc + j];
		}
	}
	cout<<"\nSoma da parte superior da matriz: " <<soma;
}

/*Questão 3: A, B, C e D*/

void q3Ler(int m3[],int nl,int nc){
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             	cout<<"\nInforme a temperatura: ";
			 	 cin >> m3[i * nc + j];
		}
	}
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° Fileira: \n";
        for (int j = 0; j < nc; j++) {
			 cout << m3[i * nc + j] << "\t" ;
		}
	}
}

void q3Calcular(int m3[],int nl,int nc, int media[]){
	int soma = 0;
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             	soma += m3[i * nc + j];	         	 
		}
		media[i] = soma/nc;
		cout<< "\nMedia de temperatura da cidade " << i+1 << ": " << media[i];
		soma = 0;
	}
}

void q3Maior(int m3[], int nl,int nc, int media[]){
	int maior;
	for(int i = 0; i < nl; i++){
		if(i != 0 && media[i] > maior) maior = media[i];
		else if(i == 0) maior = media[i];
	}
	cout<< "\nMaior media: "<< maior;
}

void q3Menos15(int m3[],int nl,int nc){
	int q15 = 0;
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
			if(m3[i * nc + j] < 15) q15++;
		}
	}
	cout<<"\nTemperaturas registradas menor que 15: " << q15;
}

//Questão 4: A, B, C e D

void q4Ler(int m4[],int nl,int nc){
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             	cout<<"\nInforme um valor: ";
			 	 cin >> m4[i * nc + j];
		}
	}
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° linha: \n";
        for (int j = 0; j < nc; j++) {
			 cout << m4[i * nc + j] << "\t" ;
		}
	}
}

void q4MaiorLinha(int m4[],int nl,int nc, int maior[]){
	int m;
	for(int i = 0; i < nl; i++){
		for(int j = 0; j < nc; j++){
			if(j == 0) m = j;
			else if(m4[i * nc + j] > m) m = j;
		}
		maior[i] = m;
	}
}

void q4MenorColuna(int m4[],int nl,int nc, int menor[]){
	int m;
	for(int j = 0; j < nc; j++){
		for(int i = 0; i < nl; i++){
			if(i == 0) m = i;
			else if(m4[i * nc + j] < m) m = i;
		}
		menor[j] = m;
	}
}

void q4PontoDestaque(int m4[],int nl,int nc, int maior[], int menor[]){
	int q = 0;
	for(int i = 0; i < nl; i++){
		if(maior[i] == menor[i]){
			cout<<"Ponto de destaque: "<< m4[maior[i] * nc + menor[i]] ;
			q++;
		} 
	}
	if(q == 0) cout<<"Nenhum ponto de destaque encontrado.";
}

//Queestão 5: A, B eC, D

void q5Ler(int m5[], int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
             do{
             	cout<<"Informe o tipo da área entre 0, 1 ou 2:\n";
			 	 cin >> m5[i * nc + j]; //Realiza o calculo para colocar na posicao correta no m1[i][j];
	         	 if(m5[i * nc + j] < 0 || m5[i * nc + j] > 2) cout<<"\nErro! Valor invalido\n";
	         }while(m5[i * nc + j] < 0 || m5[i * nc + j] > 2);
		}
	}
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° linha: \n";
        for (int j = 0; j < nc; j++) {
			 	 cout << m5[i * nc + j] << "\t" ;
		}
	}
}

void q5VerificarMontar(int m5[], int nl, int nc, int vm5[], int &nq){
	for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            if(m5[i * nc + j] == 0)
				if(m5[(i+1) * nc + j] == 2 || m5[i * nc + j+1] == 2 || m5[i * nc + j-1] == 2 || m5[i-1 * nc + j] == 2){
					vm5[i * nc + j] = 2;
					nq++;
				} 
		}
	}
	for (int i = 0; i < nl; i++) {
		cout<<"\n" << i+1 << "° linha: \n";
        for (int j = 0; j < nc; j++) {
			 	 cout << vm5[i * nc + j] << "\t" ;
		}
	}
}
