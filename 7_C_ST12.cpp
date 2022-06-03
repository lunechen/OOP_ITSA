#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    c = a;
    for (int i = 0; i < max(a, b) - min(a, b) + 1; i++){
        for (int j = 0; j < c; j++) cout << "*";
        cout << endl;
        c += c > b ? -1 : 1;
    }
    return 0;
}