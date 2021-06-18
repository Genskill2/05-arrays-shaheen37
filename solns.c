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
    int max = arr[0];
    for(int i=0;i<count;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int modearr[max];
    for (int i=0;i<max;i++)
    {
        for(int k=0;k<count;k++)
        {
            if (arr[k]==i)
            {
                modearr[i]++;
            }
        }

    }

    int model = modearr[0];
    for(int i=0;i<max;i++)
    {
        if(arr[i]>mode)
        {
            model=arr[i];
        }
    }
    return model;

}
