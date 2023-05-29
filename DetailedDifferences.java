import java.util.Scanner;

public class DetailedDifferences {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        keyboard.nextLine();
        String[] input1 = new String[n];
        String[] input2 = new String[n];
        for(int i = 0; i<n; i++) {
            input1[i] = keyboard.nextLine();
            input2[i] = keyboard.nextLine();
        }
        for(int i = 0; i<n; i++) {
            System.out.println(input1[i]);
            System.out.println(input2[i]);
            for(int j = 0; j<input1[i].length(); j++) {
                if(input1[i].charAt(j)==input2[i].charAt(j)) {
                    System.out.printf(".");
                }
                else {
                    System.out.printf("*");
                }
            }
            System.out.println();
            System.out.println();
        }
    }
}
