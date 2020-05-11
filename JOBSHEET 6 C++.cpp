#include <iostream>
using namespace std;

int main (){
	cout<<"Tegar Atma Hidayat (F1B019137)-Kel.26\n\n";
	int x,y, matrix [10][10];
	cout << "TRANSPOSE MATRIX" << endl;
	cout << "Masukkan jumlah baris = ";
	cin >> x;
	cout << "Masukkan jumlah kolom = ";
	cin >> y;
	cout << endl;
	for (int i = 0; i < x; i++){
	for (int j = 0; j < y; j++){
		cout << "Masukkan nilai index   " << i << "," << j << " = ";
			cin >> matrix [i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < x; i++){
	for (int j = 0; j < y; j++){
		cout << matrix [i][j] << "  ";
		}
		cout << endl << endl;
	}
	  cout << endl;
	for (int i = 0; i < y; i++){
	for (int j = 0; j < x; j++){
		cout << matirx [j][i] << "  ";
		}
		cout << endl << endl;
    return 0;
	}
}
