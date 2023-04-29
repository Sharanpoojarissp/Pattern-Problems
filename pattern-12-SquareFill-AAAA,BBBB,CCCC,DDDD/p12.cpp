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
           char ch = 'A' + row - 1;
            cout <<ch << " ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}