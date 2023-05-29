import java.util.Scanner;

public class HeartRate {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        float[] min = new float[n];
        float[] asli = new float[n];
        float[] max = new float[n];
        for(int i = 0; i<n; i++) {
            int b = keyboard.nextInt();
            float p = keyboard.nextFloat();
            min[i] = (float) 60 * (b - 1) / p;
            asli[i] = (float) 60 * (b) / p;
            max[i] = (float) 60 * (b + 1) / p;
        }
        for(int i = 0; i<n; i++) {
            System.out.printf("%.4f %.4f %.4f\n",min[i],asli[i],max[i]);
        }
    }
}
