#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a){
        long long i = 1;
        if (a > 31) cout << "Value of more than 31" << endl;
        else cout << (i << a) << endl;
    }
    return 0;
}