#include <iostream>
using namespace std;

int main(){
    int startNumber,endNumber, totalNumber=0;

    cout<< "Enter start Number: ";
    cin>>startNumber;
    cout<< "Enter End Number: ";
    cin>>endNumber;

    for (int i =startNumber;i<=endNumber;++i){
        totalNumber += i;
    }
    cout<<"The total number is: "<<totalNumber<<endl;

    return 0;
}