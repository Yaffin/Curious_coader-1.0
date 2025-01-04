#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the Size of the array: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element of the array: ";
        cin>>arr[i];
    }
    
    int smallest=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    
    cout<<"The smallest element of the array is: "<<smallest;
    
    return 0;
}