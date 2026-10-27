#include<iostream>
#include<locale>
using namespace std;


	QUESTÃO 1:
int main(){
	setlocale(LC_ALL,"portuguese");
	int n, i, s = 0;
	cout<<"\nCom for\n";
	cout<<"Informe um número inteiro Positivo: ";
	cin>> n;
	if(n<=0){
		for(i = 0; n <= 0; i++){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe um número inteiro Positivo: ";
			cin>> n;
		}
	}
	cout<<"\nDivisores: ";
	for(i = 1; i <= n; i++){
		if(i == n){
			cout<<"\nSoma: " << s;
			if(s < n){
				cout<<"\nO número é deficiente.";
			} else if(s > n){
				cout<<"\nO número é abundante.";
			} else {
				cout<<"\nO número é perfeito.";
			}
			break;
		} else if(n%i == 0) {
			s += i;
			cout<< i << " ";
		}
	}
	i = 1, s = 0;
	cout<<"\n\nCom While\n";
	cout<<"Informe um número inteiro Positivo: ";
	cin>> n;
	if(n<=0){
		while(n <= 0){
			cout<<"\nErro! Valor invalido.\n";
			cout<<"Informe um número inteiro Positivo: ";
			cin>> n;
		}
	}
	cout<<"\nDivisores: ";
	while(i <= n){
		if(i == n){
			cout<<"\nSoma: " << s;
			if(s < n){
				cout<<"\nO número é deficiente.";
			} else if(s > n){
				cout<<"\nO número é abundante.";
			} else {
				cout<<"\nO número é perfeito.";
			}
			break;
		} else if(n%i == 0) {
			s += i;
			cout<< i << " ";
		}
		i++;
	}
	i = 1, s = 0;
	cout<<"\n\nCom Do...While\n";
	do{
		if(n<=0) cout<<"\nErro! Valor invalido.\n";
		cout<<"Informe um número inteiro Positivo: ";
		cin>> n;
	}while(n <= 0);
	cout<<"\nDivisores: ";
	do {
		if(i == n){
			cout<<"\nSoma: " << s;
			if(s < n){
				cout<<"\nO número é deficiente.";
			} else if(s > n){
				cout<<"\nO número é abundante.";
			} else {
				cout<<"\nO número é perfeito.";
			}
			break;
		} else if(n%i == 0) {
			s += i;
			cout<< i << " ";
		}
		i++;
	} while(i <= n);
	
	return 0;
}


	QUESTÃO 3:
int main(){
	setlocale(LC_ALL,"portuguese");
	int n, i, s = 0, d = 0;
	cout<<"\nCom for\n";
	for(i = 0; n != 0; i++){
		cout<<"Informe um número inteiro: ";
		cin>> n;
		if(n == 0) continue; 
		(d > s ? s = d: s = s);
		if(n > 0) d++;
		else if(n < 0) d = 1;
		
	}
	cout<<"\nMaior sequência de positivos consecutivos: " << s;
	cout<<"\n\nCom While\n";
	s = 0, d = 0, n = 1; 
	while(n != 0){
		cout<<"Informe um número inteiro: ";
		cin>> n;
		if(n == 0) continue; 
		(d > s ? s = d: s = s);
		if(n > 0) d++;
		else if(n < 0) d = 1;
		
	}
	cout<<"\nMaior sequência de positivos consecutivos: " << s;
	cout<<"\n\nCom do..while\n";
	s = 0, d = 0;
	do{
		cout<<"Informe um número inteiro: ";
		cin>> n;
		if(n == 0) continue; 
		(d > s ? s = d: s = s);
		if(n > 0) d++;
		else if(n < 0) d = 1;
	}while(n != 0);
	cout<<"\nMaior sequência de positivos consecutivos: " << s;
	return 0;

}


	QUESTÃO 4
