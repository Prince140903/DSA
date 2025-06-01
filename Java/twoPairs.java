public class twoPairs {

    public static void Pairs(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                System.out.print("(" + arr[i] + ", " + arr[j] + ") ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int arr[] = { 21, 42, 81, 91, 99, 101, 103 };

        Pairs(arr);
    }
}
