#include<iostream>
using namespace std;

string name(string firstname,string lastname){
    string name;
    name=firstname+lastname;
    return name;
}
int main(){
    

    string firstname,lastname;
    int n;
    cout<<"Enter your firstname:";
    cin>>firstname;
    
    cout<<"Enter your lastname:";
    cin>>lastname;
    
    cout<<"Enter the value of n:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<name(firstname,lastname)<<endl;
    }
    
    return 0;
}