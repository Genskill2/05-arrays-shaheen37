/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[],int count)
{
    int max = arr[0];
    for(int i=0;i<count;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[],int count)
{
    int min = arr[0];
    for(int i=0;i<count;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

float average(int arr[],int count)
{
    float avv = 0;
    for(int i=0;i<count;i++)
    {    
    avv+=arr[i];
    }

    avv/=count;
    return avv;
}
