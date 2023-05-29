import java.util.Scanner;

public class Relocation {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] company = new int[n];
        int[] id = new int[n];
        int q = keyboard.nextInt();
        int hitung = 0;
        int[] hasil = new int[q];
        for(int i = 0; i<n; i++) {
            id[i] = i+1;
            company[i] = keyboard.nextInt();
        }
        for(int i = 0; i<q; i++) {
            int a = keyboard.nextInt();
            int c = keyboard.nextInt();
            int x = keyboard.nextInt();
            if(a==1) {
               for(int j = 0; j<n; j++) {
                   if(c==id[j]) {
                       company[j] = x;
                   }
               }
            }
            else if(a==2) {
                if(c==x) {
                    continue;
                }
                else{
                    int tampung = company[c-1] - company[x-1];
                    if(tampung==0) {
                        hasil[hitung] = tampung;
                    }
                    else{
                        hasil[hitung] = Math.abs(tampung);
                    }
                    hitung++;
                }
            }
        }
        for(int i = 0; i<hitung; i++) {
            System.out.println(hasil[i]);
        }
    }
}
