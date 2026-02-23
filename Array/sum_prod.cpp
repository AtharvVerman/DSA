#include<iostream>

using namespace std;

int add(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int mul(int arr[], int size){
    int product=1;
    for(int i=0; i<size; i++){
        product*= arr[i];
    }
    return product;
}

int main(){
    int a[]={1,2,3,4,5};
    int b=5;
    int sum= add(a,b);
    int prod= mul(a,b);
    cout << "Sum of the numbers: "<<sum<<endl;
    cout << "Product of the numbers: "<<prod<<endl;
    return 0;
}