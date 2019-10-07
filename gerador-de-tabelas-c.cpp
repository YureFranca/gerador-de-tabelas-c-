#include <iostream>
using namespace std;

/**
	
	@author: Yure França ;
	@date: 07.10.2019;
	@info: Sistema de geradores de tabela;

**/

int main(){
	// Declarando as variáveis
	int linhas, colunas, c, t, l;	
	
	// Solicitando os dados ao usuário
	cout << "Digite a quantidade de linhas: ";
	cin >> linhas;
	cout << "Digite a quantidade de colunas: ";
	cin >> colunas;
	
	// Criando a lógica com FOR para gerar a tabela
	cout << "\n";
	cout << "         +";
	for(t = 1; t <= colunas; t++){
		cout << "--------+";
	}
	
	cout << "\n";
	cout << "         |";
	for(t = 1; t <= colunas; t++){
		cout << " COLUNA |";	
	}
	
	cout << "\n";
	cout << "+--------+";
	for(t = 1; t <= colunas; t++){
		cout << "--------+";
	}

	for(l = 1; l <= linhas; l++){
		cout << "\n";
		cout << "| LINHAS |";
		for(c = 1; c <= colunas; c++){			
			cout << " CELULA |";
		}
		cout << "\n";
		cout << "+--------+";
		for(t = 1; t <= colunas; t++){
			cout << "--------+";
		}
	}
	cout << "\n";
}
