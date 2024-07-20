#include<iostream>
#include<stdlib.h> 
#include<time.h> 
using namespace std; 

int main() {

    srand(time(NULL));
    const int SIZE=31;
    int january[SIZE];
    int sum=0;
    double average;
    int count=0;

    for(int i=0;i<SIZE;i++){
        january[i]=rand()%31+10;
        sum += january[i];
    }
    average = sum/SIZE;

    for(int j=0; j<SIZE;j++){
        if (january[j]<average)
        {
            count++;
        }  
    }
    cout<<"Average Temperature: "<<average<<endl;
    cout<<" Temperature below the spec is: "<<count<<endl;

    return 0; 
}