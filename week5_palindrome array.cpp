#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    
    int arr1[n];
    int arr2[n];
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int j=0;
    for(int i=(n-1);i>=0;i--){
        arr2[j]=arr1[i];
        j=j+1;
        
    }
    int flag=-1;
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            flag=1;
        }
        else{
            flag=-1;
        }
    }
    
    if(flag==1){
        
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}