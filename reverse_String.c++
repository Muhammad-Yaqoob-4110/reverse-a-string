#include <iostream>
using namespace std;
int main() {
    string str = "Enter a string which you want to reverse:";
    cout << str; 
    getline (cin,str);

    for(int i = str.length(); i>=0; i--)
    {
        cout << str[i];
    }
    return 0;
}