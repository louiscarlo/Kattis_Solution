import java.util.Scanner;

public class Chanukah {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] index = new int[n];
        int[] hasil = new int[n];
        for(int i = 0; i<n; i++) {
            hasil[i]  = 0;
            index[i] = keyboard.nextInt();
            int input = keyboard.nextInt();
            for(int j = 1; j<=input; j++) {
                hasil[i]+=j;
            }
            hasil[i]+=input;
        }
        for(int i = 0; i<n; i++) {
            System.out.println(index[i] + " " + hasil[i]);
        }
    }
}
