#include <iostream>
using namespace std;

// here bool swap is used for checking if the array is already sorted or not
void bubbleSort(int arr[], int size){
    for (int i = 1 ; i < size ; i++){
        bool swapped = false;
        for (int j = 0 ; j < size - i ; j++){
            if ( arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
                // if swapped becomes true  this means array is not sortde.
            }
        }
        // if swapped is still false this means the array is sorted and we have to exit the loop.
        if (swapped == false){
            // Already Sorted array
            break;
        }
    }
}

int main()
{

    return 0;
}