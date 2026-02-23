#include<iostream>

using namespace std;
void unique(int array[], int size){
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count==1){
            cout<<array[i]<<" ";
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,4,32,1};
    int size=8;
    unique(arr,size);
    return 0;
}