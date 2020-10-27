import java.util.*;
public class Solution
	{
    public static int GlassDrop(int P, int F) {
        return dp(P, F);
    }
    @SuppressWarnings("unchecked")
    public static int dp(int P, int F) {
        Map<Integer, Integer> glassm = new HashMap();
        if (!glassm.containsKey(F * 100 + P)) {
            int ans;
            if(F==0)
                ans =0;
            else if (P == 1)
                    ans = F;
            else {
                int lo = 1, hi = F;
                while (lo + 1 < hi) {
                    int x = (lo + hi) / 2;
                    int t1 = dp(P-1, x-1);
                    
                    int t2 = dp(P, F-x);
                    

                    if (t1 < t2)
                        lo = x;
                    else if (t1 > t2)
                        hi = x;
                    else
                        lo = hi = x;
                }

                ans = 1 + Math.min(Math.max(dp(P-1, lo-1), dp(P, F-lo)),
                                   Math.max(dp(P-1, hi-1), dp(P, F-hi)));
            }

            glassm.put(F * 100 + P, ans);
           
        }

        return glassm.get(F * 100 + P);
    }
    public static void main(String[] args) {
        int t;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        while(t>0){
            int M,F,fallingM;
            M=scan.nextInt();
            F=scan.nextInt();
            fallingM=GlassDrop(M,F);
            System.out.println(fallingM);
            t--;
        }

     }
    }

