#include <bits/stdc++.h>
using namespace std;
#define N 5

int findMaxValue(int mat[][N])
{
    int maxValue = INT_MIN;

    int aPos = -1, bPos = -1, dPos = -1, ePos = -1;

    for (int a = 0; a < N - 1; a++) {
        for (int b = 0; b < N - 1; b++) {

            
            for (int d = a + 1; d < N; d++) {
                for (int e = b + 1; e < N; e++) {

                    int diff = mat[d][e] - mat[a][b];

                    
                    if (diff > maxValue) {
                        maxValue = diff;
                        aPos = a; bPos = b;
                        dPos = d; ePos = e;
                    }
                }
            }
        }
    }

    cout << "Chosen elements: mat[" << dPos << "][" << ePos << "] = "
         << mat[dPos][ePos] << " and mat[" << aPos << "][" << bPos << "] = "
         << mat[aPos][bPos] << endl;

    return maxValue;
}

int main()
{
    int mat[N][N] = {
        { 1, 2, -1, -4, -20 },
        { -8, -3, 4, 2, 1 },
        { 3, 8, 6, 1, 3 },
        { -4, -1, 1, 7, -6 },
        { 0, -4, 10, -5, 1 }
    };

    cout << "Maximum Value is " << findMaxValue(mat) << endl;

    return 0;
}
