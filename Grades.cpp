#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<endl<<"enter marks:";
    cin>>marks;
    if(marks<25){
        cout<<endl<<"Grade F";
    }else if(marks<=25 || marks<45){
        cout<<endl<<"Grade E";
    }else if(marks<=45 || marks<50){
        cout<<endl<<"Grade D";
    }else if(marks<=50 || marks<60){
        cout<<endl<<"Grade C";
    }else if(marks<=60 || marks<80){
        cout<<endl<<"Grade B";
    }else if(marks>=80){
        cout<<endl<<"Grade A";
    }
}