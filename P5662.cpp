#include <iostream>
#include <memory>
#include <array>
using namespace std;
int main()
{
    int T, N, M;
    cin >> T >> N >> M;
    array<int,100> P = {0};
    for (int i = 0; i < T; ++i)
    {
        for (int j = 0; j < N; ++j)
            cin >> P[j];
        
    }
    cout << M << endl;
    return 0;
}