import java.util.Scanner;

public class RatingProblems {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int k = keyboard.nextInt();
        float hasil = 0;
        for(int i = 0; i<k; i++) {
            int input = keyboard.nextInt();
            hasil+=input;
        }
        if(n==k) {
            System.out.printf("%.4f %.4f",hasil/n,hasil/n);
        }
        else{
            System.out.printf("%.4f %.4f",((hasil+(-3*(n-k)))/n),((hasil+(3*(n-k)))/n));
        }
    }
}
