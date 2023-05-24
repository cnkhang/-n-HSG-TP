#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100];
    bool check = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1){
            cout << "HARD";
            check = false;
            break; 
        }
    }
    if (check == true){
        cout << "EASY";
    }
}