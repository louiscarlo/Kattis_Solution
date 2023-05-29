import java.util.Scanner;

public class jobexpenses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int hasil = 0;
        for(int i = 0; i<n; i++) {
            int input = sc.nextInt();
            if(input<0) {
                hasil+=input;
            }
        }
        System.out.println(Math.abs(hasil));
    }
}
