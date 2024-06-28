#include <iostream>
using namespace std;

int main(){

    
    double quantity, price,totalExpenses;
    const int TEN_PERSION_OFF = 5000;
    const double OFF = 0.9;
    double expenes;

    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter the quantity: ";
    cin>>quantity;

    totalExpenses = price *quantity;

    if (totalExpenses>TEN_PERSION_OFF)
    {
        expenes = totalExpenses*OFF;
    }else {
        expenes= expenes;
    }
    cout<<"The Total Expense is "<<expenes<<" USD"<<endl;

    return 0;

}