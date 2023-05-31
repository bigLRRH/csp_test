#include <iostream>
using namespace std;
int main()
{
    int n,k,a,sum(0),count(0);
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        sum+=a;
        if(sum>=k)
        {
            ++count;
            sum=0;
        }
    }
    if(sum>0)++count;
    cout<<count;
    return 0;
}