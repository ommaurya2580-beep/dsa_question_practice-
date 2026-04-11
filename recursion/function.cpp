#include<bits/stdc++.h>
using namespace std;

int fun(int n);
 int main(){
    int n;
    cout<<"enter nuber ";
    cin>>n;
    cout<<fun(n);
    return 0;
 }
 int fun(int n){
    int sum=0;
    if(n==0){
     return 0;
    };
    sum=(n+fun(n-1));
    return sum;
 }