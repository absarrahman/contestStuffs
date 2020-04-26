public class Generico<T> {
    private T output;

    public Generico(T output){
        this.output=output;
    }

    public void print(){
        System.out.println(output);
    }
}
