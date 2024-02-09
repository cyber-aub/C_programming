// Binary Search

#include <stdio.h>

int main()
{
    int i, item_to_search, n=8;
    int array[10]={34, 42, 51, 68, 69, 73, 88, 92};
    int start=0, end=n, mid;

    printf("\nEnter element to be searched: ");
    scanf("%d", &item_to_search);

    // Binary Search 

    while (start<=end)
    {
        mid=(start+end)/2;
        if (array[mid]==item_to_search)
        {
            printf("\nElement %d found at index %d!\n", item_to_search, mid);
            break;
        }
        else if (array[mid]<item_to_search)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    if (start>end)
    {
        printf("\nElement %d not found!\n", item_to_search);
    }

}
