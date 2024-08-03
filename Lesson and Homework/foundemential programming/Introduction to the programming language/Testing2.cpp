#include<iostream>
using namespace std;
int main(){

  //1. Store
  double inch = 0;
  double cm = 0;
  const double INCH_TO_CM=2.54;
  //2. Input
  cout<<"Input data:"<<endl;
  cout<<"The TV screen diagonal (inch) ->: ";
  cin>>inch;
  //3. Process 
  cm = inch * INCH_TO_CM;
  //4. Output
  cout<<"Output data:"<<endl;
  cout<<"The TV screen diagonal is "<<cm<<" cm"<<endl;

  return 0;
}