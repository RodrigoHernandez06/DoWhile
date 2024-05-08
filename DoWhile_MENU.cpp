//dowhile

#include <iostream>
using namespace std;

int main(){

    char opt=' ';

    do {
        cout<<"MENU DEL DIA: \n"
        <<"A - Pollo a la plancha \n"
        <<"B - Carne asada \n"
        <<"C - Sopa de gallina \n"
        <<"D - Churrasco \n"
        <<"E - Pescado frito\n";
    cout<<"Ingrese la letra correspondiente a su plato, presione x para salir: ";
    cin>>opt;
    }

    while (opt!='X' && opt!='x');
    return 0;
}