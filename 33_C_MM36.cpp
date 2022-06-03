#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    long long a, b, c;
    while(cin >> a){
        if (a > 2 && a < 6) cout << "Spring" << endl;
        else if (a > 5 && a < 9) cout << "Summer" << endl;
        else if (a > 8 && a < 12) cout << "Autumn" << endl;
        else cout << "Winter" << endl;
    }
    return 0;
}