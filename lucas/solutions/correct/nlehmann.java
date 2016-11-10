import java.util.*;
import java.io.*;

public class nlehmann {
    static public void main (String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();

        int[] first = new int[N];
        for (int i = 0; i < N; ++i)
            first[i] = in.nextInt();

        int[] second = new int[M];
        for (int i = 0; i < M; ++i)
            second[i] = in.nextInt();

        int P = 0, i = 0;
        while (i < Math.min(N, M) && first[i] == second[i]) {
            ++P;
            ++i;
        }

        int S = 0;
        i = 0;
        while (i < Math.min(N, M) && first[N-i-1] == second[M - i - 1]) {
          ++S;
          ++i;
        }
        System.out.println(M - Math.min(N, Math.min(M, P+S)));
    }
}
