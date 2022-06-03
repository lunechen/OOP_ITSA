#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a){
        cout << "NT10=" << a / 10 << endl;
        cout << "NT5=" << (a % 10) / 5 << endl;
        cout << "NT1=" << a % 5   << endl;
    }
    return 0;
}