import java.util.Scanner;

public class HissingMicrophone {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        int isOne = 0;
        for(int i = 0; i<input.length(); i++) {
            if(input.contains("ss")) {
                isOne = 1;
                break;
            }
        }
        if(isOne==1) {
            System.out.printf("hiss\n");
        }
        else {
            System.out.printf("no hiss\n");
        }
    }
}
