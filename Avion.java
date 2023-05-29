import java.util.Scanner;

public class Avion {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String[] input = new String[5];
        int isOne = 0;
        for(int i = 0; i<5; i++) {
            input[i] = keyboard.nextLine();
            if(input[i].contains("FBI")) {
                System.out.print((i+1) + " ");
                isOne = 1;
            }
        }
        if(isOne!=1) {
            System.out.printf("HE GOT AWAY!\n");
        }
    }
}
