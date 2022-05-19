#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)>=(n-1)){

                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int k=0;k<i;k++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if((i+j)>=(n-1)){

                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int k=0;k<i;k++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
