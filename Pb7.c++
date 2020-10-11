#include <iostream>

using namespace std;

int main()
{
    int k,a,b;
    cout<<"k=";
    cin>>k;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    if((a%k==0) && (b%k==0))
        cout<<"Fractia simplificata este: "<<a/k<<"/"<<b/k;
    else
        cout<<"Fractia nu se poate simplifica prin "<<k;
    return 0;
}
