import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase=sc.nextInt();
        int ok=1;
        sc.nextLine();
        while(ok<=testCase){
            String s1 = sc.nextLine();
            char[] arr = s1.toCharArray();
            int c = 0;
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] != '/') {
                    c++;
                }
            }
            char[] nArr = new char[c];
            int index = 0;
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] != '/') {
                    nArr[index] = arr[i];
                    index++;
                }
            }
            String s = new String(nArr);
            int i=0, j=0;
            for (i = 0, j = s.length() - 1; i < s.length() && j >= 0; i++, j--) {
                if (s.charAt(i) != s.charAt(j)) {
                    break;
                }
            }
            if (i > j) {
                System.out.println("Palindrome");
            } else {
                System.out.println("Not Palindrome");
            }
            ok++;
        }

    }
}
