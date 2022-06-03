#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s, s2;
        cin >> s >> s2;
        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());
        if (s == s2) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}