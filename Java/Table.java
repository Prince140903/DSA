import java.util.Scanner;

public class Table {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number");
        int number = sc.nextInt();
        int table;

        System.out.println("The Table of Number is: ");

        for (int i = 1; i <= 10; i++) {
            table = number * i;

            System.out.println(table);
        }
    }
}
