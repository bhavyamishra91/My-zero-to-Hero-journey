#include <iostream>
using namespace std;
int main(){

    string name;
    int age;

    cout << "Enter your name:";
    cin >> name;
    
    cout << "Enter your age";
    cin >> age;
    cout << "Hello " << name << endl;
    cout << "You will be " << age+5 << " years old in next 5 years";


    return 0; 
}