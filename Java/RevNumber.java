import java.util.Scanner;

public class RevNumber {
    public static void main(String[] args){
        System.out.println("Enter your number :");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println("The Reversed number is:");
        while (n > 0) {
            int lastDigit = n % 10;
            System.out.print(lastDigit);
            n /= 10;
        }
    }
}