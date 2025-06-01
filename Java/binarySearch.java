public class binarySearch {

    public static int search(int arr[], int key) {
        int start = 0, end = arr.length - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {

        int arr[] = { 1, 2, 4, 5, 7, 8, 10 };
        int key = 8;

        System.out.println("The Binary of arr is on index: " + search(arr, key));

    }
}