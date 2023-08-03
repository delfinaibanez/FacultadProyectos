#include<iostream>
#include <time.h> 
#include<conio.h>
#include<string.h>
using namespace std ;
/*Ejercicio 4: Hacer un arreglo de estructura llamada atleta para 
N atletas que contenga los siguientes campos: nombre, país, numero_medallas. y devuelva los datos 
(Nombre, país) del atleta que ha ganado el mayor número de medallas.*/
struct atleta{
char nombre[50] ;
char pais[50] ;
int numero_medallas;
}atleta[80];

int main (){
int numero_atletas ;
int mayor=0 , menor =0 ;
int ganador=0;


cout<<"digite el numero de atletas"<<endl;
cin>>numero_atletas;

for(int i=0 ; i<numero_atletas ; i++){
    fflush(stdin);
    cout<<"digite el nombre del atleta N"<<i+1<<endl;
    cin.getline(atleta[i].nombre,50 , '\n');
    cout<<"digite el pais "<<endl ;
    cin.getline(atleta[i].pais , 50 , '\n');
    cout<<"digite el numero de medallas obtenidas"<<endl ; 
    cin>>atleta[i].numero_medallas;



    if (atleta[i].numero_medallas > mayor ){
        mayor=atleta[i].numero_medallas;
        ganador=i;
    }
}
cout<<"el atleta con mas medallas es "<<atleta[ganador].nombre<<endl;
cout<<"pais : "<<atleta[ganador].pais<<endl;

getch();

}