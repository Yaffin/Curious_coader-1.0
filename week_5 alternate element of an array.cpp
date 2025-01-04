#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements to inserted: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" th element: ";
        cin>>arr[i];
    }
    
    cout<<"The elements in alternate order is: ";
    
    for(int i=0;i<n;i=i+2){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}