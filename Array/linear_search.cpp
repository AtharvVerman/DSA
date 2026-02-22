#include<iostream>
#include<climits>

using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;   //returns the index of the taget in the array
        }
    }
    return -1; //returns -1 if target not found
}
int main(){
    int arr[]={2,4,5,6,7,8};
    int target=7;
    int pos= linearSearch(arr,6,7);
    if(pos==-1){
        cout << "Target not found in the array"<<endl;       
    }else{
        cout << "Target "<<target <<", found at index "<<pos<<endl;
    }
    return 0;
}