import java.util.Scanner;

public class StickyKeys {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        for(int i = 0; i<input.length(); i++) {
            if(i<input.length()-1) {
                if(input.charAt(i)==input.charAt(i+1)) {
                    continue;
                }
                else {
                    System.out.print(input.charAt(i));
                }
            }
            else{
                System.out.println(input.charAt(i));
            }
        }
    }
}
