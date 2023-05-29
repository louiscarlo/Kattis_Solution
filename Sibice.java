import java.util.Scanner;

public class Sibice {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int w = keyboard.nextInt();
        int h = keyboard.nextInt();
        int[] input = new int[n];
        float tampung = (float) (w*w) + (h*h);
        float hasil = (float) Math.sqrt(tampung);
        for(int i = 0; i<n; i++) {
            input[i] = keyboard.nextInt();
        }
        for(int i = 0; i<n; i++) {
            if(input[i]<=hasil || input[i]<=w || input[i]<=h) {
                System.out.printf("DA\n");
            }
            else{
                System.out.printf("NE\n");
            }
        }
    }
}
