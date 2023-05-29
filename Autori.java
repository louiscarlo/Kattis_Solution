import java.util.Scanner;

public class Autori {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        for(int i = 0; i<input.length(); i++) {
            if(input.charAt(i)>=65 && input.charAt(i)<=90) {
                System.out.print(input.charAt(i));
            }
        }
    }
}
