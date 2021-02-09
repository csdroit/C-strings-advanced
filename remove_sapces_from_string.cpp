#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
} 

int main() {
    string input, output;
    getline(cin, myTexto);
    output = removeSpaces(myTexto);
    cout << output;
    return 0;
}
