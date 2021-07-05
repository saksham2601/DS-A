#include <bits/stdc++.h>
using namespace std;
#define M 3
#define N 4

// This function stores transpose
// of A[][] in B[][]
void transpose(int A[][N], int B[][M])
{
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            B[i][j] = A[j][i];
}

// Driver code
int main()
{
    int A[M][N],B[N][M], i, j;

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;i++)
        {
            cin>>A[M][N];
        }
    }

    transpose(A, B);

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
            cout << " " << B[i][j];

        cout << "\n";
    }
    return 0;
}
