import java.util.Scanner;

public class Faktor {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = keyboard.nextInt();
        int i = keyboard.nextInt();
        i-=1;
        a*=i;
        System.out.println(a+1);
    }
}
