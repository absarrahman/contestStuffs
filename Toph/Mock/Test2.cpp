import java.util.Scanner;
public class Polygon{
  public static void main(String[]args){
    Scanner sc= new Scanner(System.in);
    int testCase= sc.nextInt();
    sc.nextLine();
    for(int i=1; i<=testCase; i++){
      int n=sc.nextInt();
      int totalAngle=(n-2)*180;
      System.out.println(totalAngle/n);
    }
    sc.close();
  }
}
