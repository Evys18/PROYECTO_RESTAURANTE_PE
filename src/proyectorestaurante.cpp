#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double menu(double platillos){
    double menu=platillos;
    int acumulador, contador, cantidad, opcion, precio;
    char seguir;
    //cambio a funcion***
    do
    {
        cout<<"[1]- 5 tacos, arroz y frigoles-------------------LPS.80"<<endl;
        cout<<"[2]-Enchiladas con queso, arroz y frioles--------LPS.100"<<endl;
        cin>>opcion;
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