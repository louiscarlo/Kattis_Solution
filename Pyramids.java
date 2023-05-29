import java.util.Scanner;

public class Pyramids {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int tampung = 0;
        int banyak = 0;
        for(int i = 1; tampung<=n; i++) {
            if(i % 2 != 0) {
                tampung+=(i*i);
                if(tampung<=n) {
                    banyak++;
                }
                else{
                    break;
                }
            }
        }
        System.out.println(banyak);
    }
}
