#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "Enter" << endl;
    cin >> n;
    // upper triangle
    for (int i = 1; i <= n; i++)
    {
        for(int j = i ; j < n ; j++ ){
            cout << "  ";
        }
        for(int k = 1 ; k <= ((2*i)-1) ; k++){
            cout << "* ";
        }
        cout << endl;
    }
    // lower triangle
    for (int i = 1 ; i<n ; i++){
        for(int j = 0 ; j<i ; j++ ){
            cout << "  ";
        }
        for (int k = 0 ; k < ((2*(n-i))-1) ; k++){
            cout << "* ";
        }
        cout << endl;
    }
    
    


    return 0;
}