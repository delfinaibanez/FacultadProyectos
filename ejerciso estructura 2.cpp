/*Ejercicio 2: Hacer una estructura llamada alumno, en la cual se tendrán los
 siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, 
 comprobar cuál de los 3 tiene el mejor promedio 
y posteriormente imprimir los datos del alumno.*/
#include<iostream>
#include <time.h> 
#include<conio.h>
#include<string.h>
using namespace std ;
struct alumno{
char nombre [50];
int edad ; 
float promedio ; 
} alumno[3];


int main (){
    int mayor=0;
    int numero_mayor ; 
    int mejor_alumno ; 

for (int i = 0 ; i>4 ; i++){
  
cout<<"digite el nombre del alumno "<<i+1<<endl; 
cin.getline(alumno[i].nombre , 50 , '\n');
  fflush(stdin);
cout<<"digite la edad del alumno"<<endl ; 
cin>>alumno[i].edad;
  fflush(stdin);

cout<<"digite el promedio alumno"<<endl ; 
cin>>alumno[i].promedio;
  fflush(stdin);

if (alumno[i].promedio>mayor){
    numero_mayor=alumno[i].promedio ;
    mejor_alumno= i ;
    }
}

cout<<"el mejor alumno es "<<alumno[mejor_alumno].nombre<<endl;





getch();
return 0 ; 
}