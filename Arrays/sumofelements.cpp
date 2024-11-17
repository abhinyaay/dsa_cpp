#include<iostream>
using namespace std;

int sumOfArray (int arr[] , int n ){
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}


int main(){


    int arr[4] = {1 , 2, 3, 4};

    int ans= sumOfArray (arr , 4);


    cout << ans;


    return 0;
}