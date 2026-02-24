#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> vac={1,2,3,4,5};
    vector<char> ch={'a', 'b', 'c', 'd'};

    for(int val: vac){
        cout<<val<<endl;
    }

    cout<<"Size before: "<<vac.size()<<endl;
    cout<<"Capacity before: "<<vac.capacity();
    
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    vac.push_back(6);
    
    for(int val: vac){
        cout<<val<<endl;
    }
    
    cout<<"Size after: "<<vac.size()<<endl;
    cout<<"Capacity after: "<<vac.capacity();
    
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    for(char val: ch){
        cout<<val<<endl;
    }
    cout<<"Size before: "<<ch.size()<<endl;
    cout<<"Capacity before: "<<ch.capacity()<<endl;
    
    ch.push_back('a');
    
    for(char val: ch){
        cout<<val<<endl;
    }
    cout<<"Size after: "<<ch.size()<<endl;
    cout<<"Capacity after: "<<ch.capacity();
    
    return 0;
}