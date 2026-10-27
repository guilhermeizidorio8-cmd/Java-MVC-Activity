/* Atividade diária 2
   Matrícula: 202611355
   Disciplina: Algoritmos e Programação */
   
#include <iostream>
#include <locale>
using namespace std;
int i, n;

int quest1(){
    int maior, menor;
    cout<<"\nQuestão 1: Um programa que lê cinco inteiros, determina e imprime o maior e o menor inteiro no grupo.\n"; 
    for(i = 0; i < 5; i++){
        cout<<"Informe o " << i+1 << "° número: ";
        cin>> n;
        if(i == 0) {
            maior = n;
            menor = n;
        } 
        else if (n > maior){
               maior = n;
        } else if(n < menor){
            menor = n;
        }
    }
    cout<< "Maior = " << maior << " e Menor = " << menor;
    return 0;
}
int quest2(){
    cout<<"\nUm programa que lê um inteiro e determina e imprime se ele é par ou ímpar.\n";
    cout<<"Informe um número: ";
    cin>> n;
    if(n == 0){
        cout<<"Esse é o zero! Logo, ele é nulo.";        
    } else if(n%2 == 0){
        cout<<"Ele é par!";
    } else {
        cout<<"Ele é ímpar!";
    }
    return 0;
}
int quest3(){
    cout<<"\nUm programa que lê dois inteiros, determina e imprime se o primeiro é um múltiplo do segundo.\n";
    int n2;
    cout<<"Informe um número: ";
    cin>> n;
    cout<<"Informe outro número: ";
    cin>> n2;
    if(n2 == 0)
        cout<<"O número "<< n <<" não é multiplo do número " << n2 << ".";
    else if(n%n2 == 0)
        cout<<"O número "<< n <<" é multiplo do número " << n2 << ".";        
    else
        cout<<"O número "<< n <<" não é multiplo do número " << n2 << ".";
    return 0;
}
int quest4(){
    cout<<"\nVerificador do valor inteiro equivalente a um caractere usando coerção.\n";
    char c;
    cout<<"Informe apenas um caractere: ";
    cin>> c;
    cout << "Valor inteiro dele: " << static_cast< int > ( c );
    return 0;
}
int quest5(){
	/*Sei que escrevi "qudrado", mas quando eu tentava fazer a tabela com "quadrado"
	 ela dava um espaço muito grande entre ele e o "cubo", entao preferi deixar assim*/
    cout<<"\nTabela de quadrados e cubos de 1 a 10:\nnúmero\tqudrado\tcubo\n0\t0\t0\n1\t1\t1\n2\t4\t8\n3\t9\t27\n4\t16\t64\n5\t25\t125\n6\t36\t216\n7\t49\t343\n8\t64\t512\n9\t81\t729\n10\t100\t1000";
    return 0;
}

int main()
{
    char escolha;
    int fim = 0;
    setlocale(LC_ALL,"portuguese");
    do{
        cout<<"\nEscolha qual questão deseja testar:\n- Questão 1: Maior ou Menor\n- Questão 2: Impar ou Par\n- Questão 3: Multiplo\n- Questão 4: Coerção\n- Questão 5: Lista de Potência\n- 0: Finalizar programa \nEscolha o número da questão: ";
        cin>>escolha;
        switch(escolha) {
            case '0':
                cout<<"Fim do Programa.";
                fim = 1;
                break;
            case '1':
                quest1();
                cout<<"\n";
                break;
            case '2':
                quest2();
                cout<<"\n";
                break;
            case '3':
                quest3();
                cout<<"\n";
                break;
            case '4':
                quest4();
                cout<<"\n";
                break;
            case '5':
                quest5();
                cout<<"\n";
                break;
            default:
                cout<<"\nValor invalido\n";
                break;
        }
    } while(fim == 0);
    return 0;
}


