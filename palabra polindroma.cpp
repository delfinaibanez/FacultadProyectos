#include <iostream>
#include<string.h>
#include <time.h> 
#include <cstring>
#include <conio.h>
//determinar si la palabra es polindroma//
using namespace std;
int main() {
char palabra[50];
char palabrareves[50];
char polindroma[50];
cout<<"palabra polindroma"<<endl;
cout<<"digite una palabra" <<endl;
    cin>>palabra;
    strcpy(polindroma,palabra);//designamos polindroma=anifled
     strrev(palabra);//delfina convertida//
if (strcmp(palabra, polindroma)==0){
cout<<"la palabra es polindroma";
}
else{
    cout<<"la palabra no es polindroma ";
}




getch();
return 0 ;


}