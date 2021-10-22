#include <iostream>

using namespace std;

/*
	g++ utstugas1.cpp -o

	yiyo

	!!! INI MASIH BELUM SELESAI !!!
*/

	int main()
	{
		
		int angka1, angka2, n, v ;
		char op, kp ;



		cout << "a = " ;
		cin >> angka1 ;
		cout << "b = " ;
		cin >> angka2 ;
		cout << "operator: " ;
		cin >> op ;

		if (op == '*')
		{
			do
			{
				cout << angka1 << "*" << angka2 << " = " << v << endl ;
				v += angka1 ;		
				
				cout << "Lagi?(Y/N) " ;
				cin >> kp ;
			} 
			while (kp == 'Y' || kp == 'y');
		}
		else if (op == '/')
		{
			cout << "!!! INI MASIH BELUM SELESAI" << endl ;
		}

		return 0;
	}