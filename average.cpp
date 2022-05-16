#include <iostream>
using namespace std;

int main(){
    float sum=0;
    float avg;
    for(int i=1;i<=10;i++){
            sum+=i;
    }
     avg  = sum/10;
    cout<<endl<<"the sum of numbers between 1 & 10"<<" "<<avg;
}
