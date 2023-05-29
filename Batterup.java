import java.util.Scanner;

public class Batterup {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int input = keyboard.nextInt();
        int bantuan = 0;
        float hasil = 0;
        for(int i = 0; i<input; i++) {
            int a = keyboard.nextInt();
            if(a<0) {
                bantuan++;
            }
            else {
                hasil+=a;
            }
        }
        System.out.println(hasil/(input-bantuan));
    }
}
