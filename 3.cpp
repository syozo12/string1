#include<iostream>
using namespace std;
int ispalindrome(string a){
    cout<<a;
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]!=a[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main(){
    string s;
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"it is a palindrome";
    }
    else cout<<"it is not a palindrome";
    return 0;

}