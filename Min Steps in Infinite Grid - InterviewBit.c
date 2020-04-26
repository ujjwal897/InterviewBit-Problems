/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
int coverPoints(int* A, int n1, int* B, int n2) 
{
    int i,am,bm,m,sum=0;
    for(i=0;i<n1-1;i++)
    {
        am=A[i+1]-A[i];bm=B[i+1]-B[i];
        if(am<0)
            am=-am;
        if(bm<0)
            bm=-bm;
        m=am>bm?am:bm;
        sum+=m;
    }
    return sum;
}
