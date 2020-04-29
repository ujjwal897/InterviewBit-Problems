Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example

m : 6
n : 9

GCD(m, n) : 3 





/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B) 
{
    int i,g=A>B?A:B;
    int s=A<B?A:B;
    if(s==0)
    return g;
    for(i=s;i>=1;i--)
    {
        if(g==0)
        break;
        
        if(g%i==0 && s%i==0)
        break;
    }
    return i;
}
