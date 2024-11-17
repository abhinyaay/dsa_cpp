#include<iostream>
using namespace std;

int setBits (int n ){
    int count = 0;

    while (n!=0){
        if (n&1)   
        {
            count++;
        }else{
            n =n>>1;
        }
        
    }
    return count;
}


int main(){


    int a = 2;
    int b = 3;

    int setbits_a = setBits(a);
    int setbits_b = setBits(b);

    int bits = setbits_a + setbits_b;
    cout << bits;


    return 0;
}