import java.util.Scanner;

public class LaptopSticker {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int wc = keyboard.nextInt();
        int hc = keyboard.nextInt();
        int ws = keyboard.nextInt();
        int hs = keyboard.nextInt();
        if(wc-ws>=1 && wc==hc && ws==hs) {
            System.out.println(1);
        }
        else{
            System.out.println(0);
        }
    }
}
