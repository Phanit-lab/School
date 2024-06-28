#include <iostream>
using namespace std;

    
int main(){
    float R1, R2, R3, R0;
    R1 = 2;
    R2 = 4;
    R3 = 8;
    R0 = (R1*R2*R3)/ ((R2*R3)+(R1*R3)+(R1*R2));
    cout<<"R0 is "<<R0<<endl;
    return 0;


}