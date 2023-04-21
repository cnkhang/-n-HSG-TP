#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    while (n > 1 && k > 0)
    {
        if (n % 10 == 0){
            n /= 10;
            k--;   
        } else {
            n -= 1;
            k--;
        }
    }
    cout << n;
}