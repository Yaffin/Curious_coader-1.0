#include<iostream>
using namespace std;

int main(){
    int i=1,n,t;
    cout<<"Enter the number:";
    cin>>n;
    
    if(1000%n==0){
        while(t<1000){
        t=n*i;
        i++;
        cout<<t<<endl;
        }
    }else{
        cout<<"not a multiple of 1000"<<endl;
    }
    
    
    
    return 0;
    
}