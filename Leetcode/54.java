package Leetcode;
import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int startRow = 0, startCol = 0, endRow = matrix.length - 1, endCol = matrix[0].length - 1;
        List<Integer> result = new ArrayList<>();

        while (startRow <= endRow && startCol <= endCol) {
            // top
            for (int j = startRow; j <= endCol; j++) {
                result.add(matrix[startRow][j]);
            }

            // right
            for (int i = startRow + 1; i <= endRow; i++) {
                result.add(matrix[i][endCol]);
            }

            // bottom
            for (int j = endCol - 1; j >= startCol; j--) {
                if (startRow == endRow) {
                    break;
                }
                result.add(matrix[endRow][j]);
            }

            // left
            for (int i = endRow - 1; i >= startRow + 1; i--) {
                if (startCol == endCol) {
                    break;
                }
                result.add(matrix[i][startCol]);
            }

            startCol++;
            startRow++;
            endCol--;
            endRow--;
        }
        return result;
    }
}
