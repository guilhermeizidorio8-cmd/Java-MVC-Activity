#include<iostream>
#include<locale>
#include<string>
using namespace std;

int main () {
	setlocale(LC_ALL,"portuguese");
	
	string sit;
	float id, qp, pd, te;
	int vs, rm, vp;
	char op;
	bool fim = false;
	
	cout<<"Informe a idade do cliente: ";
	cin>> id;
	if(id < 18){
	        cout<<"O cliente não pode ser analisado.";
	        return 0;
	}
	cout<<"Informe sua renda mensal: R$";
	cin>> rm;
	if(rm <= 0){
	        cout<<"O cliente não pode ser analisado.";
	        return 0;
	}
	cout<<"Informe o valor solicitado do crédito: R$";
	cin>> vs;
	if(vs < 0){
	    while(vs < 0){
	        cout<<"\nErro! Valor invalido\n";
	        cout<<"Informe o valor solicitado do crédito: R$";
			cin>> vs;
	    }
	}
	cout<<"Informe a quantidade de parcelas: ";
	cin>> qp;
	if(qp < 0){
	    while(qp < 0){
	        cout<<"\nErro! Valor invalido\n";
	        cout<<"Informe a quantidade de parcelas: ";
			cin>> qp;
	    }
	}
	cout<<"Informe se o cliente possui alguma dívida em atraso (1 para sim e 0 para não): ";
	cin>> pd;
	if(pd < 0 || pd > 1){
	    while(pd < 0 || pd > 1){
	        cout<<"\nErro! Valor invalido\n";
	        cout<<"Informe se o cliente possui alguma dívida em atraso (1 para sim e 0 para não): ";
        	cin>> pd;
	    }
	}
	cout<<"Informe quanto tempo você trabalha em seu emprego atual, em meses: ";
	cin>> te;
	if(te < 0){
	    while(te < 0){
	        cout<<"\nErro! Valor invalido\n";
	        cout<<"Informe quanto tempo você trabalha em seu emprego atual, em meses: ";
        cin>> te;
	    }
	}
	vp = vs/qp;
	if(pd == 0 && te >= 12 && vp <= (rm*0.30)) sit = "Aprovado!";
	else sit = "Reprovado";
	
	do{
		cout<<"\n1 - Calcular valor da parcela\n2 - Verificar comprometimento da renda\n3 - Realizar análise de crédito\n4 - Exibir relatório da análise\n0 - Sair\nInforme a opação deseja: ";
		cin>>op;
		switch(op){
			case '1':
				cout<<"\nValor da parcela: R$" << vp;
				cout<<"\n";
				break;
			case '2':
			    cout <<"\nValor da parcela: R$" << vp <<"\nRenda mensal: R$"<< rm;
			    if (vp <= (rm*0.30)) cout<< "\nCompromentimento de renda: Aceita";
			    else cout<< "\nCompromentimento de renda: Negada";
				cout<<"\n";
				break;
			case '3':
				cout<<"\nSituação da análise de crédito: " << sit;
				cout<<"\n";
				break;
			case '4':
				cout <<"\nValor do crédito: R$" << vs << "\nQauntidade de parcelas: " << qp <<"\nValor da parcela: R$" << vp <<"\nRenda mensal: R$"<< rm << "\nTempo de emprego: " << te << "\nPossui divida em atraso: " << pd << "\nSituação do crédito: "<< sit;
				if(sit == "Reprovado") {
					cout<<"\nMotivos da reprovação: ";
					if(pd != 0){
						cout<<"\n- Possui dividas em atraso.";
					}
					if(te < 12){
						cout<<"\n- Tempo no emprego atual menor que 12 meses.";
					}
					if(vp > (rm*0.30)){
						cout<<"\n- Valor da parcela maior que 30% da renda mensal.";
					}
				}
				cout<<"\n";
				break;
			case '0':
				cout<<"\nFim do Programa\n";
				fim = true;
				break;
			default:
				cout<<"\nErro! Valor invalido, tente novamente.\n";
				break;
		}
	} while(fim == false);

	return 0;
}
