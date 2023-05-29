import java.util.Scanner;

public class ShatteredCake {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int w = keyboard.nextInt();
        int n = keyboard.nextInt();
        int tampung;
        int hasil = 0;
        for(int i = 0; i<n; i++) {
            int w1 = keyboard.nextInt();
            int l1 = keyboard.nextInt();
            tampung = w1*l1;
            hasil+=tampung;
        }
        System.out.println(hasil/w);
    }
}
