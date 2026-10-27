#include<iostream>
#include<locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int fim = 0, f, qa, qr;
	float m;
	char v;
	cout<<"\nQuestão 1: Sistema de verificação de situação academia de um aluno.\n";
	do{
        cout<<"\n1- Verificar aprovação\n2- Verificar elegibilidade para monitoria\n3- Verificar necessidade de recuperação\n4- Sair\nInforme o serviço que deseja: ";
        cin>>v;
        switch (v) {
            case '1':
            	cout<<"\nVerificação de aprovação:\n";
               	cout<<"\nInforme sua média final: ";
               	cin>>m;
               	if(m < 0 || m > 10){
				   while(m < 0 || m > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua média final: ";
  					   	cin>>m;
				   }
			   }
               	cout<<"\nInforme sua porcentagem de frequencia: ";
               	cin>>f;
               	if(f < 0 || f > 100){
				   while(f < 0 || f > 100){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua porcentagem de frequencia:  ";
  					   	cin>>f;
				   }
			   }
               	cout<<"\nInforme a quantidade de atividades entregues: ";
               	cin>>qa;
               	if(qa < 0 || qa > 10){
				   while(qa < 0 || qa > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>qa;
				   }
			   }
               	if(m >= 7 && f >=75 && qa >= 8){
               		cout<<"\nO aluno está aprovado!";
				} else{
					cout<<"\nO aluno está reprovado! ";
				}
                break;
            case '2':
            	cout<<"\nVerificação de seleção pra monitoria\n";
               	cout<<"\nInforme sua média final: ";
               	cin>>m;
               	if(m < 0 || m > 10){
				   while(m < 0 || m > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua média final: ";
  					   	cin>>m;
				   }
			   }
               	cout<<"\nInforme sua porcentagem de frequencia: ";
               	cin>>f;
               	if(f < 0 || f > 100){
				   while(f < 0 || f > 100){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua porcentagem de frequencia:  ";
  					   	cin>>f;
				   }
			   }
               	cout<<"\nInforme a quantidade de atividades entregues: ";
               	cin>>qa;
               	if(qa < 0 || qa > 10){
				   while(qa < 0 || qa > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>qa;
				   }
			   }
			   cout<<"\nInforme a quantidade de reprovações em uma disciplica: ";
      			cin>>qr;
               	if(qr < 0){
				   while(qr < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de reprovações em uma disciplica: ";
  					   	cin>>qr;
				   }
			   }
               	if(m >= 8 && f >=85 && qa >= 10 && qr == 0){
               		cout<<"\nO aluno poderá participar da seleção de monitoria!";
				} else{
					cout<<"\nO aluno não poderá participar da seleção de monitoria ";
				}
                break;
            case '3':
                cout<<"\nVerificação de necessidade de recuperação:\n";
               	cout<<"\nInforme sua média final: ";
               	cin>>m;
               	if(m < 0 || m > 10){
				   while(m < 0 || m > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua média final: ";
  					   	cin>>m;
				   }
			   }
               	cout<<"\nInforme sua porcentagem de frequencia: ";
               	cin>>f;
               	if(f < 0 || f > 100){
				   while(f < 0 || f > 100){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua porcentagem de frequencia:  ";
  					   	cin>>f;
				   }
			   }
               	cout<<"\nInforme a quantidade de atividades entregues: ";
               	cin>>qa;
               	if(qa < 0 || qa > 10){
				   while(qa < 0 || qa > 10){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>qa;
				   }
			   }
               	if((m < 7 && m >= 4) && f >=75 && qa >= 6){
               		cout<<"\nO aluno deve realizar recuperação!";
				} else{
					cout<<"\nO aluno não deve realizar recuperação! ";
				}
                break;
            case '4':
                cout<<"\nPrograma Encerrado.";
                fim = 1;
                break;
            default:
                cout<<"\nOpção Invalida! Tente Novamente.\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int fim = 0, id, pc, t;
	float rm, vp;
	char v;
	cout<<"Questão 2: Sistema de analise de diferentes tipos de pedidos de empréstimo";
	do{
        cout<<"\n1- Analisar empréstimo pessoal\n2- Analisar financiamento de veículo\n3- Analisar crédito especial\n4- Sair\nInforme o serviço que deseja: ";
        cin>>v;
        switch (v) {
            case '1':
            	cout<<"\nVerificação de aprovação de empréstimo pessoal\n";
               	cout<<"\nInforme sua renda mensal: R$";
               	cin>>rm;
               	if(rm < 0){
				   while(rm < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua renda mensal: R$";
  					   	cin>>rm;
				   }
			   }
               	cout<<"\nInforme o valor da prestação solicitada: ";
               	cin>>vp;
               	if(vp < 0){
				   while(vp < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o valor da prestação solicitada:  ";
  					   	cin>>vp;
				   }
			   }
               	cout<<"\nInforme a pontuação de crédito: ";
               	cin>>pc;
               	if(pc < 0 || pc > 1000){
				   while(pc < 0 || pc > 1000){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>pc;
				   }
			   }
			   cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
  					   	cin>>t;
				   }
			   }
               	if(rm >= 2500 && vp <= (rm*0.3) && pc >= 650 && t >= 6){
               		cout<<"\nO seu emprestimo foi aprovado!";
				} else{
					cout<<"\nO seu emprestimo foi reprovado! ";
				}
                break;
            case '2':
            	cout<<"\nVerificação de financiamento de um veiculo\n";
            	cout<<"\nInforme a idade do cliente: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInformea idade do cliente: ";
  					   	cin>>id;
				   }
			   }
               	cout<<"\nInforme sua renda mensal: R$";
               	cin>>rm;
               	if(rm < 0){
				   while(rm < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua renda mensal: R$";
  					   	cin>>rm;
				   }
			   }
               	cout<<"\nInforme o valor da prestação solicitada: ";
               	cin>>vp;
               	if(vp < 0){
				   while(vp < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o valor da prestação solicitada:  ";
  					   	cin>>vp;
				   }
			   }
               	cout<<"\nInforme a pontuação de crédito: ";
               	cin>>pc;
               	if(pc < 0 || pc > 1000){
				   while(pc < 0 || pc > 1000){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>pc;
				   }
			   }
			   cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
  					   	cin>>t;
				   }
			   }
               	if((rm* 0.35) >= vp && (id >= 21 && id <= 65) && pc >= 700 && t >= 12){
               		cout<<"\nO seu financiamento foi aprovado!";
				} else{
					cout<<"\nO seu financiamento foi reprovado ";
				}
                break;
            case '3':
                cout<<"\nVerificação de crédito especial:\n";
               	cout<<"\nInforme sua renda mensal: R$";
               	cin>>rm;
               	if(rm < 0){
				   while(rm < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua renda mensal: R$";
  					   	cin>>rm;
				   }
			   }
               	cout<<"\nInforme o valor da prestação solicitada: ";
               	cin>>vp;
               	if(vp < 0){
				   while(vp < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o valor da prestação solicitada:  ";
  					   	cin>>vp;
				   }
			   }
               	cout<<"\nInforme a pontuação de crédito: ";
               	cin>>pc;
               	if(pc < 0 || pc > 1000){
				   while(pc < 0 || pc > 1000){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a quantidade de atividades entregues: ";
  					   	cin>>pc;
				   }
			   }
			   cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo no emprego atual, em meses: ";
  					   	cin>>t;
				   }
			   }
               	if((rm*0.25) >= vp && t >= 24 && pc >= 800 && rm >= 5000){
               		cout<<"\nA solicitação de crédito especial foi aprovada!";
				} else{
					cout<<"\nA solicitação de crédito especial foi reprovada.";
				}
                break;
            case '4':
                cout<<"\nPrograma Encerrado.";
                fim = 1;
                break;
            default:
                cout<<"\nOpção Invalida! Tente Novamente.\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int fim = 0, id, na, is, h, t;
	char v;
	cout<<"Questão 3: Sistema empresarial para acesso a diferentes áreas da mesma.";
	do{
        cout<<"\n1- Acessar área administrativa\n2- Acessar laboratório\n3- Acessar sala de servidores\n4- Sair\nInforme a área que deseja acessar: ";
        cin>>v;
        switch (v) {
            case '1':
            	cout<<"\nTentativa de acesso a área Administrativa\n";
               	cout<<"\nInforme seu nível de acesso: ";
               	cin>>na;
               	if(na < 1 || na > 5){
				   while(na < 1 || na > 5){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme seu nível de acesso: ";
  					   	cin>>na;
				   }
			   }
               	cout<<"\nInforme o horario atual: ";
               	cin>>h;
               	if(h < 0 || h > 23){
				   while(h < 0 || h > 23){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o horario atual:  ";
  					   	cin>>h;
				   }
			   }
			   cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
  					   	cin>>t;
				   }
			   }
               	if(na >= 2 && t >= 3 && h >= 6 && h <= 22){
               		cout<<"\nAcesso Liberado!";
				} else{
					cout<<"\nAcesso negado.";
				}
                break;
            case '2':
            	cout<<"\nTentativa de acesso a área dos Laboratórios\n";
            	cout<<"\nInforme seu nível de acesso: ";
               	cin>>na;
               	if(na < 1 || na > 5){
				   while(na < 1 || na > 5){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme seu nível de acesso: ";
  					   	cin>>na;
				   }
			   }
               	cout<<"\nInforme sua idade: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua idade:  ";
  					   	cin>>id;
				   }
			   }
			   cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
  					   	cin>>t;
				   }
			   }
			   cout<<"\nInforme se possue treinamento de segurança (1 para realizado e 0 para não realizado): ";
               	cin>>is;
               	if(is < 0 || is > 1){
				   while(is < 0 || is > 1){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme se possue treinamento de segurança (1 para realizado e 0 para não realizado): ";
  					   	cin>>is;
				   }
			   }
               	if(na >= 3 && t >= 6 && is == 1 && id >= 18){
               		cout<<"\nAcesso Liberado!";
				} else{
					cout<<"\nAcesso negado.";
				}
                break;
            case '3':
                cout<<"\nTentativa de acesso a área da sala dos servidores:\n";
               	cout<<"\nInforme seu nível de acesso: ";
               	cin>>na;
               	if(na < 1 || na > 5){
				   while(na < 1 || na > 5){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme seu nível de acesso: ";
  					   	cin>>na;
				   }
			   }
               	cout<<"\nInforme sua idade: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme sua idade:  ";
  					   	cin>>id;
				   }
			   }
			   cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o seu tempo de emprego na empresa, em meses: ";
  					   	cin>>t;
				   }
			   }
			   cout<<"\nInforme se possue treinamento de segurança (1 para realizado e 0 para não realizado): ";
               	cin>>is;
               	if(is < 0 || is > 1){
				   while(is < 0 || is > 1){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme se possue treinamento de segurança (1 para realizado e 0 para não realizado): ";
  					   	cin>>is;
				   }
			   }
			   cout<<"\nInforme o horario atual: ";
               	cin>>h;
               	if(h < 0 || h > 23){
				   while(h < 0 || h > 23){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o horario atual:  ";
  					   	cin>>h;
				   }
			   }
               	if(na >= 4 && t >= 12 && is == 1 && id >= 21 && h >= 8 && h <=18){
               		cout<<"\nAcesso Liberado!";
				} else{
					cout<<"\nAcesso negado.";
				}
                break;
            case '4':
                cout<<"\nPrograma Encerrado.";
                fim = 1;
                break;
            default:
                cout<<"\nOpção Invalida! Tente Novamente.\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int fim = 0, qd, f;
	float pe, d, vm;
	char v;
	cout<<"Questão 4: Código pra verificar o tipo de entrega.";
	do{
        cout<<"\n1- Verificar entrega expressa\n2- Verificar entrega convencional\n3- Verificar necessidade de tratamento especial\n4- Sair\nInforme qual serviço deseja acessar: ";
        cin>>v;
        switch (v) {
            case '1':
            	cout<<"\nVerificação de entrega expressa\n";
               	cout<<"\nInforme o peso da encomenda: ";
               	cin>>pe;
               	if(pe < 0){
				   while(pe < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme o peso da encomenda: ";
  					   	cin>>pe;
				   }
			   }
               	cout<<"\nInforme a distância da entraga: ";
               	cin>>d;
               	if(d < 0){
				   while(d < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a distância da entraga:  ";
  					   	cin>>d;
				   }
			   }
			   cout<<"\nInforme o prazo de dias da entrega: ";
               	cin>>qd;
               	if(qd < 0){
				   while(qd < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o prazo de dias da entrega: ";
  					   	cin>>qd;
				   }
			   }
			   cout<<"\nInforme se o produto é frágil (1 para sim e 0 para não): ";
               	cin>>f;
               	if(f < 0 || f > 1){
				   while(f < 0 || f > 1){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme se o produto é frágil (1 para sim e 0 para não): ";
  					   	cin>>f;
				   }
			   }
               	if(pe <= 10 && d <= 300 && qd <= 2 && f == 0){
               		cout<<"\nEntrega aprovada para esse tipo!";
				} else{
					cout<<"\nEntrega reprovada para esse tipo.";
				}
                break;
            case '2':
            	cout<<"\nVerificação de entrega convencional\n";
               	cout<<"\nInforme o peso da encomenda: ";
               	cin>>pe;
               	if(pe < 0){
				   while(pe < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme o peso da encomenda: ";
  					   	cin>>pe;
				   }
			   }
               	cout<<"\nInforme a distância da entraga: ";
               	cin>>d;
               	if(d < 0){
				   while(d < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o horario atual:  ";
  					   	cin>>d;
				   }
			   }
			   cout<<"\nInforme o prazo de dias da entrega: ";
               	cin>>qd;
               	if(qd < 0){
				   while(qd < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o prazo de dias da entrega: ";
  					   	cin>>qd;
				   }
			   }
               	if(pe <= 30 && d <= 1000 && qd <= 3){
               		cout<<"\nEntrega aprovada para esse tipo!";
				} else{
					cout<<"\nEntrega reprovada para esse tipo.";
				}
                break;
            case '3':
                cout<<"\nVerificar se a mercadoria precisa de tratamento especial\n";
               	cout<<"\nInforme o peso da encomenda: ";
               	cin>>pe;
               	if(pe < 0){
				   while(pe < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme o peso da encomenda: ";
  					   	cin>>pe;
				   }
			   }
               	cout<<"\nInforme o valor da entrega: ";
               	cin>>vm;
               	if(vm < 0){
				   while(vm < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o valor da entrega: ";
  					   	cin>>vm;
				   }
			   }
			   cout<<"\nInforme se o produto é frágil (1 para sim e 0 para não): ";
               	cin>>f;
               	if(f < 0 || f > 1){
				   while(f < 0 || f > 1){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme se o produto é frágil (1 para sim e 0 para não): ";
  					   	cin>>f;
				   }
			   }
               	if(pe >= 30 && vm >= 5000 && f == 1){
               		cout<<"\nEntrega aprovada para esse tipo!";
				} else{
					cout<<"\nEntrega reprovada para esse tipo.";
				}
                break;
            case '4':
                cout<<"\nPrograma Encerrado.";
                fim = 1;
                break;
            default:
                cout<<"\nOpção Invalida! Tente Novamente.\n";
                break;
        }
    } while(fim == 0);
    return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int fim = 0, id, fc, t, qt, pf;
	char v;
	cout<<"Questão 5: Sistema de centro esportivo para participar de diferentes modalidades.";
	do{
        cout<<"\n1- Seleção para corrida\n2- Seleção para natação\n3- Seleção para competição de resistência\n4- Sair\nInforme qual modalidade deseja acessar: ";
        cin>>v;
        switch (v) {
            case '1':
            	cout<<"\nSeleção para corrida\n";
               	cout<<"\nInforme a idade do aluno: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme a idade do aluno: ";
  					   	cin>>id;
				   }
			   }
               	cout<<"\nInforme a frequência cardíaca em repouso: ";
               	cin>>fc;
               	if(fc < 0){
				   while(fc < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a frequência cardíaca em repouso: ";
  					   	cin>>fc;
				   }
			   }
			   cout<<"\nInforme o tempo que completou uma corrida de 2km, em minutos: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o tempo que completou uma corrida de 2km, minutos: ";
  					   	cin>>t;
				   }
			   }
			   cout<<"\nInforme qual seu percentual frequência de atividades do centro esportivo: ";
               	cin>>qt;
               	if(qt < 0){
				   while(qt < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme qual seu percentual frequência de atividades do centro esportivo: ";
  					   	cin>>qt;
				   }
			   }
               	if(id >= 18 && id <= 55 && fc >= 50 && fc <=90 && t <= 15 && qt >= 8){
               		cout<<"\nVocê está aprovado para esse esporte!";
				} else{
					cout<<"\nVocê está reprovado para esse esporte!";
				}
                break;
            case '2':
            	cout<<"\nSeleção para natação\n";
               	cout<<"\nInforme a idade do aluno: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme a idade do aluno: ";
  					   	cin>>id;
				   }
			   }
               	cout<<"\nInforme a frequência cardíaca em repouso: ";
               	cin>>fc;
               	if(fc < 0){
				   while(fc < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a frequência cardíaca em repouso: ";
  					   	cin>>fc;
				   }
			   }
			   cout<<"\nInforme o tempo que completou uma corrida de 2km, em minutos: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o tempo que completou uma corrida de 2km, minutos: ";
  					   	cin>>t;
				   }
			   }
			   cout<<"\nInforme quantos treinos realizou no último mês: ";
               	cin>>qt;
               	if(qt < 0){
				   while(qt < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme quantos treinos realizou no último mês: ";
  					   	cin>>qt;
				   }
			   }
               	if(id >= 16 && id <= 60 && fc <= 95 && t <= 15 && qt >= 8){
               		cout<<"\nVocê está aprovado para esse esporte!";
				} else{
					cout<<"\nVocê está reprovado para esse esporte!";
				}
                break;
            case '3':
                cout<<"\nSeleção para competição de resistência\n";
               	cout<<"\nInforme a idade do aluno: ";
               	cin>>id;
               	if(id < 0){
				   while(id < 0){
					   cout<<"\nErro! Valor invalido!\n ";
						cout<<"\nInforme a idade do aluno: ";
  					   	cin>>id;
				   }
			   }
               	cout<<"\nInforme a frequência cardíaca em repouso: ";
               	cin>>fc;
               	if(fc < 0){
				   while(fc < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme a frequência cardíaca em repouso: ";
  					   	cin>>fc;
				   }
			   }
			   cout<<"\nInforme o tempo que completou uma corrida de 2km, em minutos: ";
               	cin>>t;
               	if(t < 0){
				   while(t < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme o tempo que completou uma corrida de 2km, minutos: ";
  					   	cin>>t;
				   }
			   }
			   cout<<"\nInforme qual seu percentual frequência de atividades do centro esportivo: ";
               	cin>>qt;
               	if(qt < 0){
				   while(qt < 0){
					   cout<<"\nErro! Valor invalido!\n ";
					   	cout<<"\nInforme qual seu percentual frequência de atividades do centro esportivo: ";
  					   	cin>>qt;
				   }
			   }
               	if(id >= 20 && id <= 45 && fc >= 50 && fc <= 80 && t <= 12 && qt >= 12 && qt >= 85){
               		cout<<"\nVocê está aprovado para esse esporte!";
				} else{
					cout<<"\nVocê está reprovado para esse esporte!";
				}
                break;
            case '4':
                cout<<"\nPrograma Encerrado.";
                fim = 1;
                break;
            default:
                cout<<"\nOpção Invalida! Tente Novamente.\n";
                break;
        }
    } while(fim == 0);
    return 0;
}