#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        string s1 = s;
        reverse(s.begin(), s.end());
        if (s == s1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}