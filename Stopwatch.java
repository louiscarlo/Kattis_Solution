import java.util.Scanner;

public class Stopwatch {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int bantuan = 0;
        int hasil = 0;
            for(int i = 1; i<=n; i++) {
                int input = keyboard.nextInt();
                if(i%2==0) {
                    hasil+=input;
                }
                else {
                    bantuan+=input;
                }
            }
            if(n%2==0) {
                System.out.println(hasil-bantuan);
            }
            else{
                System.out.printf("still running\n");
            }
    }
}
