import java.util.Scanner;

public class Filip {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = keyboard.nextInt();
        int b = keyboard.nextInt();
        int reverse1 = 0;
        int reverse2 = 0;
        while(a!=0) {
            reverse1*=10;
            reverse1+=(a%10);
            a/=10;
        }
        while(b!=0) {
            reverse2*=10;
            reverse2+=(b%10);
            b/=10;
        }
        if(reverse1>reverse2) {
            System.out.println(reverse1);
        }
        else if(reverse2>reverse1) {
            System.out.println(reverse2);
        }
    }
}
