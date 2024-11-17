#include<iostream>
using namespace std;

void swapAlt(int arr[] , int n){
    for ( int i = 0 ; i<n ; i+=2){
        if (i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
    
}


void printArray (int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){


    int arr[6] = {23 ,4, 6,2, 7,8};

    printArray(arr , 6);

    swapAlt(arr , 6);
    printArray(arr , 6);



    return 0;
}