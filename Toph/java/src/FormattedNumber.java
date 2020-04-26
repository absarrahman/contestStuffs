import java.util.*;

public class FormattedNumber {
    public static void main(String[] args) {
        //String val = numberFormat(x);
       // val=numberFormat(val);
        Generico<Integer> a = new Generico<>(12);
        Generico<String> b = new Generico<>("Hi");
        a.print();
        b.print();
    }

    /*public static String numberFormat(String s){
        int position=s.length()-3;
        while(position>0){
            s = new StringBuilder(s).insert(position, ",").toString();
            position=position-3;
        }
        return s;
    }*/

    public static String numberFormat(int x){
        if(x<1000) {
            return Integer.toString(x);
        }
        int y=x%1000;
        return numberFormat(x/1000)+","+y;
    }

}

class LightOj1022 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();

        for (int i = 1; i <=test ; i++) {
            double r = sc.nextDouble();
            double circle= 2*Math.acos(0.0)*r*r;
            double square= (r+r)*(r+r);
            double area = square-circle;
            System.out.printf("Case %d: %.2f\n",test,area);
        }

    }
}