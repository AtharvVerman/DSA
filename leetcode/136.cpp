// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.


#include<iostream>
#include<vector>

using namespace std;

int singlenumber(vector<int>& nums){
    int ans=0;
    for(int val: nums){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int> vec={1,2,3,2,1};

    int single= singlenumber(vec);
    cout<< "Single value in the given vector: "<<single<<endl;
    return 0;
}