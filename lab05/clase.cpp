#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Auto{
private:
    string placa,motor,color;
    bool SOAT,energy,tecni;
    int ano,vin,serie;
    double gasolina,km=0;
protected:
    int marca1;
    string marca;
public:
    enum Marca {
        TOYOTA,SUZUKI,CHERVOLET,AUDI,KIA,HYUNDAI};
    enum Motor{
        b1,b2,b3};
    Marca in_marca(int x){
    if(x<TOYOTA || x>HYUNDAI) error("marca no existente");
    return Marca(x);}
    Marca operator ++(Marca tipo){
        if (tipo==HYUNDAI)
            tipo=TOYOTA;
        else
            tipo=Marca(tipo+1);
        return tipo ;}

    /*ostream& operator << (ostream &o,const Marca &p)
{   static const char* Marca_tbl[6]={
        "TOYOTA","SUZUKI","CHERVOLET","AUDI","KIA","HYUNDAI";
    };
    return o << Marca_tbl[p-1];
}*/
    Auto(int);
    Auto(string,string,string,string ,bool ,bool ,bool ,int , int ,int ,double ,double );
    void error(string);
    void salir();
    void pasear();
    void descrpg();
    void empresa();
    void legal();
    void encender();
};
Auto::Auto(int){
        placa="sda";
        Marca j=TOYOTA;
        marca=j;
        motor="_asdasd";
        color="_color";
        SOAT=true;
        energy=false;
        km=0;
        tecni=true;
        ano=123;
        vin=3241;
        serie=123123;
}

Auto::Auto(string _placa, string _marca,string _motor,string _color,bool _soat,bool _ener,bool _tecni,int _serie, int _vin,int _ano,double gasolina,double kilometraje=0){
        placa=_placa;
        marca=_marca;
        motor=_motor;
        color=_color;
        SOAT=_soat;
        energy=_ener;
        km=kilometraje;
        tecni=_tecni;
        ano=_ano;
        vin=_vin;
        serie=_serie;}
void Auto::error(string x){
    cout<<x;}
void Auto::salir(){
    if(energy==true && gasolina>=10 && tecni==true){
        cout<<"el auto puede correr"<<endl;
        return;}
    cout<<"el auto no puede o debe salir"<<endl;
    }
void Auto::descrpg(){
cout<<"es de la marca: "<<marca<<endl;
    cout<<"n° de serie:"<<serie<<endl;
    cout<<"numero VIN: "<<vin<<endl;
    cout<<"es de color: "<<color<<endl;
    cout<<"fabricado el año"<<ano<<endl;
    cout<<"VIN: "<<vin<<endl;
    cout<<"serie de fabricante: "<<serie<<endl;
    cout<<"Estado de SOAT: "<<SOAT<<endl;
    }
void Auto::legal(){
    if(SOAT==true && tecni==true)
    cout<<"este auto si es legal para conducir"<<endl;
else{
    cout<<"sera multado si conduce este auto"<<endl;}
}
void Auto::encender(){
if(energy== true && gasolina>=2 && tecni==true)
        cout<<"usted encendio el auto"<<endl;
else
        cout<<"no puede encender el auto"<<endl;
    }
void Auto::pasear(){
if(SOAT==true&& energy==true&& gasolina>=10&& tecni==true)
    cout<<"usted puede pasear en el auto"<<endl;
else{
    cout<<"usted no puede pasear en este vehiculo"<<endl;
}
}
enum Marca {
        TOYOTA,SUZUKI,CHERVOLET,AUDI,KIA,HYUNDAI};
Marca operator ++(Marca tipo){
        if (tipo==HYUNDAI)
            tipo=TOYOTA;
        else
            tipo=Marca(tipo+1);
        return tipo ;}
int main(){

    Marca mar = TOYOTA;
    cout<< mar<<" "<<++mar;
    /*Auto primo(12);
    //Auto primo1("VH6737H","TOYOTA","P539PAS","BLANCO",true,false,true,125871,154785,1995,56.45);
    primo.descrpg();*/
    /*primo1.descrpg();
    primo1. salir();
    primo1. legal();
    primo1. encender();
    primo1. pasear();*/
return 0;
}
