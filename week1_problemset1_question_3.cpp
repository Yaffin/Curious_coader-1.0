#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the mark of the student:";
    cin>>a;
    
    if(a>=90){
        cout<<"Grade A";
    }else if(a>=80 && a<90){
        cout<<"Grade B";
    }else if(a>=60 && a<80){
        cout<<"Grade C";
    }else if(a>=35 && a<60){
        cout<<"Grade D";
    }else{
        cout<<"FAIL";
    }
    
    return 0;
}