import java.util.Scanner;

public class TransitWoes {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int s = keyboard.nextInt();
        int t = keyboard.nextInt();
        int n = keyboard.nextInt();
        int[] d = new int[n+1];
        int[] b = new int[n];
        int[] c = new int[n];
        for(int i = 0; i<n+1; i++) {
            d[i] = keyboard.nextInt();
        }
        for(int i = 0; i<n; i++) {
            b[i] = keyboard.nextInt();
        }
        for(int i = 0; i<n; i++) {
            c[i] = keyboard.nextInt();
        }
        int hasil = s;
        for(int i = 0; i<n+1; i++) {
            hasil+=d[i];
            if(i<n) {
                if(hasil % c[i] != 0) {
                    for(int j = 0; hasil % c[i] != 0; j++) {
                        hasil++;
                    }
                    hasil+=b[i];
                }
                else{
                    hasil+=b[i];
                }
            }
        }
        if(hasil<=t) {
            System.out.printf("yes\n");
        }
        else{
            System.out.printf("no\n");
        }
    }
}
