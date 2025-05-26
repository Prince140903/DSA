import java.util.Scanner;

public class TaxCalc {
    public static void main(String[] args){
        System.out.println("Enter your Income :");
        Scanner sc = new Scanner(System.in);
        int inc = sc.nextInt();
        int tax;

        if ( inc < 500000 ) {
            System.out.println("The Tax will be 0% that is 0");
        } else if( inc >= 500000 && inc <= 1000000) {
            tax = (int) (inc * 0.2);
            System.out.println("The Tax will be 20% that is " + tax);
        } else {
            tax = (int) (inc * 0.3);
            System.out.println("The Tax will be 30% that is " + tax);
        }
    }
}