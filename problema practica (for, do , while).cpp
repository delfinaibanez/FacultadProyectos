//Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
// En ese momento el programa (cuando introduzca 0 ) debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
#include <iostream>
#include <string.h>
#include<conio.h>
using namespace std;
int main ( ) {
int  
conteo=0 ,
numeromayor ,
numero ; 
do{
 cout<<"ingrese un numero (cuando ingrese 0 se detiene )";
 cin>>numero ;
if (numero>0)                  
 conteo++;//se incrementa osea se guarda en el conteo //

} while (numero!=0);
cout<<"el total de numeros mayores son"<< conteo ; 



  getch();
   
    return 0 ;

}