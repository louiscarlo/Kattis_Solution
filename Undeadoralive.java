import java.util.Scanner;

public class Undeadoralive {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        if(input.contains(":(") && input.contains(":)")) {
            System.out.printf("double agent\n");
        }
        else if(input.contains(":)")) {
            System.out.printf("alive\n");
        }
        else if(input.contains(":(")) {
            System.out.printf("undead\n");
        }
        else {
            System.out.printf("machine\n");
        }
    }
}
