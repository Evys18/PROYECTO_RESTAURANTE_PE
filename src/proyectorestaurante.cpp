#include<iostream>
#include<string>
#include<iomanip>
#include <math.h>
using namespace std;
int menu(int platillos){
    int opcion, contador=0, acumulador=0, cantidad, Tpagar, menu1=90, menu2=150, menu3=110;
    char seguir;
    do
    {
        cout<<"A continuacion se le presenta el menu de la comida elija lo que sea de su gusto"<<endl;
        cout<<"[1]-Hamburguesa --------------------LPS 90.00"<<endl;
        cout<<"[2]-Pizza---------------------------LPS 150.00"<<endl;
        cout<<"[3]-tacos---------------------------LPS 110.00"<<endl;
        cin >>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"El plato viene incluido con papas y refresco"<<endl;
            cout<<"El precio del plato es de "<<menu1<<" Lempiras "<<endl;
            cout<<"Cuantas hamburguesas desea comprar"<<endl;
            cin >>cantidad;
            cantidad++;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            acumulador=menu1*cantidad;
            break;
        case 2:
            cout<<"El plato viene incluido con refresco"<<endl;
            cout<<"El precio del plato es de "<<menu2<<" Lempiras "<<endl;
            cout<<"Cuantas pizzas desea comprar"<<endl;
            cin >>cantidad;
            cantidad++;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            acumulador=menu2*cantidad;
            break;
        case 3:
            cout<<"El plato viene incluido con refresco"<<endl;
            cout<<"El precio del plato es de "<<menu3<<" Lempiras "<<endl;
            cout<<"Cuantas ordenes desea comprar"<<endl;
            cin >>cantidad;
            cantidad++;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            acumulador=menu3*cantidad;
            break;
        default:
            break;
        }
    } while (seguir!='n');
    Tpagar=acumulador*cantidad;
    cout<<"Ha hecho la compra de "<<cantidad<<" Ordenes"<<endl;
    cout<<"Su total a pagar es de :"<<Tpagar<<" Lempiras sin ISV includio"<< endl;
    cout<<"***GRACIAS POR SU COMPRA***";
    return 0;
}

int main(){
    int opcion,Nmesa, platillos, saludo;
    string nombre;
    int Nmesas[10];  //Implementacion del arreglo de mesas
    Nmesas[0]=1;
    Nmesas[1]=2;
    Nmesas[2]=3;
    Nmesas[3]=4;
    Nmesas[4]=5;
    Nmesas[5]=6;
    Nmesas[6]=7;
    Nmesas[7]=8;
    Nmesas[8]=9;
    Nmesas[9]=10;
    cout<<"          ==================================================          "<<endl;
    cout<<"                  BIENVENIDO A RESTAURANTE EL DELFIN                  "<<endl;
    cout<<"          ==================================================          "<<endl;
    cout<<"Por favor ingrese la opcion segun sea su caso:"<<endl;
    cout<<"1.Ya cuenta con reservacion"<<endl;
    cout<<"2.No cuenta con reservacion"<<endl;
    cout<<"3.Orden para llevar"<<endl;
    cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Ingrese el nombre para validar su reservacion:"<<endl;
            cin >>nombre;
            if (nombre=="bertha")
            {
                cout<<"La reservacion esta a nombre de bertha, la mesa asignada es:"<<Nmesas[8]<<endl;
            }
            else
            {
                cout<<"Esa reservacion no existe"<<endl;
            }
            cout<<menu(platillos)<<endl;
            break;
        case 2:
           cout<<"========================================================================"<<endl;
           cout<<"A continuacion se le mostrara las mesas que estan y no estan disponibles:"<<endl;
             for (int i = 0; i < 4; i++)
                {
                    cout<<"Mesa "<<Nmesas[i]<<"    Si esta Disponible"<<endl;
                }
           cout<<"Las mesas no disponiles son: "<<endl;
              for (int i =5; i < 10; i++)

                {
                    cout<<"Mesa "<< Nmesas[i]<<"  No se encuentra disponible"<<endl;
                }
   
           cout<<"Que numero de mesa desea: ";
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