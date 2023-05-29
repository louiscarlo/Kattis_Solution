import java.util.Scanner;

public class Spavanac {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = keyboard.nextInt();
        int b = keyboard.nextInt();
        int tampung1 = a;
        int tampung2 = b;
        if(b + 15 < 60 && a>=1) {
            tampung1--;
            tampung2+=15;
        }
        else if(b + 15 < 60 && a==0) {
            tampung1 = 23;
            tampung2+=15;
        }
        else if(b + 15 >= 60 && a>=1) {
            tampung2-=45;
        }
        else if(b + 15 >= 60 && a==0) {
            tampung1 = 23;
            tampung2-=45;
        }
        System.out.print(tampung1 + " " + tampung2);
    }
}
