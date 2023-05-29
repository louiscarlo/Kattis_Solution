import java.util.Scanner;

public class Planina {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int input = keyboard.nextInt();
        int kali = 1;
        for(int i = 0; i<input; i++) {
            kali*=4;
        }
        int bantuan = 5;
        int a = 4;
        if(input>1) {
            for(int i = 0; i<input-1; i++) {
                bantuan+=a;
                a*=2;
            }
            kali+=bantuan;
        }
        else{
            kali+=bantuan;
        }
        System.out.println(kali);
    }
}
