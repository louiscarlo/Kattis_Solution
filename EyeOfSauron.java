import java.util.Scanner;

public class EyeOfSauron {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        String[] tampung = input.split("\\(\\)");
        int hitung1 = tampung[0].length();
        int hitung2 = tampung[1].length();
        if(hitung1==hitung2) {
            System.out.printf("correct\n");
        }
        else {
            System.out.printf("fix\n");
        }
    }
}
