#include<bits\stdc++.h>
using namespace std;

int fun(int n){
    
   if(n<=1){
    return 1;
   };
   int lst=fun(n-1);
   int slst=fun(n-2);
   int sum=lst+slst;
   return sum;  
}

int main(){
    int n;
    cout<< "enter stairs";
    cin>>n;
    cout<<fun(n);
    return 0;
}



