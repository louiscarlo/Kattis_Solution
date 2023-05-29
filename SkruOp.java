import java.util.Scanner;

public class SkruOp {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int hasil = 7;
        keyboard.nextLine();
        for(int i = 0; i<n; i++) {
            String input = keyboard.nextLine();
            if(input.equals("Skru op!") && hasil<10) {
                hasil++;
            }
            else if(input.equals("Skru ned!") && hasil>0) {
                hasil--;
            }
        }
        System.out.println(hasil);
    }
}
