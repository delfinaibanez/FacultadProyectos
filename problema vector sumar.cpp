//Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.//
#include<iostream>
using namespace std;

int main(){
//variables//
int vectorn[]{1,2,3,4,5};
int suma=0;
int i ; 
for ( i=0; i<5; i++)
{
   suma+= vectorn[i]; //sumad etodo el vector//
}

cout<<"la suma de todos los valores es "<< suma << endl; 







}