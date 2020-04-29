Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False





/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPalindrome(int A) {
    int a,b=0,c;
    c=A;
    while(c>0)
    {
        a=c%10;
        b=b*10+a;
        c=c/10;
    }
    if(A==b)
    return 1;
    else
    return 0;
}
