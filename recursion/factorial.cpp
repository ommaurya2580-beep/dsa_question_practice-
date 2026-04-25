#include<bits/stdc++.h>
using namespace std;
   
int  fact(int n){
    int sum=0;
    if(n==1){
     return 1;
    };
    sum=(n*fact(n-1));   //recursion 
    return sum;

};
// main function
int main(){
    int n ;
    cout<< "enter number ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
// factorial in cpp
