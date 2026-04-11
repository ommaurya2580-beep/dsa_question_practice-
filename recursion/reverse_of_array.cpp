#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int i, int j){
    if(i >= j) return;

    swap(arr[i], arr[j]);

    fun(arr, i+1, j-1);
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    fun(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}