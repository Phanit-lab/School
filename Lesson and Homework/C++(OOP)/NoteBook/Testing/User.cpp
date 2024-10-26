#include <iostream>
using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
Rectangle (double len,double wid): length(len), width(wid){}
  double calculateArea() { return length * width / 2; }
  double calculatePerimeter() { return (length + width) * 2; }
  void showResult(double result, string text){
    cout<<text<<": "<<result<<endl;
  }
 
};
class Person
{
private:
  string name;
  int age;
  string country;
public:
  void setName(const string& p_Name){
    name = p_Name;
  }
  void setAge(const int& p_Age){
    age = p_Age;
  }
  void setCountry(const string& p_Country){
    country = p_Country;
  }
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  string getCountry(){
    return country;
  }
  template<typename T>
  void showPerson(T value, string text){
    cout<<text<<value<<endl;
  }
};
class BankAccount { // Define a class named BankAccount
  private: 
    string accountNumber; // Private member variable to store the account number
    double balance; // Private member variable to store the balance

  public:
    // Constructor to initialize BankAccount object with provided values
    BankAccount(const string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
      balance += amount; // Add the deposited amount to the current balance
      cout << "Deposit successful. Current balance: " << balance << endl; // Output success message and current balance
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
      if (amount <= balance) { // Check if the withdrawal amount is less than or equal to the current balance
        balance -= amount; // Deduct the withdrawn amount from the current balance
        cout << "Withdrawal successful. Current balance: " << balance << endl; // Output success message and current balance
      } else {
        cout << "Insufficient balance. Cannot withdraw." << endl; // Output error message for insufficient balance
      }
    }
};





int main() {
  double length,width, area, perimeter;
  string sacno = "SB-123";
   double Opening_balance, deposit_amt, withdrawal_amt;
   Opening_balance = 1000;

  cout << "Enter the length: ";
  cin >> length;
  cout << "Enter the width: ";
  cin >> width;
  Rectangle rectangle(length,width);
  area = rectangle.calculateArea();
  perimeter = rectangle.calculatePerimeter();
  rectangle.showResult(area,"The area is");
  rectangle.showResult(perimeter,"The perimeter is ");

  Person person;

  person.setName("Phanit");
  person.setAge(23);
  person.setCountry("Cambodia");
  person.showPerson(person.getName(),"Name: ");
  person.showPerson(person.getCountry(),"Country: ");
  person.showPerson(person.getAge(),"Age: ");

   BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  // Deposit money into the account
  deposit_amt = 1500; // Define the deposit amount
  std::cout << "Deposit Amount: " << deposit_amt << std::endl; // Output the deposit amount
  account.deposit(deposit_amt); // Call the deposit method of the account object

  // Withdraw money from the account
  withdrawal_amt = 750; // Define the withdrawal amount
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  // Attempt to withdraw more money than the balance
  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  return 0;
}