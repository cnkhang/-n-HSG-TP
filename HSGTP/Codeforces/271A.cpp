#include <bits/stdc++.h>
using namespace std;
int checkDistinct(int n){
    int ans,tmp;
    bool check = true;
    for (int i = n; i < 9001; i++)
    {
        int a[10];
        ans = i;
        while (i > 0)
        {
            tmp = i % 10;
            a[tmp]++;
            i /= 10;
        }
        for (int i = 0; i <=9; i++){
            if (a[i] > 2){
                break;
            } 
        }
    }
    return 0;
}
int main(){
    int n,ans;
    cin >> n;
    ans = checkDistinct(n);
    cout << ans; 
}