int main(){
	setlocale(LC_ALL,"portuguese");
	int n;
	int t;
	int i;
	int q100 = 0;
	int q50 = 0;
	int q20 = 0;
	int q10 = 0;
	int q5 = 0;
	int q2 = 0;
	cout<<"\nCom for\n";
	cout<<"Informe o valor que deseja sacar: ";
	cin>> n;
	if(n<=0){
		for(i = 0; n <= 0; i++){
			cout<<"\nErro! Valor invalido.\n";
			cout<<"\nInforme o valor que deseja sacar: ";
			cin>> n;
		}
	}
	t = n;
	for(i = 0; 0 != t; i++){
		if(t >= 100){
			q100++;
			t -= 100;
		} else if(t >= 50){
			q50++;
			t -= 50;
		} else if(t  >= 20){
			q20++;
			t -= 20;
		} else if(t >= 10) {
			q10++;
			t -= 10;
		} else if(t >= 5) {
			q5++;
			t -= 5;
		} else if(t >= 2) {
			q2++;
			t -= 2;
		} else {
			cout<<"\nNão é possivel formar o valor com as cédulas disponiveis";
			break;
		}
	}
	cout<<"\n- Cédulas 100: " << q100 <<"\n- Cédulas 50: " << q50  <<"\n- Cédulas 20: " << q20  <<"\n- Cédulas 10: " << q10  <<"\n- Cédulas 5: " << q5 <<"\n- Cédulas 2: " << q2 <<"\n- Valor total: R$" << n << "\n- Valor restante: R$" << t ;
	cout<<"\nCom while: \n";
	q100 = 0;
	q50 = 0;
	q20 = 0;
	q10 = 0;
	q5 = 0;
	q2 = 0;
	cout<<"Informe o valor que deseja sacar: ";
	cin>> n;
	if(n<=0){
		while(n <= 0){
			cout<<"\nErro! Valor invalido.\n";
			cout<<"\nInforme o valor que deseja sacar: ";
			cin>> n;
		}
	}
	t = n;
	while(t != 0){
		if(t >= 100){
			q100++;
			t -= 100;
		} else if(t >= 50){
			q50++;
			t -= 50;
		} else if(t  >= 20){
			q20++;
			t -= 20;
		} else if(t >= 10) {
			q10++;
			t -= 10;
		} else if(t >= 5) {
			q5++;
			t -= 5;
		} else if(t >= 2) {
			q2++;
			t -= 2;
		} else {
			cout<<"\nNão é possivel formar o valor com as cédulas disponiveis";
			break;
		}
	}
	cout<<"\n- Cédulas 100: " << q100 <<"\n- Cédulas 50: " << q50  <<"\n- Cédulas 20: " << q20  <<"\n- Cédulas 10: " << q10  <<"\n- Cédulas 5: " << q5 <<"\n- Cédulas 2: " << q2 <<"\n- Valor total: R$" << n << "\n- Valor restante: R$" << t ;
	cout<<"\nCom do...while: \n";
	q100 = 0;
	q50 = 0;
	q20 = 0;
	q10 = 0;
	q5 = 0;
	q2 = 0;
	do{
		if(n<=0) cout<<"\nErro! Valor invalido.\n";
		cout<<"\nInforme o valor que deseja sacar: ";
		cin>> n;
	}while(n <= 0);
	t = n;
	do{
		if(t >= 100){
			q100++;
			t -= 100;
		} else if(t >= 50){
			q50++;
			t -= 50;
		} else if(t  >= 20){
			q20++;
			t -= 20;
		} else if(t >= 10) {
			q10++;
			t -= 10;
		} else if(t >= 5) {
			q5++;
			t -= 5;
		} else if(t >= 2) {
			q2++;
			t -= 2;
		} else {
			cout<<"\nNão é possivel formar o valor com as cédulas disponiveis";
			break;
		}
	}while(t != 0);
	cout<<"\n- Cédulas 100: " << q100 <<"\n- Cédulas 50: " << q50  <<"\n- Cédulas 20: " << q20  <<"\n- Cédulas 10: " << q10  <<"\n- Cédulas 5: " << q5 <<"\n- Cédulas 2: " << q2 <<"\n- Valor total: R$" << n << "\n- Valor restante: R$" << t ;
	return 0;
}



	QUESTÃO 5
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n, i, j, s = 0, f = 0, v = 1;
	
	cout<<"\nCom for\n";
	cout<<"Informe um número inteiro positivo: ";
	cin>> n;
	if(n<=0){
		for(i = 0; n <= 0; i++){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe um número inteiro positivo: ";
			cin>> n;
		}
	}
	for(i = 0; i < n; i ++){
		cout<<"\n";
		f++;
		for(j = 0; j != f; j ++){
			cout<< v << " ";
			v++;
		}
	}
	
	cout<<"\n\nCom while\n";
	
	i = 0, j = 0, s = 0, f = 0, v = 1;
	
	cout<<"Informe um número inteiro positivo: ";
	cin>> n;
	if(n<=0){
		while(n <= 0){
			cout<<"Erro! Valor invalido.\n";
			cout<<"Informe um número inteiro positivo: ";
			cin>> n;
		}
	}
	while(i < n){
		cout<<"\n";
		f++;
		while(j != f){
			cout<< v << " ";
			v++;
			j++;
		}
		j = 0;
		i++;
	}
	
	cout<<"\n\nCom do...while\n";
	
	i = 0, j = 0, s = 0, f = 0, v = 1;
	
	do{
		if(n<=0)cout<<"Erro! Valor invalido.\n";
		cout<<"Informe um número inteiro positivo: ";
		cin>> n;
	}while(n <= 0);

	do{
		cout<<"\n";
		f++;
		while(j != f){
			cout<< v << " ";
			v++;
			j++;
		}
		j = 0;
		i++;
	}while(i < n);
	return 0;
}