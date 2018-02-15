#include<stdio.h>
void main()
{
	int a[100],temp=0,n;
	printf("Enter the number of elements elements in an array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		temp=temp^a[i];
	printf("The non repeating number is: %d",temp);
}
