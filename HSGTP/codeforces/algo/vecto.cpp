#include <bits/stdc++.h>
using namespace std;
/* Cac ham su dung voi vecto
    push_back(); Day 1 phan tu vao vecto
    size(); Kich thuoc cua vecto
    v.back(); In ra phan tu cuoi cung cua vecto

*/
int main(){
    int n,x;
    //cin >> n;
    //vector <int> v;
    // v.push_back(10);
    // v.push_back(20);
    // cout << v.size() << "\n";
    // cout << v[0] << "\n";
    // cout << v[v.size()-1] << "\n";
    // Or
    // cout << v.back() << "\n";
    // Duyet vecto
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }
    // hoac duyet bang for each
    // for (int x : v){
    //     cout << x;
    // }
    // for (int i = 0; i < n; i++){
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i];
    // }
    string s = "Ngon ngu lap trinh C++";
    stringstream ss(s);
    string tmp;
    vector <string> v1;
    while (ss >> tmp){
        v1.push_back(tmp);
    }
    for (string x : v1){
        cout << x << "\n";
    }
}