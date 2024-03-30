#include<iostream>
using namespace std;
     int isconsonant(char ch){
        if(ch<65) return 0;
        if(ch>90&&ch<97) return 0;
        if(ch>122) return 0;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 0;
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 0;
        return 1;
    }
    int main(){
    cout<<"enetr a";
    string a;
    getline(cin,a);
    cout<<a<<endl;
    int count =0;
    for(int i=0;i<a.size();i++){
        if(isconsonant(a[i])) count++;

    }
    cout<<"number of consonant is"<<count;
    return 0;
    
}