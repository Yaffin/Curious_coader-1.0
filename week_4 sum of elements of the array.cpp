#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    
    cout<<"Enter the Size of the array: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element of the array: ";
        cin>>arr[i];
    }
    
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    cout<<"The sum of elements of the array is: "<<sum;
    
    return 0;
}