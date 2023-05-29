import java.util.Scanner;

public class JudgingMoose {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int l = keyboard.nextInt();
        int r = keyboard.nextInt();
        if(l==r && (l|r)!=0) {
            System.out.println("Even " + (l*2));
        }
        else if(l>r && l%2!=0) {
            System.out.println("Odd " + (l*2));
        }
        else if(r>l  && r%2!=0) {
            System.out.println("Odd " + (r*2));
        }
        else if(l>r) {
            System.out.println("Odd " + (l*2));
        }
        else if(r>l) {
            System.out.println("Odd " + (r*2));
        }
        else if(l==0 && r==0){
            System.out.println("Not a moose");
        }
    }
}
