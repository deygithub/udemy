#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,d=0,arm=0;
    cout<<"Enter a number: ";
    cin>>n;
    int m1 =n;
    int m2 =n;
    while(m1){
        d++;
        m1/=10;
    }
    while(m2){
        int rem= m2%10;
        
        arm = arm + pow(rem,d);
        cout << pow(rem, d) << endl;
        cout << arm << endl;
        //cout << arm << " ";
        m2/=10;
    }
    if(arm==n) cout<<"Armtrong number"<<arm<<endl;
    else cout<<"Not Arstrong number"<<arm<<endl;

    return 0;
}