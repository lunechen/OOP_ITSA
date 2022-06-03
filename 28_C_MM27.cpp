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
    while(cin >> a >> b){
        c = 0;
        for (int i = min(a, b); i <= max(a, b); i++){
            c += i;
        }
        cout << c << endl;
    }
    return 0;
}