# include "iostream"
#include "conio.h"
using namespace std;
int main (){
	int numero;
	cout<<"por favor digita el numero de multiplicacion :"<<endl;
	cin>>numero;
	for (int a=1;a<=10;a++){
		int multiplicacion=a * numero;
		cout<<numero<<"x"<<a<<"="<< multiplicacion<<endl;
	}
	return 0;
}
