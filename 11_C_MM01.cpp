#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    double a, b, c;
    while(cin >> a >> b >> c)
        cout << fixed << setprecision(1) << "Trapezoid area:" << (a + b) * c / 2 << endl;
    return 0;
}