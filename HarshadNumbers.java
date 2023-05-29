import java.util.Scanner;

public class HarshadNumbers {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int bantuan = n;
        int jumlah = 0;
        while(n>0) {
            int tampung = n%10;
            jumlah+=tampung;
            n/=10;
            if(n==0 && bantuan % jumlah == 0) {
                n = bantuan;
                break;
            }
            else if(n==0 && bantuan % jumlah != 0){
                bantuan++;
                n = bantuan;
                jumlah = 0;
            }
        }
        System.out.println(bantuan);
    }
}
