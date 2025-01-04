#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element of the array: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"the elements of the array are: ";
        cout<<arr[i]<<endl;
    }
    
    return 0;
}