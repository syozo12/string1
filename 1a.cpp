#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enetr  string";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            s[i]='#';
        }
    }
    cout<<s;
}
