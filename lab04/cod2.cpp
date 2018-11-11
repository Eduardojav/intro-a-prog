#include <iostream>

using namespace std;

namespace innocent
{
    void f(int z)
    {
        int x;
        x=7;
    }
}
namespace dangerus
{
    void f(int z)
    {
        int x=0;
        if(z>x){
            x=7;
        }
    }
}
int main()
{
    return 0;
}

