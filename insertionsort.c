#include<stdio.h>
void main()
{
    int n,i,j,temp;
    printf("enter the number of values");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i;j>0;j--)
        {
            if(a[j-1]>temp)
            {
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

}
