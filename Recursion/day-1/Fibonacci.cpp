#include<bits/stdc++.h>
using namespace std;


int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<fib(n);
}
//Radhika

// 0 1 1 2 3 5 8
