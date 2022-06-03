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
        for (int i = 1; i <= a; i++){
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
    return 0;
}