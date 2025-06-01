import java.util.ArrayList;
import java.util.List;

public class SpiralMatrix {

    public List<Integer> printSpiral(int mattrix[][]) {
        int startRow = 0;
        int startCol = 0;
        int endRow = mattrix.length - 1;
        int endCol = mattrix[0].length - 1;
        List<Integer> result = new ArrayList<>();

        while (startRow <= endRow && startCol <= endCol) {
            // top
            for (int j = startRow; j <= endCol; j++) {
                result.add(mattrix[startRow][j]);
            }

            // right
            for (int i = startRow + 1; i <= endRow; i++) {
                result.add(mattrix[i][endCol]);
            }

            // bottom
            for (int j = endCol - 1; j >= startCol; j--) {
                if (startRow == endRow) {
                    break;
                }
                result.add(mattrix[endRow][j]);
            }

            // left
            for (int i = endRow - 1; i >= startRow + 1; i--) {
                if (startCol == endCol) {
                    break;
                }
                result.add(mattrix[i][startCol]);
            }

            startCol++;
            startRow++;
            endCol--;
            endRow--;
        }
        return result;
    }

    public static void main(String[] args) {
        SpiralMatrix solution = new SpiralMatrix();
        int mattrix[][] = {
                { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 },
                { 13, 14, 15, 16 } };

        List<Integer> spiral = solution.printSpiral(mattrix);
        System.out.print("Spiral Order: " + spiral);
    }
}
