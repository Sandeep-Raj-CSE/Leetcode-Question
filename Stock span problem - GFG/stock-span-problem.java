//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class gfg
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n =sc.nextInt();
            int a[] = new int[n];
            
            int i = 0;
            for(i = 0; i < n; i++)
              a[i] = sc.nextInt();
              
            int[] s = new Solution().calculateSpan(a, n);
            
            for(i = 0; i < n; i++)
            {
                System.out.print(s[i] + " ");
            }
            
            System.out.println();
        }
    }
    
    
    
}
// } Driver Code Ends



class Solution
{
    //Function to calculate the span of stockâ€™s price for all n days.
    public static int[] calculateSpan(int prices[], int n)
    {
        // Your code here
          int[]span=new int[n];

        span[0]=1;//span of first element is always 1

        

        Stack<Integer> s=new Stack<>();

        

        //push the index of the first element

        s.push(0);

        

        for(int i=1;i<prices.length;i++){

            while(!s.isEmpty() &&prices[s.peek()]<=prices[i])

            s.pop();

            

            if(s.isEmpty())

                span[i]=i+1;

            else

                span[i]=i-s.peek();

                

            s.push(i);

        }

        return span;

    }
    
}