import java.util.Scanner;

public class AddingTrouble {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = keyboard.nextInt();
        int b = keyboard.nextInt();
        int c = keyboard.nextInt();
        if(a + b == c) {
            System.out.printf("correct!\n");
        }
        else {
            System.out.printf("wrong!\n");
        }
    }
}
