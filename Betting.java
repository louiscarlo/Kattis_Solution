import java.util.Scanner;

public class Betting {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = keyboard.nextInt();
        float tampung = (float) a/100;
        float hasil1 = 1;
        int b = 1;
        float tampung2 = (float) b - tampung;
        float hasil2 = 1;
        hasil2/=tampung2;
        hasil1/=tampung;
        System.out.printf("%.10f\n",hasil1);
        System.out.printf("%.10f",hasil2);
    }
}
