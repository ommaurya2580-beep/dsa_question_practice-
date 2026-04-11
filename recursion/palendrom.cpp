#include<bits\stdc++.h>
using namespace std;

int rev(string &a,int i,int j){
    if(i>=j){
        return 0; 
    };

    swap(a[i],a[j]);

      rev(a,i+1,j-1);
  
}

int main(){
    string a = "omomomomo";
    string b=a;
    int i=0,j=a.size()-1;
    cout<<"before reverse" <<" " <<a;
    rev(a,i,j);
    cout<<"\nafter reverse" <<" " <<a;
    if(a==b){
        cout<<"\n palendrom number";
    }
    else  cout<<"\n not palentrom";
    return 0;
}