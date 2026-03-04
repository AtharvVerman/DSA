#include<iostream>

using namespace std;

int main(){

    int array[]={1,2,3,4,5};
    int n=5;
    cout<<"Sub-array:"<<endl;
    for(int str=0; str<n; str++){
        for(int end=str; end<n; end++){
            for(int i=str; i<=end; i++){
                cout<< array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<< "Number of sub-arrays: "<<(n*(n+1))/2;
    return 0;
}