#include<iostream>
using namespace std;

int main(){
    int a,b,c,sum;
    cout<<"Enter the three angles of the triangle:";
    cin>>a>>b>>c;
    sum=a+b+c;
    
    if(sum==180){
        cout<<"triangle is formed"<<endl;
    }else{
        cout<<"triangle is not formed"<<endl;
    }
    
    return 0;
}