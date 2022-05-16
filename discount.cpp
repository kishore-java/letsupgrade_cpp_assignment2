#include <iostream>
using namespace std;

int main(){
    int quantity,cost;
    cout<<endl<<"enter quantity:";
    cin>>quantity;
    cost= quantity*100;
    if(cost>1000){
        cost=cost*0.9;
        cout<<endl<<"the discounted price is:"<<cost;
    }else {
        cout<<endl<<"you are not eliginble for dicount"<<" "<<cost;
    }

}
 