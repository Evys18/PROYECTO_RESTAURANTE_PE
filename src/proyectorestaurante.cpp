#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
void saludo(string saludar){
    //RESUARANTE PROYECTO FINAL
    //Hola 

    cout<<"**Bienvenido a RESTAURANTE EL DELFIN**"<<saludar<<endl;

}
void listademesas(int numerodemesa){
    int mesas=20;
    cout<<"Listado de mesas disponibles y reservadas"<<endl;
    for (int mesa = 1; mesa <+20; mesa++)
    {
        cout<<"mesa"<<mesa<< ": disponible"<<endl;
        cout<<setw(10)<<mesas<<endl;
        if (mesa%10)
        {
            cout<<endl;
        }
    }  
}

int main(){
    int opcion,numerodemesa;
    string saludar,nombre;

    saludo(saludar);
    cout<<"Por favor ingrese la opcion segun sea su caso:"<<endl;
    cout<<"1.Ya cuenta con reservacion"<<endl;
    cout<<"2.No cuenta con reservacion"<<endl;
    cout<<"3.Orden para llevar"<<endl;
    cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"A nombre de quien esta la reservacion:"<<endl;
            getline(cin,nombre);
            break;
        case 2:
           listademesas(numerodemesa);
           cout<<"Ingrese el numero de mesa que desea: "<<endl;
           cin>>numerodemesa;
           break;

        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }   
    return 0;
}