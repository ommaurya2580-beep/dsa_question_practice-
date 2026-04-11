#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of element in array";
    cin>>n;
    int arr [n];
    cout<<"enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
      map<int , int> mpp;
      for(int i=0;i<n;i++){
        mpp[arr[i]]++;
      }
    for(auto it : mpp) {
    cout << it.first << "->" << it.second << endl;
}
}