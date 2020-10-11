#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    if(n==m+1 || m==n+1)
        cout<<1;
    else
        cout<<0;

    return 0;
}
