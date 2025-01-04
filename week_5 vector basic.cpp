#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main(){
    
    vector<int> v1;
    vector<int> v2(10,3);
    v2.push_back(23);
    v2.push_back(44);
    vector<int> v3(v2);
    
    int nv1;
    cout<<"Enter the number of values to be pushed into vector v1: ";
    cin>>nv1;
    
    for(int i=1;i<=nv1;i++){
        int iv1;
        cout<<"Enter the "<<i<<"th value to be pushed into vector v1: ";
        cin>>iv1;
        v1.push_back(iv1);
    }
    
    cout<<"The size of vector v1 is: "<<v1.size()<<endl;
    cout<<"The size of vector v2 is: "<<v2.size()<<endl;
    cout<<"The size of vector v3 is: "<<v3.size()<<endl;
    
    cout<<"The capacity of vector v1 is: "<<v1.capacity()<<endl;
    cout<<"The capacity of vector v2 is: "<<v2.capacity()<<endl;
    cout<<"The caoacity of vector v3 is: "<<v3.capacity()<<endl;
    
    cout<<"First element of v3 is: "<<v3.front()<<" Last element of v3 is: "<<v3.back()<<endl;
    
    
    for(int i=0;i<v3.size();i++){
        cout<<"The elements of vector v3 is: "<<v3[i]<< " ";
    }
    
    cout<<endl;
    
    vector<int>::iterator start=v3.begin();
    vector<int>::iterator end=v3.end();
    
    for(vector<int>::iterator i=start;start!=end;i++){
        cout<<"The elements of vector v3 is: "<<*i<<" ";
    }
    
    cout<<endl;
    
    vector<int>::iterator start1=v1.begin();
    vector<int>::iterator end1=v1.end();
    
    for(auto i:v1){
        cout<<"The elements of vector v1 is: "<<i<<" ";
    }
    cout<<endl;
    
    return 0;
    
    
    
    
    
}