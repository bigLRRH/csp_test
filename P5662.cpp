#include <iostream>
#include <memory>
#include <array>
using namespace std;
int main()
{
    int T, N, M;
    cin >> T >> N >> M;
    array<int, 100> W={}, P={}; 
    for (int j = 0; j < N; ++j)
        cin>>W[j];
    for (int t = 1; t < T; ++t)
    {
        array<int,10001> dp={};
        for(int i=0;i<N;++i)
        {
            cin >> P[i];
            for(int j=W[i];j<=M;++j)
            {
                dp[j]=max(dp[j],dp[j-W[i]]+P[i]-W[i]);
            }
        }
        M +=dp[M];
        W = move(P);
    }
    cout << M << endl;
    return 0;
}