#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    long long a, b, c;
    while(cin >> a >> b >> c){
        cout << (a + b + c - max(a, max(b, c)) > max(a, max(b, c)) ? "fit" : "unfit") << endl;
    }
    return 0;
}