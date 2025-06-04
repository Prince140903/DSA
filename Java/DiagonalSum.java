public class DiagonalSum {
    public static int DiaSum(int matrix[][]) {
        int sum = 0;

        for (int i = 0; i < matrix.length; i++) {
            // Primary Diagonal
            sum += matrix[i][i];
            // Secondary Diagonal
            if (i != matrix.length - i - 1) {
                sum += matrix[i][matrix.length - i - 1];
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int mattrix[][] = {
                { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 },
                { 13, 14, 15, 16 } };

        System.out.println(DiaSum(mattrix));
        ;
    }
}
