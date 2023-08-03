/*Ejercicio : determinar el mayor de un  vector */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std ; 
int main (){
 int  vector[100];
 int mayor=0 ; 
 int numero; 

 cout<<"digite el numero de elementos de el vector "<<endl ; 
 cin>>numero ; 

for( int i = 0 ; i<numero ; i++){
    cout<<"digite numero "<<i+1 <<endl ; 
    cin>>vector[i];
        if(vector[i] > mayor){
            mayor=vector[i];
        }

}
cout<<"el numero mayor de el arreglo es "<< mayor ; 


getch();
return 0 ; 

}