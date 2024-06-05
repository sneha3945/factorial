#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,x;
    cout<<"Enter any number";
    cin>>n;
    x=fact(n);
    cout<<"factorial is"<<x<<endl;
    return 0;
};
int fact (int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}