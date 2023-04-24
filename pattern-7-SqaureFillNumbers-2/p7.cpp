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
            cout<< col << " ";
            col ++ ;
        }
        cout << endl;
        row++;
    }
       return 0;
}