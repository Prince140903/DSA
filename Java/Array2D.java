import java.util.Scanner;

public class Array2D {

    public static boolean search(int mattrix[][], int key) {
        int n = mattrix.length, m = mattrix[0].length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mattrix[i][j] == key) {
                    System.out.println("The key found at index (" + i + ", " + j + ")");
                    return true;
                }
            }
        }
        return false;
    }

    public static void Calc(int mattrix[][]) {
        int n = mattrix.length, m = mattrix[0].length, Max = 0, Min = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mattrix[i][j] > Max) {
                    Max = mattrix[i][j];
                }
                if (mattrix[i][j] < Min) {
                    Min = mattrix[i][j];
                }
            }
        }
        System.out.println("The Maximum key is:" + Max);
        System.out.println("The Minimum key is:" + Min);
    }

    public static void main(String[] args) {
        int mattrix[][] = new int[3][3];
        int n = mattrix.length, m = mattrix[0].length;

        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mattrix[i][j] = sc.nextInt();
            }
        }

        // Output
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(mattrix[i][j] + " ");
            }
            System.err.println();
        }

        // search(mattrix, 5);
        Calc(mattrix);

    }
}