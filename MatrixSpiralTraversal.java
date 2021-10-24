import java.io.*;
import java.util.*;
class MatrixSpiralTraversal
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}// } Driver Code Ends


class Solution{
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
         ArrayList<Integer> res=new ArrayList<>();
        // code here 
        int minrow=0,mincol=0;
        int maxrow=r-1,maxcol=c-1;
        int counter=0;
        while(counter<r*c)
        {
            
            if(counter==r*c)
             break;
            else{
            for(int col=mincol;col<=maxcol;col++)
            {
                res.add(matrix[minrow][col]);
                counter++;
                //System.out.println(matrix[minrow][col]);
            }
            }
              minrow++;
             if(counter==r*c)
             break;
            else{
          for(int row=minrow;row<=maxrow;row++)
          {   res.add(matrix[row][maxcol]);
               counter++;
              //System.out.println(matrix[row][maxcol]);
          }
           }
          maxcol--;
          if(counter==r*c)
             break;
            else{
          for(int col=maxcol;col>=mincol;col--)
          {   res.add(matrix[maxrow][col]);
          counter++;
              //System.out.println(matrix[maxrow][col]);
          }
            }
          maxrow--;
          if(counter==r*c)
             break;
            else{
          for(int row=maxrow;row>=minrow;row--)
          {    res.add(matrix[row][mincol]);
                counter++;
            //  System.out.println(matrix[row][mincol]);
          }
            }
            
           mincol++;
        }
        return res;
    }
}
