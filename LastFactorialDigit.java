import java.util.Scanner;

public class LastFactorialDigit {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int t = keyboard.nextInt();
        int[] hasil = new int[t];
        for(int i = 0; i<t; i++) {
            int n = keyboard.nextInt();
            for(int j = n-1; j>0; j--) {
                n*=j;
            }
            hasil[i] = n % 10;
        }
        for(int i = 0; i<t; i++) {
            System.out.println(hasil[i]);
        }
    }
}
