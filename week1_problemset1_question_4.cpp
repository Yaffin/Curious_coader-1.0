#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter the size of the shirt:";
    cin>>s;
    switch(s){
        case 29:
        cout<<"small";
        break;
        case 30:
        cout<<"Medium";
        break;
        case 38:
        cout<<"large";
        break;
        case 42:
        cout<<"XLarge";
        break;
        default:
        cout<<"invalid size";
        break;
    }
    return 0;
}