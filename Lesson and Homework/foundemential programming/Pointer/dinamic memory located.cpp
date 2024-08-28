#include <iostream>
using namespace std;


void increment3(){
    int *num=new int();
    *num=20;
    cout<<*num;
    delete num;

}

int main(){

    increment3();
    
    return 0;
}