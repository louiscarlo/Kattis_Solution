import java.util.Scanner;

public class MagicTrick {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        int one = 1;
        for(int i = 0; i<input.length(); i++) {
            for(int j = 0; j<i; j++) {
                if(input.charAt(i)==input.charAt(j)) {
                    one = 0;
                    break;
                }
            }
        }
        System.out.println(one);
    }
}
