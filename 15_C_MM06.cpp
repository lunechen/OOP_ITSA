#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    double a, b, c;
    while(cin >> a){
        int b;
        b = a * 1.6 *10;
        if (b % 10 >= 5)b += 10;
        a = b / 10.0;
        cout << fixed << setprecision(1) <<  a << endl;
    }
    return 0;
}