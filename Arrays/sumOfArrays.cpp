#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;

    while (s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> arraySum(vector<int>&a , int n , vector<int>&b , int m){
    int i = n - 1; //start by point to the last element and addind them 
    int j = m - 1; //start by point to the last element and addind them 
    vector<int> tempans;
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 =a[i];
        int val2 =b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        tempans.push_back(sum);
        i--;
        j--;
    }
    // another case in which the elements in first array is greater than the element in second array
    while (i>=0)
    {
        int sum = b[j]  + carry;
        carry = sum/10;
        sum = sum%10;
        tempans.push_back(sum);
        i--;
    }
    
    // another case in which the elements in second array is greater than the element in first array
    while (j>=0)
    {
        int sum = b[j]  + carry;
        carry = sum/10;
        sum = sum%10;
        tempans.push_back(sum);
        j--;
    }

    // last case in which after adding the carry is remaining
    while (carry!=0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        tempans.push_back(sum);
        j--;
    }
    return reverse(tempans);
}

int main(){


    


    return 0;
}