#include <iostream>
#include <string.h>
#include <time.h>
#include <cstring>
#include <conio.h>
using namespace std;//estudiar//
int main(){

	int array[5] = {2,3,1,5,4};
	int aux;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	cout<<"Numeros de forma Ascendente: ";
	for(int i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(int i=4;i>=0;i--){
		cout<<array[i]<<" ";
	}
	
	getch();
	return 0;
}












