import java.util.Scanner;

public class Conundrum {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        int hitung = 0;
        for(int i = 0; i<=input.length(); i++) {
            if(i>0) {
                if(i%3==0) {
                    if(input.charAt(i-1)!='R') {
                        hitung++;
                    }
                    if(input.charAt(i-2)!='E') {
                        hitung++;
                    }
                    if(input.charAt(i-3)!='P') {
                        hitung++;
                    }
                }
            }
        }
        System.out.println(hitung);
    }
}
