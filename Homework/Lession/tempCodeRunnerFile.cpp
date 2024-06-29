    #include<iostream>
    using namespace std;

    int main(){

    int positive = 0, negative = 0;
    int input;
    cout<<"The positive is "<<positive;
    cout<<"The negative is "<<negative;



    while(input!=0){
        cout<<"Input the number: ";
        cin>>input;
        if (input>0){
            positive++;
        }
        else if(input<0){
            negative++;
        }
    }
    cout<<"The positive is "<<positive;
    cout<<"The negative is "<<negative;



    return 0;
    }