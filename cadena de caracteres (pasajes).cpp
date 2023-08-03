#include <iostream>
#include<string.h>
#include <time.h> 
#include <cstring>
#include <conio.h>
//pedir al usuario una cadena de caracteres , almacenarla en un arreglo y
//copiar todo su contenido en un arreglo  //
using namespace std;
int main() {
//char nombre[]={"delfina"};

//char nombrecopia[20];
//strcpy(nombrecopia,nombre);
//cout<<"el nombre es " <<nombrecopia;
char nombre[20];
char nombrecopia[20];

cout<<"ingrese su nombre ";
cin>>nombre; 
strcpy(nombrecopia, nombre );
cout<<"el nombre de la persona en la cadena copia es "<<nombrecopia;

getch();
return 0 ; 

}