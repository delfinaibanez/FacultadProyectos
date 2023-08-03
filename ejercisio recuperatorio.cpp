#include<iostream>
#include <time.h> 
#include<conio.h>
#include<string.h>
using namespace std ;
/*) En un subprograma se cargue un vector con N (máximo 100, pero pueden 
ser menos) valores enteros aleatorios entre 0 y 50
b) Con una función se obtenga y se muestre el promedio real de los mismos
c) Con un subprograma (¿procedimiento o función?)se muestre la cantidad de 
ceros del conjunto.
Para cada ítem utilizar un procedimiento o función según corresponda, 
pasando adecuadamente los parámetros desde el principal.*/

void numeros(int aleatorios[20]);
float promedio (int aleatorios[20] );
int ceros(int aleatorios[20]);

int main (){
srand(time(NULL)) ;
int arreglo[20];
cout<<"los numeros aleatorios son"<<endl;
numeros(arreglo);
cout<<"el promedio de los numeros es"<<promedio ( arreglo );
cout<<"la cantidad de ceros en los numeros es"<<ceros(arreglo);


getch();
return 0 ; 


}
void numeros(int aleatorios[20]){ //procedimiento //

    for ( int i=0 ; i<20 ; i++){
    aleatorios[i]=rand()% 20;
    }
    for(int i =0 ; i<20 ; i++){
    cout<<aleatorios[i];

    }
}

float  promedio (int aleatorios[20] ){
float prom ; 
for(int i =0 ; i<20 ; i++){
    for(int j =0 ; j<20 ; j++){
        prom=aleatorios[i]+aleatorios[i+1]/20 ;
    }
    return prom ; 
}
}
int ceros(int aleatorios[20]){ //funcion //
int contador=0;
for (int i =0 ; i<20 ; i++){
    for(int j=0 ; j<20 ; j++)
        if (aleatorios[i]==0){
            contador=contador+1;

        }
    return contador ; 

}



}




