#include<iostream>
#include <time.h> 
#include<conio.h>
#include<string.h>
/*Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/
using namespace std ;
int main (){
int matris_uno[3][3]={1,2,3,4,5,6 ,7 ,8 , 9};
int matris_dos[3][3]={1,2,3,4,5,6 ,7 ,8 , 9};
int matris_suma[3][3]; 

for(int i=0 ; i<3 ; i++){
    for(int j= 0 ; j<3 ; j++){
     matris_suma[i][j]=matris_uno[i][j]+matris_dos[i][j]; //pasaje //

    }
}
for(int i =0 ; i<3 ; i++){
    for(int j=0 ; j<3 ; j++){
        cout<<matris_suma[i][j]<<endl ;

    }
    cout<<"\n";
}








getch();
return 0 ; 

}
