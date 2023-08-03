#include <iostream>
#include<string.h>
#include <time.h> 
#include <cstring>
#include <conio.h>
using namespace std;
int main() {
char cadena[]="hola que tal ";
char cadena1[]="¿cual es tu nombre ?";
char cadenanombre[50];
char cadenafinal[50] ; 

cout<<cadena<<endl;
cout<<cadena1;
cin>>cadenanombre;

strcpy(cadenafinal, cadena);
strcat(cadenafinal , cadenanombre);

cout<<cadenafinal<<endl;

getch();
return 0 ;


}