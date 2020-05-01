Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]





public class Solution {
    public int[][] solve(int A) {
        int i,j,arr[][]=new int[A][];
        for(i=0;i<A;i++)
            arr[i]=new int[i+1];
        for(i=0;i<A;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                    arr[i][j]=1;
                else
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
        return arr;
    }
}
