import java.util.Scanner;

public class charPattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Character");
        char ch = sc.next().charAt(0);
        System.out.println("Enter the lines of star");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }
    }
}
