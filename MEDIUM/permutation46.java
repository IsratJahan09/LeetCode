package leetcode.problem;

import java.util.Scanner;

public class permutation46 {
    
    static void swap(char[] a, int i, int j) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    static void permutation(char[] a, int fi) {
        int n = a.length;
        if (fi == n - 1) {
            System.out.println((a));
            return;
        }
        for (int i = fi; i < n; i++) {
            swap(a, i, fi);
            permutation(a, fi + 1);
            swap(a, i, fi);
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        permutation(s.toCharArray(), 0);
    }
}
