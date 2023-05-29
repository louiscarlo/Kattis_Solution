import java.util.Scanner;

public class Ladder {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int h = keyboard.nextInt();
        int s = keyboard.nextInt();
        double tampung = ((double) h/ Math.sin(Math.toRadians(s)));
        int hasil = (int) Math.ceil(tampung);
        System.out.println(hasil);
    }
}
