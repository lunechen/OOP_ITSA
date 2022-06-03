#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b){
        if (a > 100 || b > 100) cout << "outside" << endl;
        else cout << "inside" << endl;
    }
    return 0;
}