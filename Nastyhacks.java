import java.util.Scanner;

public class Nastyhacks {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int input = keyboard.nextInt();
        int [] tampung1 = new int[input];
        int [] a = new int[input];
        for(int i = 0; i<input; i++) {
            a [i] = keyboard.nextInt();
            int b = keyboard.nextInt();
            int c = keyboard.nextInt();
            tampung1[i] = b - c;
        }
        for(int i = 0; i<input; i++) {
            if(a[i]==tampung1[i]) {
                System.out.printf("does not matter\n");
            }
            else if(tampung1[i]>a[i]) {
                System.out.printf("advertise\n");
            }
            else if(a[i]>tampung1[i]) {
                System.out.printf("do not advertise\n");
            }
        }
    }
}
