#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        for (int i = 0; i < s.length(); i++){
            cout << s[i];
            if (i != s.length() - 1) cout << "   ";
        }
        cout << endl;
    }
    return 0;
}