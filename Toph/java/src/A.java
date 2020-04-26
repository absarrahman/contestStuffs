import java.util.*;
import java.util.concurrent.TimeUnit;

public class A {
    public static void main(String[] args) {
        long startTime = System.nanoTime();
        Scanner sc = new Scanner(System.in);
        System.out.println(calculate(sc.nextInt(), sc.nextInt()));
        long endTime   = System.nanoTime();
        long totalTime = endTime - startTime;
        totalTime = TimeUnit.SECONDS.convert(totalTime, TimeUnit.NANOSECONDS);
        System.out.println("Time required = "+totalTime);

    }

    /**
     * This is the method that actually does the calculations.
     * <p>
     * We provide you this method that way we can test it with unit testing.
     */
    public static double calculate(int size, int count) {
        // TODO -- add your code here

        /*
        take number of simulations
        run simulations
         */

        //int nSimArr[] = new int[count];
        int sum = 0;
        Random number = new Random();
        for(int i = 0;i < count;i++){
            number.setSeed(i+1);
            sum+=sim(number,size);
        }
        //  System.out.println(sum);

        double percentage = (sum*1.0)/(count*1.0)*100.0;

        return percentage;
    }
    // TODO - add your code here
    public static int sim(Random number,int size){ // returns 1 if exists else 0
        Map<Integer,Integer> m= new HashMap<>();

        for (int i = 1;i <= size;i++){
            int x = number.nextInt(365);
            // System.out.println(x);
            Integer count = m.get(x);
            //  System.out.println(m.containsKey(x));
            if(m.containsKey(x)){
                m.put(x,count+1);
            } else {
                m.put(x,1);
            }
        }

        for (Map.Entry<Integer,Integer> entry : m.entrySet()){
            //  System.out.println("Get key"+entry.getValue());
            if(entry.getValue()>1){
                return 1;
            }
        }
        return 0;
    }
}
