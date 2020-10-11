#include <iostream>

using namespace std;

int main()
{
    int a,b,c,maxx,minn,s;
    cin>>a>>b>>c;
    cout<<endl;
    if(a>c && a>b)
        {cout<<"max="<<a;
         maxx=a;}
    else if(b>c && b>a)
        {cout<<"max="<<b;
         maxx=b;}
    else
        {cout<<"max="<<c;
         maxx=c;}

    cout<<endl;

    if(a<c && a<b)
    {
        cout<<"min="<<a;
        minn=a;
    }
    else if(b<c && b<a)
    {
        cout<<"min="<<b;
        minn=b;
    }
    else
    {
        cout<<"min="<<c;
        minn=c;
    }
    cout<<endl;
    s=minn+maxx;
    cout<<s;
    return 0;
}
