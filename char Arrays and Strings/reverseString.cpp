#include<iostream>
using namespace std;

void reverse(char name[] , int size){
    int start = 0;
    int end = size - 1;

    while (start < end){
        swap(name[start++] ,name[end--] );
    }
}


int main(){


    


    return 0;
}