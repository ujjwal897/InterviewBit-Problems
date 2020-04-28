Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 





/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* primesum(int A, int *len1) 
{
    int a=2,q=0;
    len1=(int *)malloc(sizeof(int)*2);
    len1=&a;
    //printf("%d\n",*len1);
    int i,j,flag=0,p1,p2;
      for(i=2;i<=A/2;i++)
        {
            flag=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                for(j=2;j<=(A-i)/2;j++)
                {
                    if((A-i)%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    p1=i;
                    p2=A-i;
                   // printf("%d %d \n",p1,p2);
                    //goto x;
                    break;
                }
            }
        }
    printf("%d %d ",p1,p2);
    return 0;
}
