#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
void show(string str, int result)
{
    cout << str << result << endl;
}
int get_number(string str)
{
    int num;
    cout << str;
    cin >> num;
    return num;
}