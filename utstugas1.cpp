#include <iostream>

using namespace std;

/*
	g++ utstugas1.cpp -o

	bisahore
*/

	int main()
	{
		
		cout << "Kalkulator yang hanya bisa melakukan perkalian dan pembagian \n" << endl ;

		int angka1, v, s, i ;
		float angka2, hasil ;
		char op, kp ;

		do
		{

			cout << "a = " ;
			cin >> angka1 ;
			cout << "b = " ;
			cin >>angka2 ;
			cout << "Operator: " ;
			cin >> op ;

				if (op == '*')
				{
					hasil = 0 ; // biar ngitungnya mulai dari nol lagi
					for (int i = 0; i < angka2; i++) // i = buat pengulangannya
					{
						hasil += angka1 ; // Nanti berarti hasil + angka 1 sampai berapa i
					}
					cout << angka1 << " * " << angka2 << " = " << hasil << endl ;
				}
				else if (op == '/')
				{
					i = 0 ;
					v = angka1 ;
				
					while(v >= angka2){

						v -= angka2 ;
						i++ ;

					}
					cout << angka1 << " / " << angka2 << " = " << i << endl ;
				}
				else
				{
					cout << "Maaf" << endl ;
				}

			cout << "Tekan Y untuk mengulang: " ;
			cin >> kp ;

		} while (kp == 'Y' || kp == 'y');

		cout << "Program Selesai" << endl ;

		return 0;
	}