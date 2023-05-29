import java.util.Scanner;

public class OddManOut {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] hasil = new int[n];
        int one = 0;
        for(int i = 0; i<n; i++) {
            hasil[i] = 0;
            int g = keyboard.nextInt();
            int[] c = new int[g];
            for(int j = 0; j<g; j++) {
                c[j] = keyboard.nextInt();
            }
            int[] banyak = new int[g];
            for(int j = 0; j<g; j++) {
                banyak[j] = 0;
                for(int k = 0; k<g; k++) {
                    if(k==j) {
                        continue;
                    }
                    if(c[j]!=c[k]) {
                       if(banyak[j]==0) {
                           if(k==g-1) {
                               hasil[i] = c[j];
                               break;
                           }
                           else if(j==g-1) {
                               hasil[i] = c[j];
                               break;
                           }
                       }
                    }
                    else{
                        banyak[j]++;
                    }
                }
                if(banyak[j]==0) {
                    break;
                }
            }
        }
        for(int i = 0; i<n; i++) {
            System.out.println("Case #" + (i+1) + ": " + hasil[i]);
        }
    }
}
