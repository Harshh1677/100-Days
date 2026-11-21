Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n, i,j,newelement;
    scanf("%d", &n);
    int arr[n+1];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
scanf("%d",&newelement);

    for(i=0;i<n;i++)
    {
        if(arr[i]>newelement)
        {
            for(j=n;j>i;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i]=newelement;
            break;
        }
    }
    if(i==n)
    {
        arr[n]=newelement;
    }
    for(i=0;i<=n;i++)
    printf("%d ",arr[i]);
    return 0;
}
