#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<< " enter the number : " << endl;
    cin>> n;

    int i = 1;
    while(i<=n){
        int j =1 ;
        while(j<=i){
            cout << j << " ";
            j++ ;
        }
        cout<<endl;
        i++;
    }
    return 0;
}