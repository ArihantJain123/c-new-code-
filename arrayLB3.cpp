#include <iostream>
using namespace std;


void swap( int *xp,int *yp)
{
    int temp = *xp;
    *xp =*yp;
    *yp = temp;

}
 void Bubblesort(int arr[], int n)
 {
     int i,j;
     bool swaped;
     for(i=0; i<n-1; i++)
     {
         swaped=false;
         for (j=0 ;j<n-i-1;j++)
         {
           if(arr[j]>arr[j+1])
           swap(&arr[j],&arr[j+1]);
           swaped=true;
         }

     if (swaped == false )
     break;
     }
 }
 void printarray(int arr[], int size)
 {
     int i;
     for(i=0; i<size; i++)
     cout<<arr[i]<<" ";

    // cout<<\n;
 }

int main() {
	//code
		int T ,N,i,j;
		cin>>T;
	while(T--)
	{
	    cin>>N;
	    int arr[N];


	        for(i=0; i<N; i++)
	        {
	        cin>>arr[i];
	        }
         Bubblesort(arr,N);
	     printarray(arr,N);
	}



	return 0;
}
