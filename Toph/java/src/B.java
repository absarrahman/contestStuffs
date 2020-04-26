import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class B {

}
class probability
{
    public static void main(String[] args) {
        long startTime = System.nanoTime();
        Scanner sc = new Scanner(System.in);
        System.out.println(calculate(sc.nextInt(), sc.nextInt()));
        long endTime   = System.nanoTime();
        long totalTime = endTime - startTime;
        totalTime = TimeUnit.SECONDS.convert(totalTime, TimeUnit.NANOSECONDS);

        System.out.println("Time required = "+totalTime);

    }
    public static double calculate(int size, int count) {
        // TODO -- add your code here
        // count arttır, iki kişi aynı doğum gününe sahip olursa
        int dup = 0;
        Random random = new Random();
        for (int i = 0; i <count ; i++) {
            random.setSeed(i+1);
            int [] arrays = new int[size];
            for (int j = 0; j <arrays.length ; j++)
            {
                arrays[j] = random.nextInt(365);

            }
            if (checkElements(arrays) == 1)
            {
                dup++;
            }

        }
        return (double) dup/count*100;
    }
    public static double checkElements (int [] size)
    {
        for (int i = 0; i <size.length ; i++) {
            for (int j = i+1; j < size.length ; j++) {
                if (size[i] == size[j])
                {
                    int result = 1;
                    return result;

                }
            }

        }
        return 0;
    }
}