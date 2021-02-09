# include <iostream>
# include<string>
# include<cstring>        // For memset function
using namespace std;


int main() {
    string input,output;        // defining two strings : input, output
    cin >> input;
    bool alphabets[26];  // Assuming your string contains charactes between a-z only.
    memset(alphabets,false,26);
    for(int i=0;i<input.size();i++)
    {
        if(alphabets[input.at(i)-'a']==false)    // If that character was marked false i.e if it was not present in original 
        {
            alphabets[input.at(i)-'a']=true;    // mark that character true
            output.push_back(input.at(i));           // Insert that character in string output
        }
    }
    cout<<"Original String: "<<input<<endl; 
    cout<<"String without duplicates: "<<output;
    return 0;
}
