import java.util.Scanner;

public class IsItHalloween {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String bulan = keyboard.nextLine();
        if(bulan.equals("OCT 31") || bulan.equals("DEC 25")) {
            System.out.printf("yup\n");
        }
        else {
            System.out.printf("nope\n");
        }
    }
}
