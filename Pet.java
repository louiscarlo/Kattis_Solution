import java.util.Scanner;

public class Pet {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int [] tampung = new int[5];
        for(int i = 0; i<5; i++) {
            tampung[i]=0;
            for(int j = 0; j<4; j++) {
                int a = keyboard.nextInt();
                tampung[i]+=a;
            }
        }
        int bantuan = 0;
        int tambah = 0;
        for(int i = 0; i<5; i++) {
            if(bantuan<tampung[i]) {
                tambah = i+1;
                bantuan = tampung[i];
            }
        }
        System.out.println(tambah + " " + bantuan);
    }
}
