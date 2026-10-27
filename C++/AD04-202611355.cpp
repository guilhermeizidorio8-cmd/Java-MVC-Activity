/* Atividade diária 3
   Matrícula: 202611355
   Disciplina: Algoritmos e Programação */
   
#include <iostream>
#include <locale>
using namespace std;

int quest1(){
    int v, h, fim = 0;
    float vl;
    cout<<"\nQuestão 1: Código que calcula o valor do tempo de estacionamento de um veículo!\n";
    cout<<"Informe quantas horas o veículo permaneceu no estacionamento:";
    cin>>h;
    if(h < 0){
        while(h < 0){
            cout<<"\nErro! Valor invalido";
            cout<<"\nInforme quantas horas o veículo permaneceu no estacionamento:";
            cin>>h;
        }
    }
    do{
        cout<<"\n1- Motocicleta: R$ 3,50 por hora\n2- Carro de passeio: R$ 6,00 por hora\n3- Caminhonete: R$ 8,50 por hora\n4- Van: R$ 11,00 por hora.\nInforme o tipo do seu veículo: ";
        cin>>v;
        switch (v) {
            case 1:
                vl = h*3.50;
                cout<<"\nTipo do veículo: "<< v <<" - Motocicleta\nValor a ser pago: R$" << vl;
                fim = 1;
                break;
            case 2:
                vl = h*6;
                cout<<"\nTipo do veículo: "<< v <<" - Carro de passeio\nValor a ser pago: R$" << vl;
                fim = 1;
                break;
            case 3:
                vl = h*8.50;
                cout<<"\nTipo do veículo: "<< v <<" - Caminhonete\nValor a ser pago: R$" << vl;
                fim = 1;
                break;
            case 4:
                vl = h*11;
                cout<<"\nTipo do veículo: "<< v <<" - Van\nValor a ser pago: R$" << vl;
                fim = 1;
                break;
            default:
                cout<<"Tipo de veículo inválido";
                break;
        }
    } while(fim == 0);
    return 0;
}

