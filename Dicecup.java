import java.util.Scanner;

public class Dicecup {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int m = keyboard.nextInt();
        if(n==m) {
            System.out.println(n+1);
        }
        else if(n>m) {
            for(int i = m; i<=n; i++) {
                System.out.println(i+1);
            }
        }
        else if(m>n) {
            for(int i = n; i<=m; i++) {
                System.out.println(i+1);
            }
        }
    }
}
