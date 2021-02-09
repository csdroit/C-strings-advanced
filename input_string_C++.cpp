#include<iostream>
#include<string> // for basics usings you can dont use the #string# library
using namespace std;

int main() {
    string myString; //defining a variable string with myString
    cout << "Enter a string : "; 
    getline(cin, myString); // input a line 
    cout << myString << endl; // print the myString variable
    return 0;
}
