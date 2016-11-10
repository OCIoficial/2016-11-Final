import java.util.*;
import java.io.*;

public class nlehmann_scanner {
    static public void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int F = in.nextInt();
        int slopes[] = new int[N];

        for (int i = 0; i < N; ++i)
            slopes[i] = in.nextInt();

        for (int i = 0; i < F; ++i) {
            int slope;
            slope = in.nextInt();

            int l = 0, r = N;
            while (l < r) {
                int m = (l + r)/2;
                if (slope > slopes[m])
                    r = m;
                else
                    l = m + 1;
            }

            System.out.println(l);
        }
    }
}
