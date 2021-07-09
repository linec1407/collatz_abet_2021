#include <iomanip>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int varphi(int); //obtiene la funcion de Colletz para el entero dado
int ruta_impar(int); //determina qué entero impar da como resultado el entero ingresado en la conjetura de Colletz

#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main(){

    int num;
    int kI;

    cout<<endl<<"Ingrese un numero: ";
    cin>>num;
    cout<<endl;

    while(!cin.fail()){

        cout<<"["<<num<<"]";

        for(int i=0; i<9; i++){
            cout<<" < "<<num*pow(2,i+1);
            if(ruta_impar(num*pow(2,i+1))!=0){
                cout<<"__";
            }
        }

        cout<<endl;
        int tempnum = ruta_impar(num);

        if(ruta_impar(num)==0){
            cout<<endl<<"No posee ruta impar.";
        }
        else{
            cout<<" |"<<endl<<" "<<tempnum<<endl;
            for(int i=0; i<9; i++){
                cout<<" |"<<endl<<" "<<tempnum*pow(2,i+1);
                if(ruta_impar(tempnum*pow(2,i+1)) != 0){ 
                    cout<<" < "<<ruta_impar(tempnum*pow(2,i+1));
                }
                cout<<endl;
            }
        }

        cout<<endl<<"Ingrese un numero: ";
        cin>>num;
        cout<<endl;
    }
    
    return 0;
}

int varphi(int n){

    if(n%2==0){
        return n/2;
    }
    else{
        return 3*n+1;
    }
}

int ruta_impar(int n){

    if((n-1)%3 == 0){
        return (n-1)/3;
    }
    else{
        return 0;
    }
}
