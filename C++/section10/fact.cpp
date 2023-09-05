#include<iostream>
using namespace std;
double fact(double x){
    if(x==0||x==1)
    return 1;
    else if (x<0)
    {
        return -1;
    }
    
    else 
    return x*fact(x-1);
}
int main()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "factorial : " << fact(n);
return 0;
}