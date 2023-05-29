import java.util.Scanner;

public class Everywhere {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int t = keyboard.nextInt();
        int [] hasil = new int[t];
        for(int i = 0; i<t; i++) {
            hasil[i] = 0;
            int a = keyboard.nextInt();
            keyboard.nextLine();
            String[] input = new String[a];
            for(int j = 0; j<a; j++) {
                input[j] = keyboard.nextLine();
                int c = 0;
                for(int k = 0; k<j; k++) {
                    if(input[j].equals(input[k])) {
                        c = 1;
                        break;
                    }
                }
                if(c!=1) {
                    hasil[i]++;
                }
            }
        }
        for(int i =0; i<t; i++) {
            if(i==t-1) {
                System.out.print(hasil[i]);
            }
            else {
                System.out.println(hasil[i]);
            }
        }
    }
}
