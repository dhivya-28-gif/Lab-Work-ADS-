#include <iostream>
#include <vector>
using namespace std;


vector<int> spirallyTraverse(vector<vector<int>>& mat) {
    int m = mat.size();       
    int n = mat[0].size();   
    vector<int> res;

    
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    
    while (top <= bottom && left <= right) {
        
        for (int j = left; j <= right; j++)
            res.push_back(mat[top][j]);
        top++;  

        
        for (int i = top; i <= bottom; i++)
            res.push_back(mat[i][right]);
        right--;  

        
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                res.push_back(mat[bottom][j]);
            bottom--;  
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                res.push_back(mat[i][left]);
            left++;  
        }
    }

    return res;
}

int main() {
    
    vector<vector<int>> mat = { { 1, 2, 3, 4 },
                                { 5, 6, 7, 8 },
                                { 9, 10, 11, 12 },
                                { 13, 14, 15, 16 } };

    
    vector<int> res = spirallyTraverse(mat);

    
    cout << "Spiral Order Traversal: ";
    for (int num : res) {
        cout << num << " ";
    }

    return 0;
}
