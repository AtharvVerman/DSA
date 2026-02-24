#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int size=4;


    for(int i=0; i<4; i++){
        int prod=1;
        for(int j=0; j<4; j++){
            if(i!=j){
                prod*=arr[j];
            }
        }
        cout<<prod<<" ";
    }

    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<endl;
    // }
    return 0;
}