public class ReverseArr {

    public static void reverse(int arr[]) {
        int First = 0, Last = arr.length - 1;

        while (First < Last) {
            int temp = arr[First];
            arr[First] = arr[Last];
            arr[Last] = temp;

            First++;
            Last--;
        }
    }

    public static void main(String[] args) {
        int arr[] = { 1, 4, 7, 9, 10, 14 };

        reverse(arr);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
