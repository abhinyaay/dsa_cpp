#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {

    int i = 0, j = 0;
    while( i<n && j<m){
        if (arr1[i] < arr2[j]){
            
        }
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};

    merge(arr1, 6, arr2, 3);

    print(arr1, 6);


    return 0;
}