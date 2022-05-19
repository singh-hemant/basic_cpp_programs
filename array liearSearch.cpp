#include<iostream>
#include<cmath>
#include<string>
using namespace std;



int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    // ------------------------
    // O(n) time complexity
    for (int i=0;i<n;i++){
        if (arr[i]==key){
            cout<<i;
        }
    }

    // -------------------------
    
    return 0;
}
