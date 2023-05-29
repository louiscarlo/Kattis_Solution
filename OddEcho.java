import java.util.Scanner;

public class OddEcho {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        keyboard.nextLine();
        String[] input = new String[n];
        for(int i = 0; i<n; i++) {
            input[i] = keyboard.nextLine();
        }
        for(int i = 0; i<n; i++) {
            if(i%2==0) {
                System.out.println(input[i]);
            }
        }
    }
}
