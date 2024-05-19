#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string str, int i, int j){
    //Base Case
    if (i>j)
        return 0;

    if (str[i] == str[j])
    {
        i++;
        j--;
        isPalindrome(str, i,j);
    }else{
        return false;
    }
}

int main(){

    string str = "babbarabb";

    if (isPalindrome(str, 0, str.length()-1)){
        cout<<"String is palindrome."<<endl;
    }else{
        cout<<"String is not palindrome."<<endl;
    }
    

}