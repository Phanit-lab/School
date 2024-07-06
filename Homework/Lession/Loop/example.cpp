#include <iostream>
using namespace std;

int main(){
    int number, total=0;

    cout<< "Enter start Number: ";
    cin>>number;

    while (number!=0)
    {
        total += number%10;
        number /= 10;

    }
    cout<<"The total: "<<total;
    

    return 0;
}