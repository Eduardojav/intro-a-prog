#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int g(int& x);
int f(int& x);
void h(int x, int y)
{
    int i=7;
    int& r=i;
    r=9;
    i=10;
    cout<<r<<" "<<i<<endl;
    vector<vector<double> > v;
    double val=v[f(x)][g(y)];
    double& var=val;

    var=var/2+sqrt(var);
}
int f(int& x)
{
    x=x+1;
    return x;
}

int main()
{
    int xx=0;
    cout<<f(xx)<<endl;
    cout<<xx<<endl;
    int yy=7;
    cout<<f(yy)<<endl;
    cout<<yy<<endl;
    return 0;
}
