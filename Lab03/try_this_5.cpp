#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

bool repe (vector<string> name ){
    for(int i=0;i<name.size()-1;i++){
        for(int j=i+1;j<name.size();j++){
            if(name[i]==name[j]){
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<string> name;
    bool b=true;
    vector<double> puntos;
    double punt;
    string nombre;
    do {
        cin>>nombre>>punt;
        puntos.push_back(punt);
        name.push_back(nombre);
        b=repe(name);}
     while((b)&&(nombre!="SinNombre"));
        if(!b)
            cout<<"nombre repetido"<<endl;

	return 0;
}
