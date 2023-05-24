#include<bits/stdc++.h>
using namespace std;

void print_arr(int a[], int n){
    for (int i=0; i<n; i++){
        cout<<a[i];
    }
    cout<<"\n";
}


void sol(int n){
    int a[n + 1];
    for (int i = 0; i<n; i++){
        a[i] = 0;
        cout<<a[i];
    }
    cout<<"\n";
    for (int i = 0; i<(1 << n) - 1; i++){
        for (int j = n - 1; j >= 0; j--){
            if (a[j] == 0) {
                a[j] = 1;
                break;
            }
            a[j] = 0;
        }
        print_arr(a, n);
    }
}


int main(){
    int n;
    cin>>n;
    sol(n);
}

/*
    inp: 3
    000
    001
    010
    011
    ...
    111
*/