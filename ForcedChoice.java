import java.util.Scanner;

public class ForcedChoice {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int p = keyboard.nextInt();
        int s = keyboard.nextInt();
        int[] one = new int[s];
        for(int i = 0; i<s; i++) {
            int m = keyboard.nextInt();
            for(int j = 0; j<m; j++) {
                int input = keyboard.nextInt();
                if(input==p) {
                    one[i] = 1;
                }
            }
        }
        for(int i = 0; i<s; i++) {
            if(one[i]==1) {
                System.out.printf("KEEP\n");
            }
            else{
                System.out.printf("REMOVE\n");
            }
        }
    }
}
