#include<bits/stdc++.h>
using namespace std;
//fibonacci serise 
int fun(int n,int i,int j){
      
    if(n==1){
        return 0;
    };
    cout<<  j << " " ;
    
    fun(n-1,j,i+j);
  
}

int main(){
    int n;
    int i=0,j=1;
    cout<<"enter number";
    cin>>n;
    cout<< i <<" ";
    fun(n,i,j);
    return 0;
}