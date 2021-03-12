#include<iostream>

using namespace std;

int main()
{
   int num1[3], num2[3], resultado[3], aux1, aux2, aux3, aux4;
   cout<<"ingresa el primer numero complejo, primero la parte entera y luego la compleja"<<endl;
   cin>>num1[1];
   cin>>num1[2];

   cout<<"el primer vector es "<<num1[1]<<" "<<num1[2]<<"i"<<endl;

   cout<<"ingresa el segundo numero complejo, primero la parte entera y luego la compleja"<<endl;
   cin>>num2[1];
   cin>>num2[2];

   cout<<"el primer vector es "<<num2[1]<<" "<<num2[2]<<"i"<<endl;

   aux1=(num1[1]*num2[1]);
   aux2=(num1[1]*num2[2]);
   aux3=(num1[2]*num2[1]);
   aux4=-1*(num1[2]*num2[2]);

   resultado[1]=aux1+aux4;
   resultado[2]=aux2+aux3;

   cout<<"el resultado de la multiplicación es: "<<resultado[1]<<" "<<resultado[2]<<"i"<<endl;
   system("pause");
}