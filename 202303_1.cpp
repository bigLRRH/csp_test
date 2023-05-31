#include <iostream>
using namespace std;
int main()
{
    int n,a,b,sum(0);
    cin>>n>>a>>b;
    for(int i=0;i<n;++i)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1<0)x1=0;
        if(y1<0)y1=0;
        if(x2>a)x2=a;
        if(y2>b)y2=b;
        if(x2>x1&&y2>y1)
            sum+=(x2-x1)*(y2-y1);
    }
    cout<<sum;
}