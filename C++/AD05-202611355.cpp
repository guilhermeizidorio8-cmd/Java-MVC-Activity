#include <iostream>
#include <locale>
using namespace std;

int main () {
	setlocale(LC_ALL,"portuguese");
	float rf, mg, rp;
	int qf, pf, qr;
	char p;
	
	cout<<"\nQuestão 1: A verificação de vunerabilidade socioeconômica para um programa de bolsas para estudantes em uma Universidade\n";
	cout<<"\nInforme o valor da sua renda familiar: ";
	cin>>rf;
	if(rf < 0){
		while(rf < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe o valor da sua renda familiar: ";
			cin>>rf;
		}
	}
	cout<<"\nInforme quantas pessoas tem na sua familia: ";
	cin>>qf;
	if(qf < 0){
		while(qf < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe quantas pessoas tem na sua familia: ";
			cin>>qf;
		}
	}
	rp = rf/qf;
	cout<<"\nInforme sua média geral do curso (de 0 a 10): ";
	cin>> mg;
	if(mg < 0 || mg > 10){
		while(mg < 0 && mg > 10){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe sua média geral do curso: ";
			cin>> mg;
		}
	}
	cout<<"\nInforme o percentual de frequência (de 0 a 100): ";
	cin>> pf;
	if(pf < 0 || pf > 100){
		while(pf < 0 && pf > 100){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe o percentual de frequência (de 0 a 100): ";
			cin>> pf;
		}
	} 
	if(pf < 70){
		cout<<"Reprovado: Frequencia inferior a 70%.";
		return 0;
	}
	cout<<"\nInforme a quantidade de reprovações: ";
	cin>>qr;
	if(qr < 0){
		while(qr < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe a quantidade de reprovações: ";
			cin>> qr;
		}
	} 
	if(qr >= 3){
		cout<<"Reprovado: 3 ou mais reprovações.";
		return 0;
	}
	cout<<"\nInforme se já participou de projetos de extensão ou pesquisa ('S' para sim ou 'N' para não):";
	cin>>p;
	if(p != 'S'|| p != 'N'){
		while(p != 'S' && p != 'N'){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe se já participou de projetos de extensão ou pesquisa ('S' para sim ou 'N' para não):";
			cin>> p;
		}
	}
	cout<<"\n-Renda familiar: " << rf << "\n-Quantidade de pessaos na familia: " << qf <<"\n-Renda per capita: "<< rp<<"\n-Média Geral do Aluno: "<< mg <<"\n-Percentual de Frequência: "<< pf <<"%\n-Quantidade de reprovações: "<< qr <<"\n-Participações em Projetos: "<< p;
	if(rp <= 900 && mg >= 8 && pf >= 85 && qr <= 1) {
		cout<<"\nFoi contemplado com Bolsa Integral";
	} else if(rp <= 1500 && mg >= 7 && pf >= 75 && qr <= 2){
		cout<<"\nFoi contemplado com Bolsa Parcial";
	} else if(mg >= 9 && pf >= 90 && qr == 0 && p == 'S') {
		cout<<"\nFoi contemplado com Bolsa por Mérito";
	} else {
		cout<<"\nNão foi contemplado.";
	}
	return 0;
}

