#include <iostream>
#include <vector>
using namespace std;

#define cube(a) ((a)*(a)*(a))

int main(){
    int a;
    long long int sum = 0;
    
    while(cin >> a){
        sum += cube(a);
    }
    cout << sum << endl;

    return 0;
}