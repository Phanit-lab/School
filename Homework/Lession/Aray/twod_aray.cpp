#include<iostream>
#include<stdlib.h> 
#include<time.h> 
using namespace std;
int main() {
   
    //two dimensional array
    srand(time(NULL));
    const int ROW=4;
    const int COL=6;
    int arr[ROW][COL];
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            arr[i][j]=rand()%10+1;
        }
    }

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    




    return 0;
}