int main () {
	setlocale(LC_ALL,"portuguese");
	float vm, vv, lm, pv;
	int cc;
	char ri;
	cout<<"\nQuestão 2: Codigo de ficalização veiculos em uma via.\n";
	cout<<"\nInforme a velocidade maxima da via: ";
	cin>>vm;
	if(vm < 0){
		while(vm < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme a velocidade maxima da via: ";
			cin>>vm;
		}
	}
	cout<<"\nInforme a velocidade do veiculo: ";
	cin>>vv;
	if(vv < 0){
		while(vv < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe a velocidade do veiculo: ";
			cin>>vv;
		}
	}
	cout<<"\nInforme a condição climatica (1 para normal, 2 para chuva e 3 para neblina): ";
	cin>> cc;
	if(cc < 0 || cc > 3){
		while(cc < 0 && cc > 3){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme a condição climatica (1 para normal, 2 para chuva e 3 para neblina): ";
			cin>> cc;
		}
	} 
	if(cc == 1)
		lm = vm;
	else if(cc == 2)
		lm = vm-(vm*0.1);
	else 
		lm = vm-(vm*0.2);
	pv = ((vv*100)/lm)-100;
	cout<<"\nInforme se o motorista é reincidente('S' para sim ou 'N' para não):";
	cin>>ri;
	if(ri != 'S'|| ri != 'N'){
		while(ri != 'S' && ri != 'N'){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme se o motorista é reincidente('S' para sim ou 'N' para não): ";
			cin>> ri;
		}
	}
	cout<<"\n-Velocidade Maxima da via: " << vm << "\n-Condição climatica: " << cc <<"\n-Velocidade permitina na condição climatica: "<< lm <<"\n-Velocidade do Veiculo: "<< vv <<"\n-Percentual do Limite de velocidade: "<< pv <<"%\n-Motorista é reincidente: "<< ri;
	if(pv <= 10) {
		cout<<"\nAdvertência aplicada ao motorista";
	} else if(pv <= 20){
		if(ri == 'S') 
			cout<<"\nInfração grave";
		 else
			cout<<"\nInfração leve";
	} else if(pv <= 50) {
		if(ri == 'S') cout<<"\nInfração gravissima";
		else cout<<"\nInfração grave";
	} else if(pv > 50) {
		cout<<"\nInfração gravissima";
	} else {
		cout<<"\nSem infração";
	}
	return 0;
}

int main () {
	setlocale(LC_ALL,"portuguese");
	float sm, vpp, ve, vv;
	int id, pc, te;
	cout<<"\nQuestão 3: Codigo de pedido de financiamento de veículos.\n";
	cout<<"\nInforme seu salário mensal: R$";
	cin>>sm;
	if(sm < 0){
		while(sm < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme seu salário mensal: R$";
			cin>>sm;
		}
	}
	cout<<"\nInforme valor da prestação desejada: R$";
	cin>>vpp;
	if(vpp < 0){
		while(vpp < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme valor da prestação desejada: R$";
			cin>>vpp;
		}
	}
	if(vpp > (sm*0.4)){
		cout<<"FINANCIAMENTO RECUSADO - COMPROMETIMENTO DE RENDA";
		return 0;
	}
	cout<<"\nInforme a idade do cliente: ";
	cin>> id;
	if(id < 0){
		while(id < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme a idade do cliente: ";
			cin>> id;
		}
	} 
	if(id < 18 || pc > 70) {
		cout<<"FINANCIAMENTO RECUSADO - REGRAS DE ELEGIBILIDADE";
		return 0;
	}
	cout<<"\nInforme a pontuação de crédito (de 0 a 1000):";
	cin>>pc;
	if(pc < 0 || pc > 1000){
		while(pc < 0 && pc > 1000){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme a pontuação de crédito (de 0 a 1000):";
			cin>> pc;
		}
	}
	if(pc < 600) {
		cout<<"FINANCIAMENTO RECUSADO - PERFIL DE CREDITO";
		return 0;
	}
	cout<<"\nInforme o tempo de emprego atual: R$";
	cin>>vpp;
	if(vpp < 0){
		while(vpp < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme valor da prestação desejada: R$";
			cin>>vpp;
		}
	}
	cout<<"\nInforme o tempo de emprego atual (em Meses): ";
	cin>>te;
	if(te < 0){
		while(te < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme o tempo de emprego atual: ";
			cin>>te;
		}
	}
	cout<<"\nInforme o valor da entrada do veiculo: R$";
	cin>>ve;
	if(ve < 0){
		while(ve < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme o valor da entrada do veiculo: R$";
			cin>>ve;
		}
	}
	cout<<"\nInforme o valor total do veiculo: R$";
	cin>>vv;
	if(vv < 0){
		while(vv < 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"\nInforme o valor total do veiculo: R$";
			cin>>vv;
		}
	}
	cout<<"\n-Salário mensal: R$" << sm << "\n-Valor da prestação pretendida: R$" << vpp <<"\n-Idade: "<< id <<"\n-Pontuação de crédito: "<< pc <<"\n-Tempo do emprego atual: "<< te <<" meses\n-Valor da entrada: R$"<< ve << "\nValor total do veículo: R$" << vv;
	if(pc >= 750 && te >= 12 && vpp <= (sm*0.3)) {
		cout<<"\nFINANCIAMENTO APROVADO";
	} else if(pc >= 650 && te >= 24 && vpp <= (sm*0.3)){
		cout<<"\nFINANCIAMENTO APROVADO";
	} else if(pc >= 750 && te >= 12 && ve >= (vv*0.3) && vpp <= (sm*0.3)) {
		cout<<"\nFINANCIAMENTO APROVADO";
	} else if(pc >= 600 && ve >= (vv*0.5) && (id >= 25 || id <= 60) && vpp <= (sm*0.3)) {
		cout<<"\nFINANCIAMENTO APROVADO";
	} else {
		cout<<"\nFINANCIAMENTO RECUSADO - REGRAS DE ELEGIBILIDADE.";
	}
	return 0;
}

