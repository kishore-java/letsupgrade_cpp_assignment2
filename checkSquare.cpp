#include <iostream>
using namespace std;

int main(){
    int length,width;
    cout<<endl<<"enter length:";
    cin>>length;
     cout<<endl<<"enter width:";
    cin>>width;

    if( length == width){
        cout<<endl<<"It is square";
    }else {
        cout<<endl<<"Not a square";
    }
}