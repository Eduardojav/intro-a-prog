//Vasya and Chocolate
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int t,s,a,b,c;
    cin>>t;
    unsigned long long res,barras=0;
for(int i=0;i<t;i++){
	cin>>s
	>>a>>b>>c;
	res=s/c;
	barras+=res;
    res=barras/a;
	barras=barras+(res*b);

    cout<<barras<<" ";
    barras=0;

}
    return 0;}
