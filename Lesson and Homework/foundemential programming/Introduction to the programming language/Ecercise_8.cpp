#include <iostream>
using namespace std;


int main() {
    int starthour, startminute, startsecond;
    int endhour, endminute, endssecond;

    cout << "start hour";
    cin >> starthour;
    cout << "start minute";
    cin >> startminute;
    cout << "start second";
    cin >> startsecond;
    cout << "End hour";
    cin >> endhour;
    cout << "End minute";
    cin >> endminute;
    cout << "End second";
    cin >> endssecond;

    // convert hour and second to minuute 
    starthour = starthour * 60; // (1h=60mn)
    startsecond = startsecond / 60; // (60s=1mnn)
    endhour = endhour * 60;
    endssecond = endssecond / 60;
    // calculated the call time 
    double spendtime;
    spendtime = endhour - starthour + endminute - startminute + endssecond - startsecond;
    // calculation a cost of calls(1 minute is 30 cent)
    double cost_of_call;
    cost_of_call = spendtime * 30/100; //(1minute is 30 cent)

    cout << "The cost of call is: $" << cost_of_call << endl;

    return 0;
}