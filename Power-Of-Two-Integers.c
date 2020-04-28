Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True  
as 2^2 = 4. 





/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPower(int A) {
    int n=0,p=0,i,j;
    for(i=2;i<A;i++)
    {
        j=1;
        while(pow(i,j)<=A)
        {
            if(pow(i,j)==A)
            {
                n=i;
                p=j;
                break;
            }
            j++;
        }
    }
    if(n!=0)
    return 1;
    else
    return 0;
}
