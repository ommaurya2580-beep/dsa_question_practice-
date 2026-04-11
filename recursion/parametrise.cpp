#include<bits/stdc++.h>
using namespace std;
//sum of n number by parametrised methord 
void rec(int n, int sum);
int main(){
    int n,sum=0;
cout << "enter number";
cin>>n;
rec(n, sum);
return 0;
}

void rec(int n, int sum){
    if (n<=0)
   { cout<<sum;
    return;
   }
    rec(n - 1, sum + n);
    
};