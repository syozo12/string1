#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int i=n/2;
    int j=n-1;
    while( i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s;
    
}