#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;

    for (int i = 2; i <n ; i++){
        int nxt = a + b;
        a = b;
        b = nxt;
    }
        return b;   
}



int main(){


    int n ;
    cin >> n;

    cout << "N th term is " <<fib(n);


    return 0;
}