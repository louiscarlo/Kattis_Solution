import java.util.Scanner;

public class CprNummer {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int hasil = 0;
        Long bantuan = 0L;
        String input = keyboard.nextLine();
        String[] pisah = input.split("\\-");
        String sambung = pisah[0].concat(pisah[1]);
        Long convert = Long.parseLong(sambung);
        for(int i = 1; i<=sambung.length(); i++) {
            if(i==1) {
                bantuan = convert % 10;
                bantuan*=1;
                convert/=10;
            }
            else if(i==2) {
                bantuan = convert % 10;
                bantuan*=2;
                convert/=10;
            }
            else if(i==3) {
                bantuan = convert % 10;
                bantuan*=3;
                convert/=10;
            }
            else  if(i==4) {
                bantuan = convert % 10;
                bantuan*=4;
                convert/=10;
            }
            else if(i==5) {
                bantuan = convert % 10;
                bantuan*=5;
                convert/=10;
            }
            else if(i==6) {
                bantuan = convert % 10;
                bantuan*=6;
                convert/=10;
            }
            else if(i==7) {
                bantuan = convert % 10;
                bantuan*=7;
                convert/=10;
            }
            else if(i==8) {
                bantuan = convert % 10;
                bantuan*=2;
                convert/=10;
            }
            else if(i==9) {
                bantuan = convert % 10;
                bantuan*=3;
                convert/=10;
            }
            else if(i==10) {
                bantuan = convert % 10;
                bantuan*=4;
                convert/=10;
            }
            hasil+=bantuan;
        }
        if(hasil % 11 ==0) {
            System.out.println(1);
        }
        else {
            System.out.println(0);
        }
    }
}
