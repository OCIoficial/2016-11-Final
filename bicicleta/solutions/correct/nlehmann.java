import java.util.*;
import java.io.*;

public class nlehmann {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(in.readLine());
        int N = Integer.parseInt(st.nextToken());
        int F = Integer.parseInt(st.nextToken());
        int slopes[] = new int[N];

        st = new StringTokenizer(in.readLine());
        for (int i = 0; i < N; ++i)
            slopes[i] = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(in.readLine());
        for (int i = 0; i < F; ++i) {
            int slope;
            slope = Integer.parseInt(st.nextToken());

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
