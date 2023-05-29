import java.util.Scanner;

public class freefood {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int penanda = 0;
        int hasil = 0;
        for(int i = 0; i<n; i++) {
            int s = sc.nextInt();
            int t = sc.nextInt();
            if(s!=t) {
                t+=1;
                if(penanda<s) {
                    hasil+=t - s;
                }
                else if(penanda>s && penanda<t){
                    hasil += t-penanda;
                }

            }
            else{
                hasil += 1;
            }
            penanda = t;
        }

        System.out.println(hasil);
    }
}
