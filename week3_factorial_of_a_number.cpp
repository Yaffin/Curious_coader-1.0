#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of the number is: "<<fact;
    
    return 0;
    
}