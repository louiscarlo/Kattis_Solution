import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;
import java.util.Scanner;

public class AlphabetSpam {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String input = keyboard.nextLine();
        float jumlahBesar = 0;
        float jumlahKecil = 0;
        float jumlahSpasi = 0;
        float jumlahSimbol = 0;
        float panjang = input.length();
        for(int i = 0; i<input.length(); i++) {
            if(input.charAt(i)>=65 && input.charAt(i)<=90) {
                jumlahBesar++;
            }
            else if(input.charAt(i)>=97 && input.charAt(i)<=122) {
                jumlahKecil++;
            }
            else if(input.charAt(i)=='_') {
                jumlahSpasi++;
            }
            else{
                jumlahSimbol++;
            }
        }
        MathContext mc = new MathContext(15);
        BigDecimal k = new BigDecimal(jumlahKecil);
        BigDecimal p = new BigDecimal(panjang);
        BigDecimal kecil = k.divide(p,mc);
        BigDecimal s = new BigDecimal(jumlahSpasi);
        BigDecimal spasi = s.divide(p,mc);
        BigDecimal b = new BigDecimal(jumlahBesar);
        BigDecimal besar = b.divide(p,mc);
        BigDecimal sl = new BigDecimal(jumlahSimbol);
        BigDecimal simbol = sl.divide(p,mc);
        System.out.println(spasi);
        System.out.println(kecil);
        System.out.println(besar);
        System.out.println(simbol);
    }
}
