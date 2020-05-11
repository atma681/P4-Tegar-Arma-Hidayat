#include <iostream>
#include <cstdlib>
using namespace std;

main (){
	cout<<"Tegar Atma Hidayat (F1B019137)-Kel.26\n\n";
	int nim1[2][2];
	int nim2[2][2];
	int jml [2][2];
	int x, y;
	cout << "=====PENGURANGAN MATRIX=====\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout << "*Masukkan index matriks pertama* " << x << "," << y << " = ";
			cin >> nim1[x][y];
		}
	}
	cout << endl;
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout << "*Masukkan index matriks kedua* " << x << "," << y << " = ";
			cin >> nim2[x][y];
		}
	}
	cout << endl;
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
			jml [x][y] = nim1[x][y]+nim2[x][y];
			cout << jml [x][y] <<" ";
		}
		cout << endl;
		
		return 0;
	}
}
