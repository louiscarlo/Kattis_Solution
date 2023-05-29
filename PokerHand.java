import java.util.Arrays;
import java.util.Scanner;

public class PokerHand {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int hasil = -1;
        int[] banyak = new int[5];
        String[] tampung = new String[5];
        String[] input = keyboard.nextLine().split(" ");
        for(int i = 0; i<5; i++) {
            tampung[i] = input[i];
        }
        for(int i = 0; i<5; i++) {
            banyak[i] = 1;
            for(int j = 0; j<5; j++) {
                if(i==j) {
                    continue;
                }
                else{
                    if(tampung[i].charAt(0)==tampung[j].charAt(0)) {
                        banyak[i]++;
                    }
                }
            }
        }
        for(int i = 0; i<5; i++) {
            if(hasil < banyak[i]) {
                hasil = banyak[i];
            }
        }
        System.out.println(hasil);
    }
}
