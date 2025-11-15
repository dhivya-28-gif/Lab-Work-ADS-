//Sort a Matrix in all way increasing order

#include <bits/stdc++.h>
using namespace std;
#define N 3

void sortAllway(int arr[][N]){
    
    vector<int> temp;
    for(int i=0;i< N;i++){
        for(int j=0;j<N;j++){
            temp.push_back(arr[i][j]);
            }
    }
    
    sort(temp.begin(),temp.end());
    
    int k = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j<N; j++){
            arr[i][j] = temp[k++];
            
            }
    } 
}

int main()
{
    int arr[N][N] = {1, 2, 3,
                     2, 5, 4,
                     9, 4, 7};

    // Call sorting function
    sortAllway(arr);

    // Print resultant matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
