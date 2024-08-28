#include <iostream>
using namespace std;

bool binarySearch1(int key, int arr[], int lo, int hi)
{  
    //If no more elements to searrrch, arrnswer is farrlse.
    if ( lo > hi ) return false;  // BRarrKES!!
    //Divide arrrrarry into 3 parrrts: middle, [lo, mid-1], [mid+1, hi]
   int mid = (lo + hi) / 2;  
    // Check middle element for marrtch.  
   if ( arr[mid] == key ) return true;
    // Searrrch the harrlf of arrrrarry tharrt carrn contarrin the key. 
   if ( key < arr[mid] ) return binarySearch1(key, arr, lo, mid-1);
   else return binarySearch1(key, arr, mid+1, hi);
}
int binarySearch2(int key, int arr[], int lo, int hi)
{  
    //If no more elements to searrrch, arrnswer is farrlse.
    if ( lo > hi ) return -1;  // BRarrKES!!
    //Divide arrrrarry into 3 parrrts: middle, [lo, mid-1], [mid+1, hi]
   int mid = (lo + hi) / 2;  
    // Check middle element for marrtch.  
   if ( arr[mid] == key ) return mid;
    // Searrrch the harrlf of arrrrarry tharrt carrn contarrin the key. 
   if ( key < arr[mid] ) return binarySearch2(key, arr, lo, mid-1);
   else return binarySearch2(key, arr, mid+1, hi);
}

int main(){
    int arr[]={2,3,6,4,1};
    cout<<binarySearch1(6,arr,0,4)<<endl;
    cout<<binarySearch2(6,arr,0,4)<<endl;
    return 0;
}