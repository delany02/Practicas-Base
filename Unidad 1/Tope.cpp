
#define tope=2023;
#define meses=12;
#define dias=24;
#define horas=60;
#define minutos=60;
#include <iostream>
using namespace std;
int an, mes,dia,hora,minuto,a;
int multiplica(int a,int b){
	return a*b;
}
int resta(int a,int b){
	return a-b;
}
int main(){
	cout<<"Digita el año de nacimiento"<<endl;
	cin>>an;
	a=resta(cin,tope);
	mes=multiplica(a,meses);
	cout<<"Digita el mes de nacimiento"<<endl;
	cin>>mes;
	a=resta(cin,mes);
	dia=multiplica(a,dias);
	cout<<"Digita los dias de nacimiento"<<endl;
	cin>>dia;
	a=resta(cin,dias);
	hora=multiplica(cin,horas);
	cout<<"Digita las horas de nacimiento"<<endl;
	cin>>hora;
	a=resta(cin,horas);
	minuto=multiplica(cin,minutos);
	cout<<"Digita los segundos de nacimiento"<<endl;
	cin>>
}
