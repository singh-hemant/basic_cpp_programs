#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, s=1;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j <= i){
                cout<<" "<<s++<<" ";
            }else{
                cout<<"   ";
            }
        }cout<<endl;
    }
    return 0;
}