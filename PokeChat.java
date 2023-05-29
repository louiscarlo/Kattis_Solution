import javax.lang.model.type.NullType;
import java.util.Scanner;

public class PokeChat {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int digit = 0;
        String input1 = keyboard.nextLine();
        String input2 = keyboard.nextLine();
        int k = 0;
        for(int i = 0; i<input2.length()/3; i++) {
            String pisah = input2.substring(k,k+3);
            k+=3;
            int convert = Integer.parseInt(pisah);
            for(int j = 0; j<input1.length(); j++) {
                if(convert-1==j) {
                    System.out.print(input1.charAt(j));
                }
            }
        }
    }
}
