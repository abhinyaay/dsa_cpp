#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>& nums, int torotate){
    vector<int> temp(nums.size());

    for (int i = 0; i<nums.size() ; i++){
        temp[(i+torotate)%nums.size()] = nums[i];
    }
    // copying temp into num vector
    nums = temp;
}

int main(){


    


    return 0;
}