#include<iostream>
#include<climits>

using namespace std;
int main(){
    int array[]={5,33,6,-80,9,-15};
    int small = INT_MAX;
    int large= INT_MIN;
    for(int i=0; i<=5; i++){
        if(array[i]<small){
            // small=array[i];
            small= min(array[i],small);
            large= max(array[i], large);
        }
        // if(array[i]>large){
        //     large=array[i];
        // }
    }
    cout << "smallest number in the array is: "<<small<<endl;
    cout << "largest number in the array is: "<<large<<endl;
}