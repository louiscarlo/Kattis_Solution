import java.util.Scanner;

public class EstimatingtheAreaofaCircle {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        float[] hasil1 = new float[1000];
        float[] hasil2 = new float[1000];
        int banyak = 0;
        for(int i = 0; i<1000; i++) {
            float r = keyboard.nextFloat();
            int m = keyboard.nextInt();
            int c = keyboard.nextInt();
            if(r==0 && m==0 && c==0) {
                break;
            }
            else{
                banyak++;
                hasil1[i] = (float) (3.141592654 * (r * r));
                hasil2[i] = (float) ((r * 2) * (r*2) * c / m);
            }
        }
        for(int i = 0; i<banyak; i++) {
            System.out.printf("%.8f ",hasil1[i]);
            System.out.printf("%.8f\n",hasil2[i]);
        }
    }
}
