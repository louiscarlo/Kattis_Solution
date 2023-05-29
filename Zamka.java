import java.util.Scanner;

public class Zamka {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int l = keyboard.nextInt();
        int d = keyboard.nextInt();
        int x = keyboard.nextInt();
        int hasil1 = 0;
        int hasil2 = 0;
        for(int i = l; i<=d; i++) {
            int tampung = i;
            int bantuan = 0;
            while(tampung>0) {
                bantuan+=(tampung%10);
                tampung/=10;
            }
            if(bantuan==x) {
                hasil1 = i;
                break;
            }
        }
        for(int i = l; i<=d; i++) {
            int tampung = i;
            int bantuan = 0;
            while(tampung>0) {
                bantuan+=(tampung%10);
                tampung/=10;
            }
            if(bantuan==x) {
                hasil2 = i;
                continue;
            }
        }
        System.out.println(hasil1);
        System.out.println(hasil2);
    }
}
