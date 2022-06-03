#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int a;
    string s;
    stack <int> st;

    while(getline(cin, s)){
        stringstream ss(s);
        while(ss >> a){
            st.push(a);
        }
        int flag = 0;
        while(!st.empty()){
            if (flag == 1) cout << " ";
            cout << st.top();
            st.pop();
            flag = 1;
        }
        cout << endl;
    }
    return 0;
}