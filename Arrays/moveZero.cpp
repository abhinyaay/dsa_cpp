#include<iostream>
using namespace std;

void moveZero(int arr[], int size){
    int i = 0;
    for (int j=0 ; j<size ; j++){
        if (arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main(){

    return 0;
}