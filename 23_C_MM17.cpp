#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a, b, c;
    while(cin >> a >> b){
        cout << gcd(a, b) << endl;
    }
    return 0;
}