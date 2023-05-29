import java.util.Scanner;

public class Grassseed {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        float c = keyboard.nextFloat();
        int n = keyboard.nextInt();
        float hasil = 0;
        for(int i = 0; i<n; i++) {
            float w = keyboard.nextFloat();
            float l = keyboard.nextFloat();
            float tampung = w * l;
            hasil+=tampung;
        }
        System.out.printf("%.7f",hasil*c);
    }
}
