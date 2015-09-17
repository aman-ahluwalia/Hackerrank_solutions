import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) throws Exception{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int t;
        BufferedReader rd = new BufferedReader(new InputStreamReader(System.in));
        t = Integer.parseInt(rd.readLine());
        while(t>0) {
            int n,ans;
            n = Integer.parseInt(rd.readLine());
            if(n==0 || n==1)
                ans = 0;
            else {
                ans = (n*(n-1))/2;
            }
            System.out.println(ans);
            t--;
        }
    }
}
