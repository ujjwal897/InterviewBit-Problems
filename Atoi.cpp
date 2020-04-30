Implement atoi to convert a string to an integer.

Example :

Input : "9 2704"
Output : 9


 Questions: Q1. Does string contain whitespace characters before the number?
A. Yes Q2. Can the string have garbage characters after the number?
A. Yes. Ignore it. Q3. If no numeric character is found before encountering garbage characters, what should I do?
A. Return 0. Q4. What if the integer overflows?
A. Return INT_MAX if the number is positive, INT_MIN otherwise. 





int Solution::atoi(const string A) {
        int n=A.size();
    int i=0;
    while(A[i]==' '){
        i++;
    }
    int cm=1;
    if(A[i]=='-'||A[i]=='+'){
        cm=A[i]=='+'?1:1;
        cm=A[i]=='-'?-1:1;
        
        i++;
    }
    if(A[i]<'0'||A[i]>'9')
        return 0;
    int sum=0;
    long long int sum1=0;
    while(A[i]!='\0' && A[i]!=' '){
        int n=(int)A[i]-48;
        sum1=sum1*10+n;
        sum=sum*10+n;
        i++;
    if(A[i]<'0'||A[i]>'9')
        break;
    }
            
      if(sum1!=sum&&cm==1)
        return INT_MAX;
        
        
      if(sum1!=sum&&cm==-1)
        return INT_MIN;
    if(cm==-1){
        int k=-sum;
        return k;
    }
    return sum;
}
