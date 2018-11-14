/*Goal: Practice writing generic functions*/

#include "genericFunction.hpp"

int main()
{
    int a = 90;
    int b = 1; 
    
    float c = 23.2;
    float d = 32.5;
    
    cout<<a <<" + "<<b<<" = "<< sumTwo(a,b) << '\n';
    cout<<c <<" + "<<d<<" = "<< sumTwo(c,d) << '\n';
        
    return 0;
}