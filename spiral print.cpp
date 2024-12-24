#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralorder(vector<vector<int>> &matrix) {
  // Resultant vector to store the spiral order
  vector<int> ans;

  // Get the dimensions of the matrix
  int row = matrix.size();
  if (row == 0)
    return ans; // Handle edge case for empty matrix
  int col = matrix[0].size();

  // Initialize pointers for traversal
  int count = 0;
  int total = row * col;

  int startingrow = 0;
  int startingcol = 0;
  int endingrow = row - 1;
  int endingcol = col - 1;

  while (count < total) {
    // Traverse from left to right across the top row
    for (int index = startingcol; count < total && index <= endingcol;
         index++) {
      ans.push_back(matrix[startingrow][index]);
      count++;
    }
    startingrow++; // Move down to the next row

    // Traverse from top to bottom along the rightmost column
    for (int index = startingrow; count < total && index <= endingrow;
         index++) {
      ans.push_back(matrix[index][endingcol]);
      count++;
    }
    endingcol--; // Move left to the previous column

    // Traverse from right to left across the bottom row
    for (int index = endingcol; count < total && index >= startingcol;
         index--) {
      ans.push_back(matrix[endingrow][index]);
      count++;
    }
    endingrow--; // Move up to the previous row

    // Traverse from bottom to top along the leftmost column
    for (int index = endingrow; count < total && index >= startingrow;
         index--) {
      ans.push_back(matrix[index][startingcol]);
      count++;
    }
    startingcol++; // Move right to the next column
  }

  return ans; // Return the spiral order
}

int main() {
  // Example matrix
  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Get the spiral order
  vector<int> result = spiralorder(matrix);

  // Print the result
  for (int num : result) {
    cout << num << " ";
  }
  return 0;
}
