import java.util.Scanner;

public class Upprodun {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int m = keyboard.nextInt();
        int tampung = (m/n);
        int bantuan = 3;
        for(int i = 1; i<=n; i++) {
            if(m % n == 0) {
                if(n==1) {
                    for(int j = 1; j<=m; j++) {
                        System.out.print("*");
                    }
                }
                else{
                    for(int j = 1; j<=m/n; j++) {
                        System.out.print("*");
                    }
                    System.out.println();
                }
            }
            else{
                if(i%3==0) {
                    for(int j = 1; j<=tampung; j++) {
                        System.out.print("*");
                    }
                    bantuan+=3;
                    System.out.println();
                }
                else{
                    if(bantuan - i != 0 && i==n) {
                        for(int j = 1; j<=tampung; j++) {
                            System.out.print("*");
                        }
                        System.out.println();
                    }
                    else if(bantuan - i != 0 && i<n) {
                        for(int j = 1; j<=tampung+1; j++) {
                            System.out.print("*");
                        }
                        System.out.println();
                    }
                }
            }
        }
    }
}
