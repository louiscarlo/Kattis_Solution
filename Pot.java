import java.util.Scanner;

public class Pot {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int input = keyboard.nextInt();
        int bantuan;
        int hasil = 0;
        for(int i = 0; i<input; i++) {
            int tampung = keyboard.nextInt();
            bantuan = tampung % 10;
            tampung/=10;
            int f = (int) Math.pow(tampung,bantuan);
            hasil+=f;
        }
        System.out.println(hasil);
    }
}
