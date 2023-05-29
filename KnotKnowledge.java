import java.util.Scanner;

public class KnotKnowledge {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] x = new int[n];
        int[] y = new int[n-1];
        int hasil = 0;
        int one = 0;
        for(int i = 0; i<n; i++) {
            x[i] = keyboard.nextInt();
        }
        for(int i = 0; i<n-1; i++) {
            y[i] = keyboard.nextInt();
        }
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n-1; j++) {
                if(x[i]==y[j]) {
                    one = 1;
                    break;
                }
                else{
                    one = 0;
                    if(one==0 && j==n-2) {
                        hasil = x[i];
                        break;
                    }
                }
            }
            if(one==0) {
                break;
            }
        }
        System.out.println(hasil);
    }
}
