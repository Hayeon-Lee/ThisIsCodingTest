import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String s = bf.readLine();
        StringTokenizer st = new StringTokenizer(s);
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        String na = bf.readLine();
        st = new StringTokenizer(na);
        int array[] = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = Integer.parseInt(st.nextToken());
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0 ; j < N - 1; j++) {
                if (array[j] < array[j + 1]) {
                    int tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;
                }
            }
        }
        int maximum = array[0];
        int minimum = array[1];

        int sum = 0;
        int flag = 1;
        while (M > 0) {
            if (flag == 1) {
                for (int i = 0; i < K; i++) {
                    sum += maximum;
                    M--;
                    if (M == 0) break;
                }
            } else {
                sum += minimum;
                M--;
                if (M == 0) break;
            }
            flag *= -1;

        if (M == 0) break;
        }
        System.out.println(sum);
    }
}
