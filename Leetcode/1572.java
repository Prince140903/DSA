package Leetcode;

class Solution {
    public int diagonalSum(int[][] mat) {
        int sum = 0;
        for(int i = 0; i < mat.length; i++){
            //P diagonal
            sum += mat[i][i];
            //S diagonal
            if (i != mat.length-i-1)
                sum += mat[i][mat.length-i-1];
        }
        return sum;
    }
}