#include <stdio.h>
int main()
{
    int a[100];
    int i,x,pos,n;
    printf("Enter any values:\n");
    scanf("%d",&n);
    printf("\nEnter %d values:",n);
    for (i=0;i<n;i++)
    {
    scanf("\n%d",&a[i]);
	}
    printf("Enter value to be inserted:");
    scanf("%d",&x);
 	printf("Enter the position to be inserted:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
	    a[i+1]=a[i];
	}
    a[pos-1]=x;
    for(i=0;i<=n;i++)
    printf("\n%d",a[i]);
}