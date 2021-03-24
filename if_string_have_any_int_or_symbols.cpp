#include <iostream>
#include <string>
using namespace std;

string integers_ = "0123456789";     // here you can edit the invalid characters
string symbols = "/*-+=([]){}~#";    // also

bool enterstrToTstr(string str) {
    bool er;
    string invalid = integers_ + symbols;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < invalid.size(); j++)
        {
            if (str[i] == invalid[j] )
            {
                er = false;
                return er = false;
            } else { er = true; }
        } 
    }
    return er;
}

int main() {
    cout << "input : ";
    string str;
    cin >> str;
    cout << boolalpha << enterstrToTstr(str);
}

// if your input is just chain of alphabets it will print TRUE
// exaple = input : badr | output : true 
// if your input contain a integer or symbole it will print FALSE
// example = input : badr2 | output : false
//           input : #badr | output : false
