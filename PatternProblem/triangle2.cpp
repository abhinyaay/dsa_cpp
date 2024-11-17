#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "Enter" << endl;
    cin >> n;
    for (int i = 1 ; i<=n ; i++){
        for(int j = 0 ; j < n-i ; j++ ){
            cout << "  ";
            
        }
        for(int k = 1 ; k <= i ; k++){
            if(k==1){
                cout << "* ";

            }
        }
        cout << endl;
    }
    


    return 0;
}