#include<iostream>
#include<string>
using namespace std;

int main() {
    string str; // defining a string : str
    int size; // defining a integer : size
    cin >> str; // input first word from line
    size = str.size(); // using the size function in the string module to return the size of string str ;
    cout << size; // printing the size of str
    return 0;
}
