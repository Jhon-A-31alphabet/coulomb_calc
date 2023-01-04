#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

const int constante_electrica= 9000000000; //electric const
static int mainloop =1;

struct parametros_de_formula{

    double carga_1;
    double carga_2;
    double distancia_en_metros;
}parametros;//parameters to operate the coulomb rule.

struct posicion_plano_cartesiano{ //position to x and y
    float eje_X;
    float eje_Y;
    float eje_Y_2;
    float eje_X_2;

}posicion;

void cordenadas();
void menu();

int main(){

    while(mainloop=1){ //it will never stop.
    menu();
    cout<<endl<<endl;
    cout<<" >           q1: ";cin>>parametros.carga_1;cout<<endl;
    cout<<" >           q2: ";cin>>parametros.carga_2;cout<<endl;
    cout<<" >          r^2:";cin>>parametros.distancia_en_metros;cout<<endl;

    double result = constante_electrica*(parametros.carga_1*parametros.carga_2/pow(parametros.distancia_en_metros,2));
    cout<<result<<endl;
    double f = result/pow(parametros.distancia_en_metros,2);
    cout<<f<<"  NEWTONS"<<endl<<endl;

    cordenadas();
    }
    return 0;

}

void menu(){
    cout<<"Manejo del calculo de la fuerza de atraccion"<<endl<<"de particulas subatomicas"<<endl;
    cout<<"utilizando la ley de coulomb. (vamos a medir culombios)"<<endl;
    cout<<"La formula de la ley de coulomb es:      F = K* (Q1*Q2) / R**2"<<endl<<endl;
}

void cordenadas(){
    cout<<"cordenadas de la carga q1 horizontal"<<endl;
    cin>>posicion.eje_X;
    cout<<"cordenadas de la carga q1 vertical"<<endl;
    cin>>posicion.eje_Y;
    cout<<"<x="<<posicion.eje_X<<">"<<"<y="<<posicion.eje_Y<<">"<<endl;

    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl<<endl;

    cout<<"cordenadas de la carga q2 horizontal"<<endl;
    cin>>posicion.eje_X_2;
    cout<<"cordenadas de la carga q2 vertical"<<endl;
    cin>>posicion.eje_Y_2;
    cout<<"<X="<<posicion.eje_X_2<<">"<<"<y="<<posicion.eje_Y_2<<">"<<endl<<endl;
}
