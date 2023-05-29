import java.util.Scanner;

public class Nodup {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        String[] bagian = input.split(" ");
        int hitung = 1;
        int isOne = 0;
        for(int i = 0; i<input.length(); i++) {
            if(input.charAt(i)==' ') {
                hitung++;
            }
        }
        for(int i =0; i<hitung; i++) {
            for(int j = 0; j<i; j++) {
                if(bagian[i].equals(bagian[j])) {
                    isOne = 1;
                    break;
                }
            }
        }
        if(isOne!=1) {
            System.out.printf("yes\n");
        }
        else {
            System.out.printf("no\n");
        }
    }
}