int main () {
	setlocale(LC_ALL,"portuguese");
    int pc, pr, rq, pd, at = 0, ct = 0;
    float t;
    char in;
    cout<<"Questão 4: Código que monitora as informações de um servidor\n";
    cout<<"\nInforme o percentual de uso da CPU: ";
    cin>>pc;
    if (pc < 0 || pc > 100) {
        while(pc < 0 && pc > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme o percentual de uso da CPU: ";
            cin>>pc;
        }
    }
    if(pc > 85){
        cout<<"\nSituação da CPU: Crítica";
        ct =+ 1;
    } else if (pc >= 70){
        cout<<"\nSituação da CPU: Atenção";
        at =+ 1;
    } else {
        cout<<"\nSituação da CPU: Normal";
    }
    cout<<"\nInforme o percentual de uso da RAM: ";
    cin>>pr;
    if (pr < 0 || pr > 100) {
        while(pr < 0 && pr > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme o percentual de uso da RAM: ";
            cin>>pr;
        }
    }
    if(pr > 90){
        cout<<"\nSituação da RAM: Crítica";
        ct =+ 1;
    } else if (pr >= 75){
        cout<<"\nSituação da RAM: Atenção";
        at =+ 1;
    } else {
        cout<<"\nSituação da RAM: Normal";
    }
    cout<<"\nInforme o percentual de uso do Disco: ";
    cin>>pd;
    if (pd < 0 || pd> 100) {
        while(pd < 0 && pd > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme o percentual de uso da Disco: ";
            cin>>pd;
        }
    }
    if(pd > 95){
        cout<<"\nSituação do Disco: Crítica";
        ct =+ 1;
    } else if (pd >= 85){
        cout<<"\nSituação da Disco: Atenção";
        at =+ 1;
    } else {
        cout<<"\nSituação da Disco: Normal";
    }
    cout<<"\nInforme a temperatura da CPU (Em graus Celsius): ";
    cin>>t;
      if (t < 0) {
        while(t < 0) {
            cout<<"Erro! Resposta inválida";
            cout<<"\nInforme a temperatura da CPU (Em graus Celsius): ";
            cin>>t;
        }
    }
    if(t > 80){
        cout<<"\nSituação da Temperatura da CPU: Crítica";
        ct =+ 1;
    } else if (t >= 70){
        cout<<"\nSituação da Temperatura da CPU: Atenção";
        at =+ 1;
    } else {
        cout<<"\nSituação da Temperatura da CPU: Normal";
    }
    cout<<"\nInforme a quantidade de requisições por segundo: ";
    cin>>rq;
    if (rq < 0 || rq > 100) {
        while(rq < 0 && rq > 100) {
            cout<<"Erro! Resposta inválida";
            cout<<"\nInforme a quantidade de requisições por segundo: ";
            cin>>rq;
        }
    }
    if (pc >= 80 && rq > 10000) {
        cout<<"\nMais de 10 mil requisições e mais de 80\% do uso da CPU";
        ct += 1;
    }
    cout<<"\nInforme se houve falha no servidor nos últimos 10 minutos: ";
    cin>>in;
    if (in != 'S' || in != 'N') {
        while(in != 'S' && in != 'N') {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme se houver falha no servidor nos últimos 10 minutos: ";
            cin>>in;
        }
    }
    if(in == 'S') {
        cout<<"\nHouve falha no sistema!";
        ct += 1;
    } else {
        cout<<"\nNão houve falha no sistema.";
    }
    if(ct >= 1 || at >= 2) {
        cout<<"\nSituação do Servidor: Crítica";
    } else if (at > 0 && at <2) {
        cout<<"\nSituação do Servidor: Atenção";
    } else {
        cout<<"\nSituação do Servidor: Normal";
    }
    
    return 0;
}

