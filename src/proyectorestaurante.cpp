#include<iostream>
#include<string>
#include<iomanip>
#include <math.h>
using namespace std;

int menu(){
    int opcion, contador=0, Detalle=0, TotalAcumulador=0, acumulador=0, cantidad, Tpagar, menu1=200, menu2=150, menu3=110;
    char seguir;
    double const ISV=0.15;
    do
    {
        cout<<"A continuacion se le presenta el menu de la comida elija lo que sea de su gusto"<<endl;
        cout<<"[1]-LANGOSTA --------------------LPS 200.00"<<endl;
        cout<<"[2]-CAMARONES AL AJILLO----------LPS 150.00"<<endl;
        cout<<"[3]-FILETE DE PESCADO------------LPS 110.00"<<endl;
        cin >>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"El plato viene incluido con arroz, tajadas, encurtido refresco"<<endl;
            cout<<"El precio del plato es de "<<menu1<<" Lempiras "<<endl;
            cout<<"Cuantas LANGOSTAS desea ordenar"<<endl;
            cin >>cantidad;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            contador++;
            acumulador=menu1*cantidad;
            break;
        case 2:
            cout<<"El plato viene incluido con tostones, ensalada de lechuga, arroz y refresco"<<endl;
            cout<<"El precio del plato es de "<<menu2<<" Lempiras "<<endl;
            cout<<"Cuantos camarones desea ordenar"<<endl;
            cin >>cantidad;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            contador++;
            acumulador=menu2*cantidad;
            break;
        case 3:
            cout<<"El plato viene incluido con tajadas, rise and beans, encurtido y refresco"<<endl;
            cout<<"El precio del plato es de "<<menu3<<" Lempiras "<<endl;
            cout<<"Cuantos filetes desea ordenar"<<endl;
            cin >>cantidad;
            cout<<"Desea seguir ordenando, o avanzar a la cancelacion de su pedido s/n?";
            cin >>seguir;
            contador++;
            acumulador=menu3*cantidad;
            break;
        default:
            break;
        }
        cout<<Factura()<<endl;
    } while (seguir!='n');
     return 0;
}
int Factura(){
    int Tpagar, Detalle, TotalAcumulador, contador, acumulador,ISV;
    TotalAcumulador+=acumulador;
    Detalle=TotalAcumulador*ISV;
    Tpagar=Detalle+TotalAcumulador;
    cout<<"Ha hecho la compra de "<<contador<<" Ordenes"<<endl;
    cout<<"el Subtotal a pagar es de :"<<TotalAcumulador<<" Lempiras"<< endl;
    cout<<" ISV: "<<Detalle<<endl;
    cout<<"El total a pagar de la factura es: "<<Tpagar<<endl;
    return 0;
}
int main(){
    int opcion, Nmesa, platillos, saludo;
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
    cout<<endl;
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
            cout<<menu()<<endl;
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
                    if (i>=5 && i<=10)
                    {
                        cout<<"La mesa solicitada no esta disponible";
                    }
                    else
                    {
                        cout<<"solicite una nueva mesa"<<endl;
                    }
                    
                }
   
           cout<<"Que numero de mesa desea: ";
           cin >>Nmesa;
           cout<<menu()<<endl;
           break;

        case 3:
           cout<<"Que desea para llevar: ";
           cout<<menu()<<endl;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }   
    return 0;
}