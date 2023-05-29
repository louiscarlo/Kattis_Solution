import java.util.Scanner;

public class ReverseBinary {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int hasil = 0;
        String bin = Integer.toBinaryString(n);
        String reverse = new StringBuffer(bin).reverse().toString();
        int res = Integer.parseInt(reverse, 2);
        System.out.println(res);
    }
}
