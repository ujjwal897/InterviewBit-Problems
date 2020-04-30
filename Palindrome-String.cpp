Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem





int isAlphaNumeric(char c){
    if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
     return 1;
    return 0;
}
   
int Solution::isPalindrome(string A) {
     int i=0,len=0;
    while(A[len]!='\0'){
     len++;
    }
    int j=len-1;
    while(i<=j){
        if(!isAlphaNumeric(A[i])){
         i++;
         continue;
        }
        else if(!isAlphaNumeric(A[j])){
         j--;
         continue;
        }
        else if(A[i]!=A[j]&&abs(A[i]-A[j])!=32)
         return 0;
        
        i++;j--;
    }
    return 1;
}
