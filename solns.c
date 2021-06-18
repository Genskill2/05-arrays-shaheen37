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

int mode(int arr[],int count)
{
    int maxval = 0, maxcount =0, i,j;
    for(i=0;i<count;i++)
    {
        int cc=0;
        for(j=0;j<count;j++)
        {
            if(arr[j]==arr[i])
            {cc++;}

        }
        if(cc>maxcount)
        {
            maxcount=cc;
            maxval=arr[i];
        }   
    }

    return maxval;
}
