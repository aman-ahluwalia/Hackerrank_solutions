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
            int pair;
            pair = Integer.parseInt(rd.readLine());
            System.out.println(pair+1);
            t--;
        }
    }
}
