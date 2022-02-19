#include<iostream>

using namespace std;
string sabor() {
    string sabor;
    cout << "Ingrese el sabor de su helado"<< "\n";
    cin >> sabor;
    return sabor;
}
float topping(){
    float   toppingOreo= 1, toppingKitkat = 1.50, toppingBrownie= 0.75, toppingLacasitos=0.96, subTopping;
    int opcionTopping;
    cout << "Seleccion su topping" << "\n";
    cout << "Topping Oreo -1 "<< ".\n" << "Topping KitKat - 2 " << ".\n" << "Topping Brownie - 3" << ".\n"<< "topping Lacasitos -4"<< ".\n";
    cin >> opcionTopping;

    switch(opcionTopping){
    case 1:
        subTopping = toppingOreo;
        break;
    case 2:
        subTopping = toppingKitkat;
        break;
    case 3:
        subTopping = toppingBrownie;
        break;
    case 4:
        subTopping = toppingLacasitos;
        break;
    }
    if(opcionTopping>4 || opcionTopping<1){
        cout << "no tenemos este topping, lo sentimos" <<"\n";
    }
    return subTopping;
}
void compra(){
        float sinTopping= 1.90, subTotal;
    int opcionTopping;
    cout << "Bienvenido a la Heladeria"<< "\n";

    string helado = sabor();
    subTotal= sinTopping;

    cout << "¿Desea agregar topping?"<<"\n";
    cout << "Si - 1"<<".\n"<<"No - 2"<<"\n";
    cin >> opcionTopping;

    if (opcionTopping==1){
        float subTopping=  topping();
        subTotal = subTotal + subTopping;
        cout << "Gracias por su compra su helado de " << helado << " su total es de "<< subTotal<<"\n";

    }else if(opcionTopping==2){
        cout << "Gracias por su compra su helado de " << helado << " su total es de "<< subTotal<<"\n";
    }else {
        cout << "Opcion invalida, gracias por visitarnos "<< "\n";
    }
    }

int main()
{
    int nuevoCompra;
    do{
        compra();
        cout<< "¿Desea comprar otro helado?"<< "\n";
        cout<< "Si - 1 "<<"\n " <<"No - 2"<<"\n";
        cin >> nuevoCompra;
    }while(nuevoCompra==1);
    cout << "Gracias por visitarnos, vuelva pronto";
    }


