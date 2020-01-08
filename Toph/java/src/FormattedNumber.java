import java.util.Scanner;

public class FormattedNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        String val = numberFormat(x);
       // val=numberFormat(val);
        System.out.println(val);
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
