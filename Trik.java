import java.util.Scanner;

public class Trik {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int a = 1;
        String input = keyboard.nextLine();
        for(int i =0; i<input.length(); i++) {
            if(input.charAt(i)=='A' && a==1) {
                a = 2;
            }
            else  if(input.charAt(i)=='A' && a==2) {
                a = 1;
            }
            else if(input.charAt(i)=='B' && a==2) {
                a = 3;
            }
            else if(input.charAt(i)=='B' && a==3) {
                a = 2;
            }
            else if(input.charAt(i)=='C' && a==1) {
                a = 3;
            }
            else if(input.charAt(i)=='C' && a==3) {
                a = 1;
            }

        }
        System.out.println(a);
    }
}
