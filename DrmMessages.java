import java.util.Scanner;

public class DrmMessages {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        String[] bagi = new String[2];
        int[] jumlah = new int[2];
        String[] bantuan = new String[2];
        int kelipatan = 0;
        int panjang = input.length();
        for(int i = 0; i<2; i++) {
            bagi[i]  = input.substring(kelipatan,kelipatan+(panjang/2));
            kelipatan+=(panjang/2);
        }
        for(int i = 0; i<2; i++) {
            jumlah[i] = 0;
            for(int j = 0; j<bagi[i].length(); j++) {
                jumlah[i]+= (bagi[i].charAt(j)-65);
            }
        }
        for(int i = 0; i<2; i++) {
            bantuan[i] = "";
            for(int j = 0; j<bagi[i].length(); j++) {
                int tampung = (int)bagi[i].charAt(j) - 65;
                tampung+=jumlah[i];
                int tampung1 = tampung % 26;
                char convert = (char) ((char) tampung1 + 65);
                String str = String.valueOf(convert);
                bantuan[i]+=str;
            }
        }
        String hasil = "";
        for(int i = 0; i<bantuan[0].length(); i++) {
            int tampung = (int) bantuan[0].charAt(i) - 65;
            tampung += (int) (bantuan[1].charAt(i) - 65);
            tampung %= 26;
            char convert = (char) ((char) tampung + 65);
            hasil += String.valueOf(convert);
        }
        System.out.println(hasil);
    }
}
