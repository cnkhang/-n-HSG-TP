#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin >> n;
    if (n % 2 == 0){
        cout << (n / 2);
    } else {
        cout << (long long)(round(n/2) - n);
    }
}