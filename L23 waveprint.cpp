#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(int arr[][4], int nrows, int mcols) {
    vector<int> ans; // This will store the final wave pattern

    for (int col = 0; col < mcols; col++) {
        // If column index is odd, traverse from bottom to top
        if (col & 1) {
            for (int row = nrows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // If column index is even, traverse from top to bottom
            for (int row = 0; row < nrows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans; // Return the wave print vector
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int nrows = 3;
    int mcols = 4;

    // Call the wavePrint function and store the result
    vector<int> result = wavePrint(arr, nrows, mcols);

    // Print the wave print result
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
