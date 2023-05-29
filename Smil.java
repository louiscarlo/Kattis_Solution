import java.util.Scanner;

public class Smil {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        for(int i = 0; i<input.length(); i++) {
            if(i<=input.length()-2) {
                if(input.charAt(i)==':' && input.charAt(i+1)==')') {
                    System.out.println(i);
                }
                else if(input.charAt(i)==';' && input.charAt(i+1)==')') {
                    System.out.println(i);
                }
                else if(input.charAt(i)==':' && input.charAt(i+1)=='-' && input.charAt(i+2)==')') {
                    System.out.println(i);
                }
                else if(input.charAt(i)==';' && input.charAt(i+1)=='-' && input.charAt(i+2)==')') {
                    System.out.println(i);
                }
            }

        }
    }
}
