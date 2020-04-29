Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer





/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int reverse(int A) {
    long long res=0;
    while(A){
        res=res*10+A%10;
        if(res>INT_MAX||res<INT_MIN) return 0;
        A=A/10;
    }
    return res;
}