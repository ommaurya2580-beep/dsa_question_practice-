#include<bits\stdc++.h>
using namespace std;

int main (){
    int i,j,n;
    cout<<"enter the number of element in array";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>> arr[i];
    }
    
    
    for( i=0; i<n-1; i++ ){
        
        for ( j=i+1; j<n; j++ ){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        
     }
    }
    cout<<" after sorting ";
    for(i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}