import java.util.Scanner;

public class Greetings2 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        int panjang = input.length();
        int jumlah = 0;
        if(input.charAt(panjang-1)=='y') {
            for(int i = 0; i<input.length(); i++) {
                if(input.charAt(i)=='e') {
                    jumlah++;
                }
            }
            for(int i = 0; i<1; i++) {
                System.out.printf("h");
                for(int j = 0; j<jumlah; j++) {
                    System.out.printf("ee");
                }
                System.out.printf("y\n");
            }
        }
        else if(input.equals("what's up")) {
            System.out.printf("what's uhat's up\n");
        }
        else if(input.equals("Later!")) {
            System.out.printf("Alligator!\n");
        }
    }
}
