import java.util.Scanner;

public class Tarifa {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int x = keyboard.nextInt();
        int tampung= x;
        int n = keyboard.nextInt();
        for(int i =0; i<n; i++) {
            int p = keyboard.nextInt();
            tampung+=(x-p);
        }
        System.out.println(tampung);
    }
}
