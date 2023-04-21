#include <bits/stdc++.h>
using namespace std;
int n,a[100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Input a number from 9 to 16
    printf("Nhap so tu nhien=");
    cin >> n;
    bool condition = false;
    while (condition == false){
        if (n < 9 || n > 16){
            printf("Ban da nhap sai. Nhap lai so tu nhien n= ");
            cin >> n;
        }
        condition = true;
    }

    // Generate a list of numbers from 15 to 45
    printf("Day so tu nhien dc phat sinh:");
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() %  30 + 15;
        cout << a[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 10 == 3){
            count++;
        }
    }
    
    printf("So luong cac phan tu co hang don vi bang 3 la: ");
    cout << endl;
    cout << count;
    
    cout << endl;
    char string[1000];
    printf("Nhap xau S= ");
    gets(string);
    cout <<  strupr(string);
}