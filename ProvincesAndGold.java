import java.util.Scanner;

public class ProvincesAndGold {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int g = keyboard.nextInt();
        int s = keyboard.nextInt();
        int c = keyboard.nextInt();
        int hasil = (g*3) + (s*2) + (c*1);
        if(hasil>=0 && hasil<2) {
            System.out.printf("Copper\n");
        }
        else if(hasil==2) {
            System.out.printf("Estate or Copper\n");
        }
        else if(hasil>=3 && hasil<5) {
            System.out.printf("Estate or Silver\n");
        }
        else if(hasil==5) {
            System.out.printf("Duchy or Silver\n");
        }
        else if(hasil>=6 && hasil<8) {
            System.out.printf("Duchy or Gold\n");
        }
        else if(hasil>=8) {
            System.out.printf("Province or Gold\n");
        }
    }
}
