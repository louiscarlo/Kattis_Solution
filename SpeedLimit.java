import java.util.Scanner;

public class SpeedLimit {
    public static void main(String[] args) {
        Scanner  keyboard = new Scanner(System.in);
        int i;
        int[] hasil = new int[10];
        for(i = 0; i<10; i++) {
            int n = keyboard.nextInt();
            if(n<=0) {
                break;
            }
            else {
                hasil[i] = 0;
                int[]t = new int[n];
                for(int j = 0; j<n; j++) {
                    int s = keyboard.nextInt();
                    t[j] = keyboard.nextInt();
                    if(j>0) {
                        int tampung = t[j] - t[j-1];
                        hasil[i]+=(tampung*s);
                    }
                    else{
                        hasil[i]+=(t[j]*s);
                    }
                }
            }
        }
        for(int k = 0; k<i; k++) {
            System.out.println(hasil[k] + " miles");
        }
    }
}
