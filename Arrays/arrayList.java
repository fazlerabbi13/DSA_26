import java.util.ArrayList;

public class arrayList {
    public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();

        arr.add("ali");
        arr.add("abbas");
        arr.add("ahmed");

        arr.add(1,"robi");

        arr.remove(0);
        System.out.println(arr);
    }
}
