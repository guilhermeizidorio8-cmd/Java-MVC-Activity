/* Atividade diária 3
   Matrícula: 202611355
   Disciplina: Algoritmos e Programação */
   
#include <iostream>
#include <locale>
using namespace std;

int quest1(){
    int id, qanos, ei = 0, ea =0, ep=0, ed=0;
    float sal, parc;
    char div;
    cout<<"\nQuestão 1: Codigo que verifica se o cliente de um banco atende aos criterios para contratar empréstimo.\n";
    cout<<"Informe sua idade: ";
    cin>>id;
    if(id < 0){
        while(id < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe sua idade: ";
            cin>>id;
        }
    }
    if(id < 21 || id > 65){
        ei = 1;
    }
    cout<<"Informe seu salario mensal: ";
    cin>>sal;
    if(sal < 0){
        while(sal < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe seu salario mensal: ";
            cin>>sal;
        }
    }
    cout<<"Informe o valor que deseja para as parcelas: ";
    cin>>parc;
    if(parc < 0){
        while(parc < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe o valor que deseja para as parcelas: ";
            cin>>parc;
        }
    }
    if(sal > 8000){
        if(parc > (sal*0.4)){
            ep = 1;
        }
    } else {
        if(parc > (sal*0.3)){
            ep = 1;
        }
    }
    cout<<"Informe quantos anos você trabalha no seu emprego atual: ";
    cin>>qanos;
    if(qanos < 2){
        ea = 1;
    }
    cout<<"Informe se possui dividas em atraso (S para sim ou N para não): ";
    cin>>div;
    if(div != 'S' || div != 'N'){
        while(div != 'S' && div != 'N'){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe se possui dividas (S para sim ou N para não): ";
            cin>>div;
        }    
    } 
    if(div == 'S'){
        ed = 1;
    }
    
    if(ei == 0 && ea == 0 && ep == 0 && ed == 0)
        cout<< "\nSua solicitação de emprestimo foi APROVADO! Parabéns";
    else {
        cout<< "\nSua solicitação de emprestimo foi NEGADO! Segue e lista os requisitos não alcançados:\n";
        if(ei == 1){
            cout<< "- Idade invalida.\n";
        }
        if(ea == 1){
            cout<< "- Anos no emprego atual menor que o necessario.\n";
        }
        if(ep == 1){
            cout<< "- Valor da parcela maior que o permitido para o seu salário.\n";
        }
        if(ed == 1){
            cout<<"- Você possui dívidas em atraso.\n";
        }
    }
    return 0;
}

int quest2(){
    int id, h;
    char tu, ae;
    cout<<"\nQuestão 2: Código que verifica se um usuário pode acessar um laboratório.\n";
    cout<<"Informe sua idade: ";
    cin>>id;
    cout<<"Informe o tipo de usuário (A para aluno, P para professor ou V para visitante): ";
    cin>>tu;
    if(tu != 'A' || tu != 'P' || tu != 'V'){
        while(tu != 'A' && tu != 'P' && tu != 'V'){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe o tipo de usuário (A para aluno, P para professor ou V para visitante): ";
            cin>>tu;
        }    
    }
    cout<<"Informe apenas a hora da entrada: ";
    cin>>h;
    if(h <= 23 && h > 0){
        if(h == 23 || h <= 5){
            cout<<"Acesso Negado!";
        }
    } else {
        while(h > 23 || h < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe apenas a hora da entrada: ";
            cin>>h;
        }
    } 
    cout<<"Possui autorização especial (S para sim ou N para não): ";
    cin>>ae;
    if(ae != 'S' || ae != 'N'){
        while(ae != 'S' && ae != 'N'){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Possui autorização especial (S para sim ou N para não): ";
            cin>>ae;
        }    
    } 
    
    if(tu == 'P'){
        if(h <= 22 && h >= 6)
            cout<<"Acesso Liberado";
        else
            cout<<"Acesso Negado";
    } else if (tu == 'A'){
        if(ae == 'S'){
            if(h <= 21 && h >= 8)
                cout<<"Acesso Liberado";
            else
                cout<<"Acesso Negado";
        } else {
            if(h <= 17 && h >= 8)
                cout<<"Acesso Liberado";
            else
                cout<<"Acesso Negado";
        }
    } else {
        if(id > 17 && ae == 'S' && h > 8 && h < 18)
            cout<<"Acesso Liberado";
        else
            cout<<"Acesso Negado";
    }
    return 0;
}

