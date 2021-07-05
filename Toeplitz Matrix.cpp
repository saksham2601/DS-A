class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
	  int lastcol = matrix[0].size() - 1;
	  int lastrow = matrix.size() - 1;
	  int row = 0;
	  int col = lastcol;
	  int i, j;
	  for (; col <= lastcol && row <= lastrow; col != 0 ? col-- : row++) {
		int val = matrix[row][col];
		for (i = row + 1, j = col + 1; i <= lastrow && j <= lastcol; i++, j++) {
		  if (val != matrix[i][j]) return false;
		}
	  }
	  return true;
	}
};
