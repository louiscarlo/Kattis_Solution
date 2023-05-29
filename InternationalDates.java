import java.util.Scanner;

public class InternationalDates {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        String[] tampung = input.split("/");
        int[] convert = new int[3];
        for(int i = 0; i<3; i++) {
            convert[i] = Integer.parseInt(tampung[i]);
        }
        if(convert[0]<=31 && convert[1]<=12 && (convert[0]>convert[1]&& convert[0]>12)) {
            System.out.printf("EU\n");
        }
        else if(convert[0]<=12 && convert[1]<=31 && (convert[1]>convert[0] && convert[1]>12)) {
            System.out.printf("US\n");
        }
        else{
            System.out.printf("either\n");
        }
    }
}
