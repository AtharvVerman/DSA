#include<iostream>
#include<climits>
using namespace std;


void swap_fn(int arr[], int size){
    int max= INT_MIN;
    int min= INT_MAX;
    int largest_idx;
    int smallest_idx;
    // int j,k;
    // swap(INT_MAX, INT_MIN);
    for(int i= 0; i<size; i++){
        if(arr[i]<min){
            min =arr[i];
            smallest_idx= i;
        }
        
    }
    for(int i= 0; i<size; i++){
        if(arr[i]>max){
            max =arr[i];
            largest_idx= i;
        }
    }
    swap(arr[smallest_idx],arr[largest_idx]);
}
int main(){
    int array[]={1,2,3,4,5,6};
    int size=6;
    swap_fn(array, size);

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}