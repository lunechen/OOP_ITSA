#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

long long f(long long a){
    if (a == 1) return 1;
    return a * f(a - 1);
}

int main(){
    long long a, b, c;
    while(cin >> a){
        int flag = 0;
        for (int i = 1; i <= a; i++){
            if (a % i == 0){
                if (flag) cout << " ";
                cout << i;
                flag = 1;
            }
        }
        cout << endl;
    }
    return 0;
}