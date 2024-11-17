#include<iostream>
using namespace std;

bool validChar(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

char toLowerCase(char ch){
    if ( (ch >= 'a' && ch <= 'z') || (ch>='0' && ch <= '9') ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if (toLowerCase(a[s] != a[e])){
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}



int main(){


    


    return 0;
}