#include <iostream>
using namespace std;
int main (){
	
	int miArreglo[5];
	string nombres[3];
	
	
	//inicializar el primer arreglo
	miArreglo[0] = 10;
	miArreglo[1] = 20;
	miArreglo[2] = 30;
	miArreglo[3] = 40;
	miArreglo[4] = 50;
	
	// nombres
	nombres[0] = "Jaime";
	nombres[1] = "Francisco";
	nombres[2] = "Paula";
	
	// cout<<nombres[0];
   // cout<<miArreglo[3];
   
   for (int i=0; i<=4; i++){
   	cout<<"Elementos: "<<i<<":"<<miArreglo[i]<<endl;
   }
   for (int e=0; e<=2; e++){
   	cout<<"Los nombres del arreglo son:"<<nombres[e]<<endl;
   }
   return 0;
}
