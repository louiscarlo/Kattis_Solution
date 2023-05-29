import java.util.Scanner;

public class EncodedMessage {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        keyboard.nextLine();
        int[] kelipatan = new int[n];
        String[] input = new String[n];
        for(int i = 0; i<n; i++) {
            input[i] = keyboard.nextLine();
            kelipatan[i] = (int) Math.sqrt(input[i].length());
        }
        for(int i = 0; i<n; i++) {
            int tampung = kelipatan[i];
            for(int j = 0; j<=input[i].length(); j++) {
                for(int k = kelipatan[i]-1; k<=tampung*tampung-(j+1); k+=tampung) {
                    System.out.print(input[i].charAt(k));
                }
                kelipatan[i]--;
                if(kelipatan[i]==0) {
                    break;
                }
            }
            System.out.println();
        }
    }
}
