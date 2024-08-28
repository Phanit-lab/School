
//Bubble Short
void swapping_number(int &a, int &b){
    int t;
    t = a;
    a = b;
    b = t;
}
void sort_number(int arr[], int count){
    for(int i=0;i<count;i++){
        for(int j=0;j<count-i-1;j++){
            if(arr[j]<arr[j+1]){
                swapping_number(arr[j],arr[j+1]);
            }
        }
    }
}
