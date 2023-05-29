import java.util.Scanner;

public class PieceofCake2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();
        int v = sc.nextInt();
        int hn = n - h;
        int vn = n - v;
        int hasil = Math.max(hn,h) * Math.max(vn,v) * 4;
        System.out.println(hasil);
    }
}
