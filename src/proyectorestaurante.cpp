#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
double menu(double platillos){
    int acumulador, contador, cantidad, opcion, precio;
    double menu=opcion;
    char seguir;
    //cambio a funcion***
    do
    {
        cout<<"[1]- 5 tacos, arroz y frigoles-------------------LPS.80"<<endl;
        cout<<"[2]-Enchiladas con queso, arroz y frioles--------LPS.100"<<endl;
        switch (opcion)
        {
        case 1:
        cout<<"La orden es: "<<endl;
        acumulador+=cantidad;
        contador++;
            cout<<"Desea seguir comprando: "<<endl;
            cin >>seguir;
            break;
        case 2:
        cout<<"La orden es: "<<endl;
        acumulador+=cantidad;
        contador++;
            cout<<"Desea seguir comprando: "<<endl;
            cin >>seguir;
        default:
            break;
        }
    } while (seguir!='n');
    return menu;
}

int main(){
    int opcion,Nmesa, platillos, saludo;
    string nombre;
    cout<<"******BIENVENIDO A RESTAURANTE EL DELFIN*******"<<endl;
    cout<<"Por favor ingrese la opcion segun sea su caso:"<<endl;
    cout<<"1.Ya cuenta con reservacion"<<endl;
    cout<<"2.No cuenta con reservacion"<<endl;
    cout<<"3.Orden para llevar"<<endl;
    cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"A nombre de quien esta la reservacion:"<<endl;
            cin >>nombre;
            if (nombre=="bertha")
            {
                cout<<"La reservacion esta a nombre de bertha, la mesa asignada es:"<<endl;
            }
            else
            {
                cout<<"Esa reservacion no existe"<<endl;
            }
            cout<<menu(platillos)<<endl;
            break;
        case 2:
           cout<<"Las mesas disponiles son: ";
           cout<<"Que numero de mesa desea: "<<endl;
           cin >>Nmesa;
           break;

        case 3:
           cout<<"Que desea para llevar: ";
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }   
    return 0;
}