#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(i+j >= n && (i+j) < 2*n){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        
        cout<<endl;
    }
    
    
    return 0;
}