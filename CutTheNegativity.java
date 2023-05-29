import java.util.Scanner;

public class CutTheNegativity {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[][] input = new int[n][n];
        int banyak = 0;
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                input[i][j] = keyboard.nextInt();
                if(input[i][j]!=-1) {
                    banyak++;
                }
            }
        }
        System.out.println(banyak);
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                if(input[i][j]!=-1) {
                    System.out.println((i+1) + " " + (j+1) + " " + input[i][j]);
                }
            }
        }
    }
}
