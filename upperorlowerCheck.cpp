#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<endl<<"emter the character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<endl<<"it is a lowercase.";
    }else if(ch>='A'&& ch<='Z'){
        cout<<endl<<"It is a uppercase";
    }
}