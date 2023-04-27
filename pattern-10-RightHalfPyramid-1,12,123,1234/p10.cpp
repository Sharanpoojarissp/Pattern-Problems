#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number "<< endl;
    cin >> n;
    // int count = 1;
    int row = 1;
    while(row <= n) {
        int col = 1;
        while(col <=row){
            cout<< col << " ";
            // count ++ ;
            col++ ;
        }
        cout<< endl;
        row++ ;
    }
    return 0;
}