You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is

[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:

[
    [3, 1],
    [4, 2]
]





/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void rotate(int** A, int n11, int n12) {
    int i,j,temp;
     for(i=0;i<n11/2;i++)
    {
        for(j=i;j<n12-1-i;j++)
        {
            temp=*(*(A+i)+j);
            *(*(A+i)+j)=*(*(A+n12-1-j)+i);
            *(*(A+n12-1-j)+i)=*(*(A+n11-1-i)+n12-1-j);
            *(*(A+n11-1-i)+n12-1-j)=*(*(A+j)+n11-1-i);
            *(*(A+j)+n11-1-i)=temp;
        }
    }
}
