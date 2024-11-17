#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n;
        while(j>=i){
            cout << n-j+1;
            j--;
        }
         j=n;
         int space =1;
         while(space<=2*i-2){
            cout << "*";
            space++;

        }

        while (j>=i)
        {
            cout<<j-i+1;
            j--;
        }
        cout<<endl;
        i++;
        
    }
    

}