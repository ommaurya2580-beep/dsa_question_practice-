#include<bits\stdc++.h>
using namespace std;

int rev(string &a,int i,int j){
    if(i>=j){
        return true; 
    };
    if(a[i]==a[j]){
    swap(a[i],a[j]);

      rev(a,i+1,j-1);
    }
    else return false;
}

int main(){
    string a = "omomomom";
    string b=a;
    int i=0,j=a.size()-1;
    
   cout<< rev(a,i,j);
    
    return 0;
}