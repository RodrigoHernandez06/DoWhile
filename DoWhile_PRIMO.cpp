#include <iostream>
using namespace std;

int main(){
    
    int n=0, i=0, primo=1, mod=0;
    
    cout<<"Ingrese un entero: ";
    cin>>n;
    
    for (i=n-1; i>=2; i--){
    mod=n%i;
    }    
    
    if (mod==0){
    cout<<"El numero es primo";
        }
        
    else if (mod=1){
    cout<<"El numero no es primo";
        }
    return 0;
}