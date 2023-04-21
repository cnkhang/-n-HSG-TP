#include <bits/stdc++.h>
using namespace std;
int a[100];
string str;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '+'){
           a[count] = atoi(&str[i]);
           count++;
        }
    }

    sort(a, a+count);

    for (int i = 1; i < count-1; i++)
    {
        cout << a[i] << "+";
    }
    cout << a[count-1];
}