import java.util.Scanner;

public class NumberFun {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] one = new int [n];
        for(int i = 0; i<n; i++) {
            one[i] = 0;
            int a = keyboard.nextInt();
            int b = keyboard.nextInt();
            int c = keyboard.nextInt();
            float tampung1 = (float) a/b;
            float tampung2 = (float) b/a;
            if(a+b==c) {
                one[i] = 1;
            }
            else if(a-b==c || b-a==c) {
                one[i] = 1;
            }
            else if(a*b==c) {
                one[i] = 1;
            }
            else if(tampung1==c || tampung2==c) {
                one[i] = 1;
            }
        }
        for(int i = 0; i<n; i++) {
            if(one[i]==1) {
                System.out.println("Possible");
            }
            else{
                System.out.println("Impossible");
            }
        }
    }
}