int quest3(){
        int id, f, t;
    char em;
    cout<<"\nQuestão 3: Código pra verificar a classificação de um atleta para uma competição\n";
    cout<<"Informe o resultado do exame médico (A para apto e I para inapto): ";
    cin>>em;
    if (em != 'A' || em != 'I') {
        while(em != 'A' && em != 'I') {
            cout<<"Erro! Resposta inválida\n";
            cout<<"Informe o resultado do exame médico (A para apto e I para inapto): ";
            cin>>em;
        }
    }
    if (em == 'I') {
        cout<<"Você está ELIMINADO da competição";
        return 0;
    }
    cout<<"Informe sua idade: ";
    cin>>id;
    if(id < 0){
        while(id < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe sua idade: ";
            cin>>id;
        }
    }
    if (id < 18) {
        cout<<"Você está ELIMINADO da competição";
        return 0;
    }
    cout<<"Informe seu tempo na prova: ";
    cin>>t;
    if(t < 0){
        while(t < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe seu tempo na prova: ";
            cin>>t;
        }
    }
    cout<<"Informe o seu número de faltas: ";
    cin>>f;
    if(f < 0){
        while(f < 0){
            cout<<"Erro! Resposta incorreta!\n";
            cout<<"Informe o seu número de faltas: ";
            cin>>f;
        }
    }
    if (f >= 3){
        cout<<"Você está ELIMINADO da competição";
        return 0;
    }
    if(id > 17 && id < 30){
        if(f < 2 && t < 15){
            cout<<"Você está APROVADO da competição";
        } else if (f == 2 && t < 14){
            cout<<"Você está APROVADO da competição";    
        } else {
            cout<<"Você está ELIMINADO da competição";
        }
    } else if(id < 40) {
        if(f < 2 && t < 16){
            cout<<"Você está APROVADO da competição";
        } else if (f == 2 && t < 15){
            cout<<"Você está APROVADO da competição";    
        } else {
            cout<<"Você está ELIMINADO da competição";
        }
    } else {
        if(f < 2 && t < 18){
            cout<<"Você está APROVADO da competição";
        } else if (f == 2 && t < 17){
            cout<<"Você está APROVADO da competição";    
        } else {
            cout<<"Você está ELIMINADO da competição";
        }
    }
    return 0;
}

