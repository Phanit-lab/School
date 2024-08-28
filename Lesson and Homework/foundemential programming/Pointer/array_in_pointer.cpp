#include <iostream>
using namespace std;


void increment2(int arr[], int count){
    for(int i=0;i<count;i++){
        arr[i] = arr[i] + 1;
    }
}

int main(){

    int arr[]={10,20,30};
    int *pArr=arr;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;//10 20 30
    increment2(arr, 3);
    cout<<*(pArr)<<" "<<*(pArr+1)<<" "<<*(pArr+2)<<endl;//11 21 31

    return 0;
}