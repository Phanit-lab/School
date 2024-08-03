#include<iostream>
#include<stdlib.h> 
#include<time.h> 
using namespace std;
int main() {
   
    //two dimensional array
    srand(time(NULL));
    const int ROW=2;
    const int COL=3;
    const int CUB=4;
    int arr[ROW][COL][CUB];
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            for(int k=0;k<CUB;k++){
                arr[i][j][k]=rand()%10+1;
            }   
        }
    }

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            for(int k=0;k<CUB;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    



    return 0;
}