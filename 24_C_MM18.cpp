#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a){
        for (int i = 7; i >= 0; i--){
            cout << (a & (1 << i) ? 1 : 0);
        }
        cout << endl;
    }
    return 0;
}