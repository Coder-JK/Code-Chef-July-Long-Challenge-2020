/* Author : Digvijay Pawar */
/* Contest : JULY20B */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subtask()
{
    long int N,x,start,index,days=0,i;
    cin>>N>>x;
    long int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int flag=0;
    for(i=0;i<N;i++)
    {
        if(arr[i]*2>=x)
        {
            start = arr[i];
            index = i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        i = index = N-1;
    }
   
    while(i<N)
    {
        start = arr[i];
    while(arr[i]>0)
    {
        days++;
        if((arr[i]-x)<=0)
        {
            x = 2*arr[i];
            arr[i]=0;
        }
        else
        {
            //arr[i] = arr[i]-x;
            arr[i] = arr[i]*2;
            if(arr[i]>start)
                arr[i]=start;
            x = 2*x;
        }
    }
    i++;
    }
    days = days + index;
    cout<<days<<endl;
}

int main() {
// your code goes here
int T,i;
cin>>T;
for(i=0;i<T;i++)
{
   subtask();
}
return 0;
}
