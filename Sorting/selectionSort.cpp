#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for ( int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size){

    for(int i = 0 ; i < size ; i++){
        int minIndex = i;
        for (int j = i+1 ; j<size ; j++){
            if ( arr[minIndex] > arr[j] ){
                minIndex = j;
            }
        }
        swap ( arr[minIndex], arr[i]);
    }
    printArray(arr, size);
}


int main(){


    int arr[5] = {5, 3, 63, 36, 324};

    printArray(arr, 5);

    cout << endl;

    selectionSort(arr , 5);
    

    return 0;
}