#include <iostream>
#include <ctime>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

void delayedpriniting(string sentence) {
    for (int i = 0; i < sentence.length(); i++) {
        cout << sentence[i] << flush;
        this_thread::sleep_for(100ms);              // here to change speed between printing charachters by changing 100ms to what you want but dont forgot ms (int+"ms")
    }
};

int main() {
    string input;
    getline(cin, input);
    delayedpriniting(input);
    return 0;
}
