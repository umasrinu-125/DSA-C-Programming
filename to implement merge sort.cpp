#include<stdio.h>
void merge(int array[],int low,int mid,int high)
{
	int b[10];
	int i=low,j= mid+1, k=0;
	while(i<=mid && j<=high)
	{
		if (array[i]<array[j])
		{
			b[k]=array[i];
			i++;
		}
		else
		{
			b[k]=array[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=array[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=array[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	array[i]=b[k];
}
void mergesort(int array[],int left,int right)
{
	if(left<right)
	{
		int mid = (left+right)/2;
		mergesort(array,left,mid);
		mergesort(array,mid+1,right);
		merge(array,left,mid,right);
	}
}
int main()
{
	int a[25],i,n;
	printf("how many elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("sorted array : \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
	
}
