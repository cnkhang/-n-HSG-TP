#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n;
    int a[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        a[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    
}