int main () {
	setlocale(LC_ALL,"portuguese");
	int id, ht, nf, nt, np, qi, em, md;
	cout<<"\nQuestão 5: Codigo de seleção de candidados para uma agência espacial para uma longa missão\n";
	cout<<"\nInforme a idade do candidato: ";
	cin>>id;
	if (id < 0) {
        while(id < 0) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a idade do candidato: ";
			cin>>id;
        }
    }
	cout<<"\nInforme o número de horas de treinamento: ";
	cin>>ht;
	if (ht < 0) {
        while(ht < 0) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme o número de horas de treinamento: ";
            cin>>ht;
        }
    }
    cout<<"\nInforme a nota do teste físico: ";
	cin>>nf;
	if (nf < 0 || nf > 100) {
        while(nf < 0 && nf > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a nota do teste físico: ";
            cin>>nf;
        }
    }
    cout<<"\nInforme a nota do teste técnico: ";
	cin>>nt;
	if (nt < 0 || nt > 100) {
        while(nt < 0 && nt > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a nota do teste técnico: ";
            cin>>nt;
        }
    }
    cout<<"\nInforme a nota do teste psicológico: ";
	cin>>np;
	if (np < 0 || np > 100) {
        while(np < 0 && np > 100) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a nota do teste psicológico: ";
            cin>>np;
        }
    }
    cout<<"\nInforme a quantidade de idiomas estrangeiros dominados: ";
	cin>>qi;
	if (qi < 0) {
        while(qi < 0) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a quantidade de idiomas estrangeiros dominados: ";
            cin>>qi;
        }
    }
    cout<<"\nInforme a experiência prévia em missões, em meses: ";
	cin>>em;
	if (em < 0) {
        while(em < 0) {
            cout<<"\nErro! Resposta inválida";
            cout<<"\nInforme a experiência prévia em missões, em meses: ";
            cin>>em;
        }
    }
    md = (nt+nf+np)/3;
    cout<< "\nEstatisticas do candidato:\n-Idade: " << id << "\n-Número de horas de treinamento: " << ht << "\n-Nota no teste físico, de 0 a 100: " << nf << "\n-Nota no teste técnico, de 0 a 100:" << nt << "\n-Nota no teste psicológico, de 0 a 100: " << np << "\n-Quantidade de idiomas estrangeiros dominados: " << qi << "\n-Experiência prévia em missões, em meses: " << em;
	if ((id >= 28 || id <=50) && ht >= 1000 && nf >= 70 && nt >= 70 && np >= 70 && id <= 45){
		if(nf >= 85 && nt >= 90 && np >= 85 && qi >= 2 && em >= 6) {
			cout<<"\nCandidato classificado: PRIORIDADE 1";
		} else if(md >= 80 && qi >= 1){
			cout<<"\nCandidato classificado: PRIORIDADE 2";
		} else {
			cout<<"\nCandidato classificado: PRIORIDADE 3";
		}
	} else if((id >= 28 || id <=50) && ht >= 1000 && nf >= 70 && nt >= 70  && np >= 70 && (nt >= 95 ||  em >= 12)){
		if(nf >= 85 && nt >= 90 && np >= 85 && qi >= 2 && em >= 6) {
			cout<<"\nCandidato classificado: PRIORIDADE 1";
		} else if(md >= 80 && qi >= 1){
			cout<<"\nCandidato classificado: PRIORIDADE 2";
		} else {
			cout<<"\nCandidato classificado: PRIORIDADE 3";
		}
	} else {
		cout<<"\nCANDIDATO INAPTO.";
	}
	return 0;
}

