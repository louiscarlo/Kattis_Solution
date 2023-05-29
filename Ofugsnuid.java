import java.util.Scanner;

public class Ofugsnuid {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        long[] hasil = new long[n];
        for(int i = 0; i<n; i++) {
            int input = keyboard.nextInt();
            hasil[i] = (long) input;
        }
        for(int i = n-1; i>=0; i--) {
            System.out.println(hasil[i]);
        }

    }
}