int quest4(){
    int id, fp;
    float vl, des = 0;
    char fd;
    cout<<"\nQuestão 4: Código feito para determinar se uma loja para dar um desconto para um cliente em uma compra\n";
    cout<<"Informe o valor da compra: ";
    cin>>vl;
    if(vl < 0) {
        while (vl < 0) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe o valor da compra: R$";
            cin>>vl;
        }
    }
    cout<<"Informe a idade do cliente: ";
    cin>>id;
    if(id < 0) {
        while (id < 0) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe a idade do cliente: ";
            cin>>id;
        }
    }
    cout<<"Informe se o cliente participa do programa fidelidade (S para sim ou N para não): ";
    cin>>fd;
    if(fd != 'S' || fd != 'N') {
        while (fd != 'S' && fd != 'N') {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe se o cliente participa do programa fidelidade (S para sim ou N para não): ";
            cin>>fd;
        }
    }
    cout<<"Informe a forma de pagamento: (1 para PIX, 2 para cartão à vista e 3 para cartão parcelado): ";
    cin>>fp;
    if(fp < 0 || fp > 3) {
        while (fp < 0 || fp > 3) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe a forma de pagamento: (1 para PIX, 2 para cartão à vista e 3 para cartão parcelado): ";
            cin>>fp;
        }
    } 
    if (fp == 3) {
        if (id > 59 && fd == 'S'){
            des = vl*0.05;
            cout<<"O cliente tem direito ao desconto!\nValor do desconto: 5% \nValor bruto: R$" << vl << "\nValor do desconto: R$"<< des <<"\nValor com desconto: R$" << vl-des;
        }
    } else if(vl >= 500 && fp == 1){
        des = vl*0.12;
        cout<<"O cliente tem direito ao desconto!\nValor do desconto: 12%\nValor bruto: R$" << vl << "\nValor do desconto: R$"<< des << "\nValor com desconto: R$" << vl-des;
    } else if(fd == 'S' && vl >= 300) {
        des = vl*0.10;
        cout<<"O cliente tem direito ao desconto!\nValor do desconto: 10%\nValor bruto: R$" << vl << "\nValor do desconto: R$"<< des << "\nValor com desconto: R$" << vl-des;
    } else if(id > 59 && vl >= 150){
        des = vl*0.08;
        cout<<"O cliente tem direito ao desconto!\nValor do desconto: 8%\nValor bruto: R$" << vl << "\nValor do desconto: R$"<< des << "\nValor com desconto: R$" << vl-des;
    } else {
        cout<<"O cliente não tem direito ao desconto!\n Valor bruto: R$" << vl;
    }    
    return 0;
}

int quest5(){
    int pf, qr;
    float md, rf;
    char ex;
    cout<<"\nQuestão 4: Código feito para determinar se um aluno está apto a receber uma bolsa estudantil\n";
    cout<<"Informe sua média geral (de 0 a 10): ";
    cin>>md;
    if(md < 0 || md > 10) {
        while (md < 0 && md > 10) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe sua média geral (de 0 a 10): ";
            cin>>md;
        }
    }
    cout<<"Informe seu percentual de frequência (de 0 a 100): ";
    cin>>pf;
    if(pf < 0 || pf > 100) {
        while (pf < 0 && pf > 100) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe seu percentual de frequência (de 0 a 100): ";
            cin>>pf;
        }
    }
    if(pf <= 60) {
        cout<<"O aluno está inapto!";
        return 0;
    }
    cout<<"Informe sua renda familiar: R$";
    cin>>rf;
    if(rf < 0) {
        while (rf < 0) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe sua renda familiar: R$";
            cin>>rf;
        }
    }
    cout<<"Informe uma quantidade de reprovações: ";
    cin>>qr;
    if(qr < 0) {
        while (qr < 0) {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe uma quantidade de reprovações: ";
            cin>>qr;
        }
    }
    if(qr >= 3) {
        cout<<"O aluno está inapto!";
        return 0;
    }
    cout<<"Informe se já participou de algum projeto ou extensão (S para sim e N para não): ";
    cin>>ex;
    if(ex != 'S' || ex != 'N') {
        while (ex != 'S' && ex != 'N') {
            cout<<"\nErro! Resposta incorreta!\n";
            cout<<"Informe se já participou de algum projeto ou extensão (S para sim e N para não): ";
            cin>>ex;
        }
    }
     if(md >= 7 && pf >= 75 && qr <= 1){
         if(rf <= 3000 || md >= 8.5 || ex == 'S')
            cout<<"O aluno está apto!";
        else 
            cout<<"O aluno está inapto!";
    } else {
        cout<<"O aluno está inapto!";
    }
    return 0;
}

int main() {
    char escolha;
    int fim = 0;
    setlocale(LC_ALL,"portuguese");
    cout<<"Atividade diária 3\n";
    do{
        cout<<"\nEscolha qual questão deseja testar:\n- Questão 1: Empréstimo de Banco\n- Questão 2: Acesso ao Laboratório\n- Questão 3: Critérios pra Competição\n- Questão 4: Desconto na Compra \n- Questão 5: Programa de Bolsas Estudantis\n- 0: Finalizar programa \nEscolha o número da questão: ";
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
