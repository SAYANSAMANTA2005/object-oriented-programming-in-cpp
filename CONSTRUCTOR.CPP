//
// Created by sayan on 26-10-2025.
#include <bits/stdc++.h>
using namespace std;

class student {
public: // Access specifier
    // Attributes (Data members)
    string name;
    int roll;
    float gpa;
    //constructor--> same name as class name
    student(string name,int roll,float gpa) {
        // consructor simplifies declaration of object
        this->name=name;
        this->roll=roll;
        this->gpa=gpa;
    }

};

int main() {
    // Create an object of the Car class
    student s1("sayan",287,2380.276);

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.gpa<<endl;
    return 0;
}
