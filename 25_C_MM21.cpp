#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

long long f(long long a){
    if (a == 1) return 1;
    return a * f(a - 1);
}

int main(){
    long long a, b, c;
    while(cin >> a){
        cout << f(a) << endl;
    }
    return 0;
}