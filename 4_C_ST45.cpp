#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;

    while(n--){
        cin >> s;
        reverse(s.begin(), s.end());
        s[0] = s[0] - 'a' + 'A';
        s[s.length() - 1] = s[s.length() - 1] - 'A' + 'a';
        cout << s << endl;
    }
    return 0;
}