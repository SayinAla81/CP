import java.util.*;
import static java.lang.System.out;

public class D {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t > 0){
            int n = in.nextInt(), ans = 1;
            String[] s = in.next().split("W");
            for(int i = 0; i < s.length; i++){
                int mark = 0;
                for(int j = 1; j < s[i].length(); j++)
                    if(s[i].charAt(j) != s[i].charAt(j - 1))
                        mark = 1;
                if(mark == 0 && s[i].length() > 0)
                    ans = 0;
            }
            out.println((ans == 1 ? "YES" : "NO"));
            t--;
        }
    }
}
