//
//  main.cpp
// 
//  PTSD16SAT
//
//  Created by Tannhuot Khouv on 19/10/24.
//

#include <iostream>
using namespace std;

enum Gender { male, female };

class Person {
public:
    string name;
    int age;
    Gender gender;
    //constructor 
    Person(string name, int age, Gender gender) {
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
        cout << "Constructor called...\n";
    }
    Person(string p_name,int p_age, Gender p_gender):name(p_name),age(p_age),gender(p_gender){
        
    }
    Person(string p_name) {
        name = p_name;
    }
    
    Person() {}
    
    //Copy Constructor using Delegate Constructor
    Person(const Person& person) : Person(person.name, person.age, person.gender) {
        cout << "Copy Constructor called...\n";
    }
    
    ~Person() {
        cout << "Deconstructor called...\n";
    }
    
    void showInfo() {
        cout << "Name: " << name
            << "\nAge: " << age
        << "\nGender: " << gender << endl;
    }
};

int main() {
    
    Person p1("Dara", 18, male);
//    p1.name = "Dara";
//    p1.age = 18;
//    p1.gender = male;
    
    p1.showInfo();
    
    Person p2;
    

    cout << endl;
    Person p3(p1);
    p3.showInfo();
    
    cin.get();
    
    return 0;
}
