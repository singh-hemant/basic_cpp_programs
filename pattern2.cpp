#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || i==n || j==0 || j==n || j==n/2 || i==n/2){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }cout<<endl;
    }
    return 0;
}