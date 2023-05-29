import java.util.Scanner;

public class Bela {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        char b = keyboard.next().charAt(0);
        keyboard.nextLine();
        int hasil = 0;
        for(int i = 0; i<n*4; i++) {
            String input = keyboard.nextLine();
            if((input.charAt(0)=='A' && input.charAt(1)==b) || (input.charAt(0)=='A' && input.charAt(1)!=b)) {
                hasil+=11;
            }
            else if((input.charAt(0)=='K' && input.charAt(1)==b) || (input.charAt(0)=='K' && input.charAt(1)!=b)) {
                hasil+=4;
            }
            else if((input.charAt(0)=='Q' && input.charAt(1)==b) || (input.charAt(0)=='Q' && input.charAt(1)!=b)) {
                hasil+=3;
            }
            else if(input.charAt(0)=='J' && input.charAt(1)==b) {
                hasil+=20;
            }
            else if(input.charAt(0)=='J' && input.charAt(1)!=b) {
                hasil+=2;
            }
            else if((input.charAt(0)=='T' && input.charAt(1)==b) || (input.charAt(0)=='T' && input.charAt(1)!=b)) {
                hasil+=10;
            }
            else if(input.charAt(0)=='9' && input.charAt(1)==b) {
                hasil+=14;
            }
            else if(input.charAt(0)=='9' && input.charAt(1)!=b) {
                hasil+=0;
            }
        }
        System.out.println(hasil);
    }
}
