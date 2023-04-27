#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
      int n;
    cout<<"Enter the number "<< endl;
    cin >> n;

    int row = 1 ;
    while(row <= n){
        int col = 1 ;
        while(col <= n) {
            cout<< n-col+1  << " ";
            col ++;
        }
        cout << endl;
        row++;
    }
       return 0;
}