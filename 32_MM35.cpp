#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    long long a, b, c;
    while(cin >> a){
        if (a % 400 == 0) cout << "Bissextile Year" << endl;
        else if (a % 100 == 0) cout << "Common Year" << endl;
        else if (a % 4 == 0) cout << "Bissextile Year" << endl;
        else cout << "Common Year" << endl;
    }
    return 0;
}