#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The prime factors are: ";
    for(int x=2;x<=n;x++){
        int flag=0;
        for(int i=2;i<x;i++){
            if(x%i==0){
                flag=1;
            }
            
        }
        if(flag==0){
            cout<<x<<" ";
        }
        
        
        
    }
    return 0;
    
}