import java.util.Scanner;

public class Binomial {

    public static int Fact(int a) {
        int fact = 1;

        for (int i = 1; i <= a; i++) {
            fact *= i;
        }

        return fact;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of n: ");
        int n = sc.nextInt();
        System.out.println("Enter value of r: ");
        int r = sc.nextInt();

        int res = Fact(n) / (Fact(r) * (Fact(n-r)));

        System.out.println("The Binormial Exponential of given numbers is : " + res);
    }
}