#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int linha, coluna;
float valor;
vector<float> matriz;

int main () {
		
	cout << "Digite a quantidade de linhas: ";
	cin >> linha;
	cout << "Digite a quantidade de colunas: ";
	cin >> coluna;
	cout << endl;

	for (int j = 1; j <= linha; j++) {	
		for (int i = 1; i <= coluna; i++) {
			cout << "Matriz[" << j << "]" << "[" << i << "]: ";
			cin >> valor;
			matriz.push_back(valor);	
		}	
	}
	
	cout << "\nO dobro da matriz e:\n\n";
	
	int n = 0;
	
	for (int j = 1; j <= linha; j++) {	
		for (int i = 1; i <= coluna; i++) {	
			if (2 * matriz[n] < 10)
				cout << "  " << 2 * matriz[n] << " ";
			else if (2 * matriz[n] < 100)
					cout << " " << 2 * matriz[n] << " ";
			n++;
		}
		cout << endl;	
	}

	cout << endl;
	
	system ("pause");
	
	return 0;
}