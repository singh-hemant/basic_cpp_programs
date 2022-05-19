#include<iostream>
#include<cmath>
#include<string>
using namespace std;


void selectionSort(int arr[], int n){
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if (arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // O(n^2) time complexity
    selectionSort(arr, n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
