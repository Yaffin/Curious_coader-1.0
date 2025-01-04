#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    int c;
    if(n1>n2){
        c=n1;
    }
    else{
        c=n2;
    }
    int arr[c];
    for(int i=0;i<=c;i++){
        arr[i]=1;
    }
    
    for(int i=2;i<=sqrt(c);i++){
        if(arr[i]==1){
            for(int j=(2*i);j<=c;j=j+i){
                arr[j]=0;
            }
        }
    }
    
    cout<<"The prime numbers are: ";
    int sum=0;
    for(int i=n1;i<=n2;i++){
        if(arr[i]==1){
            sum=sum+i;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"The sum of prime numbers is: "<<sum;
}