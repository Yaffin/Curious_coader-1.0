#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    
    while(n>0){
        int ld=n%10;
        sum=sum*10+ld;
        n=n/10;
    }
    cout<<"The reversed number is: "<<sum;
    
    return 0;
}