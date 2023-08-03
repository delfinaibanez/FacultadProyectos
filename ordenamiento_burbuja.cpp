#include<iostream>
#include <time.h> 
#include<conio.h>
#include<string.h>
/* ordenamiento burbuja . mayor y menor */
using namespace std ;
int main (){
int arreglo[]={1,8,7,6,5,4};
int aux ; 

for( int i=0 ; i<6 ; i++){
    for(int j=0 ; j<6 ; j++){
        if(arreglo[j]>arreglo[j+1]){
            aux=arreglo[j];
            arreglo[j]= arreglo[j+1];
            arreglo[j+1]=aux ; 
        }
    }
}
cout<<"en orden ascendente"<<endl;
for(int i=0 ; i<=6 ; i++){
    cout<<arreglo[i];

    }
cout<<"en orden  decreciente "<<endl;
for(int i=5 ; i>=0 ; i--){
    cout<<arreglo[i];

    }

getch();
return 0 ; 


}