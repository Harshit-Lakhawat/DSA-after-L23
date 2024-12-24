    #include <iostream>
    #include <vector>
    using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Get the dimensions of the matrix
        int row = matrix.size();
        if (row == 0) return false;  // Handle empty matrix case
        int col = matrix[0].size();

        
        int start = 0;
        int end = row * col - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;  
            int element = matrix[mid / col][mid % col];  
            if (element == target) {
                return true;  
            }
            if (element < target) {
                start = mid + 1; 
            } 
            else {
                end = mid - 1; 
            }
        }

        return false;  
    }

    int main() {

        vector<vector<int>> matrix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 60}
        };
        int target = 3;

        if (searchMatrix(matrix, target)) {
            cout << "Element found in the matrix." << endl;
        } else {
            cout << "Element not found in the matrix." << endl;
        }

        return 0;
    }
