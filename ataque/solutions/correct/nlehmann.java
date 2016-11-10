import java.util.*;
import java.io.*;

public class nlehmann {
    static public void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int X = 0, Y = 0;
        for (int i = 0; i < N; ++i) {
            int A = in.nextInt();
            int D = in.nextInt();
            if (A <= D) X++;
            else Y++;
        }
        System.out.println(X + " " + Y);
    }
}
