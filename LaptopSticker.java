import java.util.Scanner;

public class LaptopSticker {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int wc = keyboard.nextInt();
        int hc = keyboard.nextInt();
        int ws = keyboard.nextInt() + 1;
        int hs = keyboard.nextInt() + 1;


        if(wc>ws && hc>hs) {
            System.out.println(1);
        }
        else{
            System.out.println(0);
        }
    }
}
