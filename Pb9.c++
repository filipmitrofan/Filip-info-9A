#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c && a>b)
        cout<<a;
    else if(b>c && b>a)
        cout<<b;
    else
        cout<<c;
    return 0;
}
