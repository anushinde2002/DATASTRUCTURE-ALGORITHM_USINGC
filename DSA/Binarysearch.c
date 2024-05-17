#include<stdio.h>
#include<conio.h>
int main()
{
    int first,last,middle,n,i,find,a[100];
    setbuf(stdout,NULL);
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter n elements in Ascending order:\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter value to be search:\n");
    scanf("%d",&find);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(a[middle]<find)
         first=middle+1;
        else if(a[middle]==find)
        {
            printf("Elements found at index %d\n",middle);
            break;

        }
        else
         last=middle-1;
         middle=(first+last)/2;

    }
    if(first>last)
     printf("Elements not found in the list");
     return 0;
}


