#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b){
        if (pow(a, 2) + pow(b, 2) > 40000) cout << "outside" << endl;
        else cout << "inside" << endl;
    }
    return 0;
}