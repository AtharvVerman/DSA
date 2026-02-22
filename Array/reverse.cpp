#include<iostream>
#include<climits>

using namespace std;
void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        // int temp= arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=7;
    cout<<"Before reversing"<<endl;  //prints array before reversing
    for(int i=0; i<size; i++){
        cout<< array[i]<<""<<" ";
    }


    reverse(array, size);   //reverse function is called to reverse the array


    cout<< "\nArray after reversing"<<endl;   //prints array after reversing
    for(int i=0; i<size; i++){
        cout<< array[i]<<""<< " ";
    }
}