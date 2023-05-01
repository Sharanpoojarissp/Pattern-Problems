#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<< " enter the number : " << endl;
    cin>> n;
    
    int row = 1;
    while( row <= n){
        int col = 1;
        while(col <= n){
           char ch = 'A' + col - 1;
            cout <<ch << " ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}