#include<iostream>

using namespace std;

int intersect(int arr1[], int arr2[], int size1, int size2){
    for(int i=0; i<size1; i++){
        int count=0;
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count!=0){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int arr1[]={1,2,3,4,8,2,5};
    int arr2[]={7,8,2,5,3,2};
    int size1=7;
    int size2=6;
    intersect(arr1, arr2, size1, size2);
    return 0;
}