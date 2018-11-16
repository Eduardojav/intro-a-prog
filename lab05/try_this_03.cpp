#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Auto{// declaro la clase auto
private:// declaro sus atributos propios
    string placa,motor;
    bool SOAT,energy,tecni;
    int ano,vin,serie;
    double gasolina,km=0;
protected:// atributos que otras clases podrian usar
    string marca,color;
public:// declaro metodos para acceder a funciones de la clase
  Auto(string, string,string,string ,bool ,bool ,bool ,int , int ,int ,double ,double );
    void pasear();
    void descrpg();
    void empresa();
    void legal();
    void encender();
};
// aqui declaro lo que hace cada una de ellas
Auto:: Auto(string _placa, string _marca,string _motor,string _color,bool _soat,bool _ener,bool _tecni,int _serie, int _vin,int _ano,double gasolina,double kilometraje=0){
        placa=_placa;// con el constructor inicializo los atributos de la clase
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
void Auto::descrpg(){// muetro datos generales del auto por si tiene una revision 
cout<<"es de la marca: "<<marca<<endl;
    cout<<"n° de serie:"<<serie<<endl;
    cout<<"numero VIN: "<<vin<<endl;
    cout<<"es de la marca: "<<marca<<endl;
    cout<<"es de color: "<<color<<endl;
    cout<<"fabricado el año"<<ano<<endl;
    cout<<"VIN: "<<vin<<endl;
    cout<<"serie de fabricante: "<<serie<<endl;
    cout<<"Estado de SOAT: "<<SOAT<<endl;
    }
void Auto::legal(){// reviso si cumple con los requerimientos de que debe tener un auto para transitar libremente y si es legal o no hacerlo
    if(SOAT==true && tecni==true)
    cout<<"este auto si es legal para conducir"<<endl;
else{
    cout<<"sera multado si conduce este auto"<<endl;}
}
void Auto::encender(){// reviso si el usuario puede encender el auto mirando si tiene energia y gasolina y no tiene fallos 
if(energy== true && gasolina>=2 && tecni==true)
        cout<<"usted encendio el auto"<<endl;
else
        cout<<"no puede encender el auto"<<endl;
    }
void Auto::pasear(){// reviso si el auto es capaz o esta en la posiblidad de salir sin ser multado independientemente del usuario
if(SOAT==true&& energy==true&& gasolina>=10&& tecni==true)
    cout<<"usted puede pasear en el auto"<<endl;
else{
    cout<<"usted no puede pasear en este vehiculo"<<endl;
}
}

int main(){
    Auto primo1("VH6737H","TOYOTA","P539PAS","BLANCO",true,false,true,125871,154785,1995,56.45);// declaro un objeto de la clase auto
    primo1.descrpg();// llamo a la funcion para describir
    primo1. legal();// veo si es legal conducirlo
    primo1. encender();// veo si soy capaz de encender el auto
    primo1. pasear();// veo si soy capaz de pasear en el auto libremente
return 0;
}
