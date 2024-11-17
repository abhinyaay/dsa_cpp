#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for ( int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i-1;
        for ( ; j >= 0 ; j--){
            if (arr[j] > temp){
                // Shift 
                arr[j+1] = arr[j];
            }
            else{
                // rukna ha 
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){


    


    return 0;
}