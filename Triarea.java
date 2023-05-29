import java.util.Scanner;

public class Triarea {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int alas = keyboard.nextInt();
        int tinggi = keyboard.nextInt();
        float hasil = (float)(alas*tinggi)/2;
        System.out.println(hasil);
    }
}
