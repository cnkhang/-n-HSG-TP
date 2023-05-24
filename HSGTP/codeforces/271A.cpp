#include <bits/stdc++.h>
using namespace std;
int checkDistinct(int n){
    int ans,tmp,tmp2;
    bool check = true;
    for (int j = n+1; j < 50000; j++)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            a[i] = 0;
        }
        
        ans = j;
        tmp2 = j;
        while (tmp2 > 0)
        {
            tmp = tmp2 % 10;
            a[tmp]++;   
            tmp2 /= 10;
        }
        check = true;
        for (int i = 0; i <=9; i++){
            if (a[i] >= 2){
                check = false;
                break;
            } 
        }
        if (check == true){
            return ans;
        } else {
            continue;
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