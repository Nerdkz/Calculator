#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>


using namespace std;

double somar( double num_1, double num_2 );
double subtrair( double num_1, double num_2 );
double multiplicar( double num_1, double num_2 );
void dividir( double num_1, double num_2 );

int main(){
	double A, B;
	int op;
	
	do{
		cout << "=========== Calculator ==================" << endl;
		cout << "==========> 1 - Somar <==================" << endl;
		cout << "==========> 2 - Subtrair <===============" << endl;
		cout << "==========> 3 - Dividir <================" << endl;
		cout << "==========> 4 - Multiplicar <============" << endl;
		cout << "==========> 0 - Sair <===================" << endl;
		
		cout << "\n\nOp => ";
		cin >> op;
		
		
		switch(op)
		{	
				
			case 1:
				
				cout << "A = ";
				cin >> A;
				
				cout << "B = ";
				cin >> B;
				cout << endl << endl;
				
				cout << "A + B = " << fixed << setprecision(2) << somar( A, B ) << endl << endl;
				break;
			
			case 2:
				
				cout << "A = ";
				cin >> A;
				
				cout << "B = ";
				cin >> B;
				cout << endl << endl;
				
				cout << "A - B = " << fixed << setprecision(2) << subtrair( A, B) << endl << endl;
				break;
			
			case 3:
				
				cout << "A = ";
				cin >> A;
				
				cout << "B = ";
				cin >> B;
				cout << endl << endl;
				
				dividir( A, B );
				break;
			
			case 4:
				
				cout << "A = ";
				cin >> A;
				
				cout << "B = ";
				cin >> B;
				cout << endl << endl;
				
				cout << "A x B = " << fixed << setprecision(4) << multiplicar( A, B) << endl << endl;
				break;
			
			default:
				cout << "Opcao invalida!!" << endl;
				break;
		}
		
		Sleep(3000);
		system("cls");
	
	}while( op != 0);
	
	return 0;
}

double somar( double num_1, double num_2 ){
	return num_1 + num_2;
}


double subtrair( double num_1, double num_2 ){
	return num_1 - num_2;
}


double multiplicar( double num_1, double num_2 ){
	return num_1 * num_2;
}


void dividir( double num_1, double num_2 ){
	
	if( num_2 != 0.0 ){
		cout << "A / B = " << fixed << setprecision(4) << num_1 / num_2 << endl << endl;
	}
	else{
		cout << "Math Error!! - Division by 0!!" << endl;
	}
	
}