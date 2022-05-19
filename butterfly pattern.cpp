#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=2*n;j++){
            if( i==n || j==0 || j==2*n || j<=i || (j>=n && j>=(2*n-i)) || (i>=n && j<=2*n-i)){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }cout<<endl;
    }
    
    for(int i=n;i>=0;i--){
        for(int j=0;j<=2*n;j++){
            if( i==n || j==0 || j==2*n || j<=i || (j>=n && j>=(2*n-i)) || (i>=n && j<=2*n-i)){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }cout<<endl;
    }
    return 0;
}