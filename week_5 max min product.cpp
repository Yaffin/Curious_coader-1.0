#include<iostream>
using namespace std;

int main(){
    
    int n,min,max;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" th element of the array: ";
        cin>>arr[i];
    }
    
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<"The maximum element of the array is: "<<max<<endl;
    cout<<"The minimum element of the array is: "<<min<<endl;
    cout<<"The max min product is: "<<max*min;
}