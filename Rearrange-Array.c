Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]





/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void arrange(int* arr, int n1)  {
    int res[n1],i;
    for(i=0;i<n1;i++)
        res[i]=arr[arr[i]];
    for(i=0;i<n1;i++)
        *(arr+i)=res[i];
}
