#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float n,k,ans = 0;
    float a[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[i] = k / 100;
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    cout << fixed << setprecision(4) << (ans / n) * 100 ; 
}