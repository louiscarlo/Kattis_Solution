import java.util.Scanner;

public class FiftyShades {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        keyboard.nextLine();
        int hasil = 0;
        for(int i = 0; i<n; i++) {
            String input = keyboard.nextLine();
            String kecil = input.toLowerCase();
            if(kecil.contains("pink") || kecil.contains("rose")) {
                hasil++;
            }
        }
        if(hasil>0) {
            System.out.println(hasil);
        }
        else{
            System.out.printf("I must watch Star Wars with my daughter\n");
        }
    }
}
