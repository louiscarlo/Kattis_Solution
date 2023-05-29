import java.util.Scanner;

public class ClassFieldTrip {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        char temp;
        String input1 = keyboard.nextLine();
        String input2 = keyboard.nextLine();
        String sambung = input1.concat(input2);
        char[] tampung = sambung.toCharArray();
        for(int i = 0; i<sambung.length(); i++) {
            for(int j = i+1; j<sambung.length(); j++) {
                if(tampung[i]>tampung[j]) {
                    temp = tampung[i];
                    tampung[i] = tampung[j];
                    tampung[j] = temp;

                }
            }
        }
        for(int i = 0; i<sambung.length(); i++) {
            System.out.print(tampung[i]);
        }
    }
}
