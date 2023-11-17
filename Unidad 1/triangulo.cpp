#include <iostream>
using namespaces std;
int main (){
    float lado1,lado2,lado3;
    string nombre; "bienvendio a este programa que te ayudara a saber que tipo de triangulo tienes"<<endl;
    cin>>nombre;
    cout<< "inserta el primer lado del triangulo"<<endl;
    cin>>lado1;
    cout<< "inserta el segundo lado del triangulo"<<endl;
    cin>>lado2;
    cout<< "inserta el tercer lado del triangulo"<<endl;
    cin>>lado3;
    if (lado1==lado1 or lado2==lado3 or lado1==lado3){
                     cout<< "tu triangulo es equilatero"<<endl;
    }
    else if (lado2==lado1 or lado2==lado3 or lado1==lado3){
         cout<< "tu triangulo es isosceles"<<endl;
    }
    else if (lado1 !=lado2 and lado2 !=lado3 and lado1 != lado3){
         cout<< "tu triangulo es escaleno"<<endl;
    }                      
    else{
         cout<< "no tienes ningun triangulo"<<endl;
    }
    cout<< "gracias por usas este programa:"<nombre;
    return 0;
}
