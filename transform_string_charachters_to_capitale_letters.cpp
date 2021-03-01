#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputS;
    cin >> inputS;
    for (int i = 0; i < inputS.size(); i++)
    {
        inputS[i] = toupper(inputS[i]);
    }
    cout << inputS;
    return 0;
}