int quest2(){
    int op, fim = 0;
    float c, f;
    cout<<"\nQuestão 2: Código que calcula a conversão entre diferentes escalas de medição termica!\n";
    cout<<"Informe a temperatura em Celsius:";
    cin>>c;
    do{
        cout<<"\n1- Converter para Fahrenheit\n2- Converter para Kelvin\n3- Converter para Rankine\nInforme para qual escala deseja converter: ";
        cin>>op;
        switch (op) {
            case 1:
                f = (c*1.8)+32;
                cout<<"\nValor em Celsius: "<< c <<"ºC\nValor em Fahrenheit: " << f << "ºF";
                fim = 1;
                break;
            case 2:
                f = c+273.15;
                cout<<"\nValor em Celsius: "<< c <<"ºC\nValor em Kelvin: " << f << " K";
                fim = 1;
                break;
            case 3:
                f = (c+273.15)*1.8;
                cout<<"\nValor em Celsius: "<< c <<"ºC\nValor em Rankine: " << f << "ºR";
                fim = 1;
                break;
            default:
                cout<<"\nOpção invalida! Tente novamente\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int quest3(){
    int q, i;
    float vu, vl = 0, d;
    char op;
    cout<<"\nQuestão 3: Código que calcula o valor total de um conjunto de ingressos do parque!\n";
    cout<<"Informe para quantas pessoas serão comprados os ingressos:";
    cin>>q;
    if(q < 0){
        while(q < 0){
            cout<<"\nErro! Valor invalido";
            cout<<"Informe para quantas pessoas serão comprados os ingressos:";
            cin>>q;
        }
    }
    for(i = 0; i < q; i++){    
        cout<<"\nA — Infantil: R$ 25,00\nB — Estudante: R$ 32,00\nC — Adulto: R$ 50,00\nD — Área VIP: R$ 85,00\nInforme o tipo do "<< i+1 <<"º ingresso: ";
        cin>>op;
        switch (op) {
            case 'A':
                vu = 25;
                vl = vl+vu;
                cout<<"\nValor do ingresso: R$ 25,00\nValor total atual: R$ " << vl<< "\n";
                break;
            case 'B':
                vu = 32;
                vl = vl+vu;
                cout<<"\nValor do ingresso: R$ 32,00\nValor total atual: R$ " << vl<< "\n";
                break;
            case 'C':
                vu = 50;
                vl = vl+vu;
                cout<<"\nValor do ingresso: R$ 50,00\nValor total atual: R$ " << vl<< "\n";
                break;
            case 'D':
                vu = 85;
                vl = vl+vu;
                cout<<"\nValor do ingresso: R$ 85,00\nValor total atual: R$ " << vl << "\n";
                break;
            default:
                cout<<"\nOpção invalida! Tente novamente\n";
                i--;
                break;
        }
    }
    if(q >= 5){
        d = vl*0.10;
        vl = vl-d; 
        cout<<"\nPor pegar 5 ingressos ou mais, você conseguiu um desconto de: R$" << d << " no valor total";
    }
    cout<<"\nValor total dos ingressos: R$ " << vl << "\n";
    return 0;
}

int quest4(){
    int fim = 0, op;
    float p, vl;
    cout<<"\nQuestão 4: Código Que calcula uma tarifa de envio de mercadorias!\n";
    cout<<"Informe qual o peso da mercadoria:";
    cin>>p;
    if(p < 0){
        while(p < 0){
            cout<<"\nErro! Valor invalido";
            cout<<"Informe qual o peso da mercadoria:";
            cin>>p;
        }
    }
    do{
        cout<<"\n1- Entrega Econômica = R$ 8,00 + R$ 1,50 por kg\n2- Entrega Expressa = R$ 15,00 + R$ 2,50 por kg\n3- Entrega no Mesmo Dia = R$ 25,00 + R$ 4,00 por kg\n4- Retirada em Unidade = R$ 5,00, independentemente do peso\nInforme qual tipo de entrega deseja: ";
        cin>>op;
        switch (op) {
            case 1:
                vl = 8 + (p*1.5);
                cout<<"\nTipo da entrega: "<< op <<"\nValor a ser pago pela entrega: R$" << vl;
                fim = 1;
                break;
            case 2:
                vl = 15 + (p*2.5);
                cout<<"\nTipo da entrega: "<< op <<"\nValor a ser pago pela entrega: R$" << vl;
                fim = 1;
                break;
            case 3:
                vl = 25 + (p*4);
                cout<<"\nTipo da entrega: "<< op <<"\nValor a ser pago pela entrega: R$" << vl;
                fim = 1;
                break;
            case 4:
                vl = 5;
                cout<<"\nTipo da entrega: "<< op <<"\nValor a ser pago pela entrega: R$" << vl;
                fim = 1;
                break;
            default:
                cout<<"Tipo de entrega invalido";
                break;
        }
    } while(fim == 0);
    return 0;
}

int quest5(){
    int fim = 0, op;
    float s, ds, r;
    cout<<"\nQuestão 5: Código que simula um terminal bancário simplificado!\n";
    cout<<"Informe seu saldo atual:";
    cin>>s;
    if(s < 0){
        while(s < 0){
            cout<<"\nErro! Valor invalido";
            cout<<"Informe seu saldo atual:";
            cin>>s;
        }
    }
    do{
        cout<<"\n\n1- Consultar saldo\n2- Realizar depósito\n3- Realizar saque\n4- Aplicar rendimento\n0- Finalizar sistema bancário\nInforme a operação desejada: ";
        cin>>op;
        switch (op) {
            case 1:
                cout<<"\nValor atual da conta: R$"<< s;
                break;
            case 2:
                cout<<"\nInforme o valor que deseja depositar: ";
                cin>>ds;
                if(ds < 0){
                    while(ds < 0){
                        cout<<"\nErro! Valor invalido";
                        cout<<"\nInforme o valor que deseja depositar: ";
                        cin>>ds;
                    }
                }
                cout<<"\nSaldo anterior: R$"<< s <<"\nValor do depósito: R$" << ds;
                s = s+ds;
                cout<<"\nValor atual da conta após a operação: R$"<< s;
                break;
            case 3:
                cout<<"\nInforme o valor que deseja sacar: ";
                cin>>ds;
                if(ds > s || ds < 0){
                    while(ds > s || ds < 0){
                        cout<<"\nErro! Valor invalido";
                        cout<<"\nInforme o valor que deseja sacar: ";
                        cin>>ds;
                    }
                }
                cout<<"\nSaldo anterior: R$"<< s <<"\nValor do saque: R$" << ds;
                s = s-ds;
                cout<<"\nSaldo atual: R$"<< s;
                break;
            case 4:
            	r = (s*0.012);
                cout<<"\nSaldo anterior: R$"<< s <<"\nValor do rendimento: R$" << r;
                s = s+r;
                cout<<"\nSaldo atual: R$"<< s;
                break;
            case 0:
                cout<<"\nFim do sistema bancario\n";
                fim = 1;
                break;
            default:
                cout<<"\nOperação inválida\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int main() {
    char escolha;
    int fim = 0;
    setlocale(LC_ALL,"portuguese");
    cout<<"Atividade diária 3\n";
    do{
        cout<<"\nEscolha qual questão deseja testar:\n- Questão 1: Valor do Estacionamento\n- Questão 2: Conversão de Escalas de Temperatura\n- Questão 3: Ingressos pro Parque\n- Questão 4: Tarifa de entrega \n- Questão 5: Terminal bancário simplificado\n- 0: Finalizar programa \nEscolha o número da questão: ";
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


