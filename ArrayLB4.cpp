#include<iostream>
#include<stdio.h>
#include <numeric>

using namespace std;

float getMax(float a[],int n)

{
 float resv =a[0];
 for(int i=0;  i<n;  i++)
   resv = max(resv,a[i]);
    return resv;


}
float getMin(float a[],int n)

{
 float resv =a[0];
 for(int i=0;  i<n;  i++)
   resv = min(resv,a[i]);
 return resv;


}
void  range(float a[], int n)
{
    float max =getMax(a,n);
    float min =getMin(a,n);
    float range = max -min;
    cout<< "range is"<<range;

}

int main()
{
    float a[]={2,4,8,45,8};
     int size;
     size= sizeof(a)/sizeof(a[0]);
     range(a,size);
    return 0;
}

