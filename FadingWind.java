import java.util.Scanner;

public class FadingWind {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int h = keyboard.nextInt();
        int k = keyboard.nextInt();
        int v = keyboard.nextInt();
        int s = keyboard.nextInt();
        int hasil = 0;
        int tampung1 = v;
        while(h>0) {
            tampung1+=s;
            int max = 0;
            float tampung = (float) tampung1/10;
            int pembulatan = (int) Math.ceil(tampung);
            max = (int) Math.max(1,pembulatan);
//            if(tampung%2==0 || (tampung+1)%2==0) {
//                max = (int) Math.max(1,tampung);
//            }
//            else{
//                int pembulatan = (int) Math.round(tampung);
//                max = Math.max(1,pembulatan);
//            }
            tampung1-=max;
            if(tampung1>=k) {
                h+=1;
            }
            if(tampung1>0 && tampung1<k) {
                h-=1;
                if(h==0) {
                    tampung1 = 0;
                }
            }
            if(tampung1<=0) {
                h = 0;
                tampung1 = 0;
            }
            hasil+=tampung1;
            if(s>0) {
                s-=1;
            }
        }
//        System.out.println(h+k+v+s);
        System.out.println(hasil);

    }
}
