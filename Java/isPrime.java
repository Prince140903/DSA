import java.util.Scanner;

public class isPrime {

    public static boolean Prime(int n) {

        if (n == 2)
            return true;

        for (int i = 2; i < (n - 1); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of n: ");
        int n = sc.nextInt();

        if (Prime(n)) {
            System.out.println("The number " + n + " is Prime");
        } else {
            System.out.println("The number " + n + " is not Prime");
        }
    }
}
