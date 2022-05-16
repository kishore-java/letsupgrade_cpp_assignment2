#include <iostream>
using namespace std;

int main(){
    float classes,attended;
    float p;

    cout<<endl<<"Enter total classes:";
    cin>>classes;
    cout<<endl<<"Enter attended classes:";
    cin>>attended;

    p=(attended/classes)*100;
    cout<<endl<<" total percentage:"<<p;
    
    if(p<75){
        cout<<endl<<"not allowed to sit in exam";
    
    }else {
        cout<<endl<<"allowed to sit";
    }



}