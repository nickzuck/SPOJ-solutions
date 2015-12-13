#include<cstdio>

#define M 200003

typedef long long ll;
ll arr[M];
ll count=0;

void merge(ll x,ll y,ll mid)
{
    ll i,j,k=0,temp[M];
    i=x;
    j=mid+1;
    ll n1=0;
    while(i<=mid&&j<=y)
    {

        if(arr[i]>arr[j])
        {
            n1=mid-i+1;
        //    printf("in %lld %lld %lld %lld\n",n1,mid,arr[i],arr[j]);
            count+=n1;
            temp[k++]=arr[j++];
        }
        else{
            temp[k++]=arr[i++];
        //    printf("else %lld\n",i);

        }
    }

        while(i<=mid)
           temp[k++]=arr[i++];

        while(j<=y)
            temp[k++]=arr[j++];


    for(ll p=0,i=x;p<k;p++,i++)
    {
        arr[i]=temp[p];

    }
}

void part(ll x,ll y)
{
    if(x<y)
    {
        ll mid=(x+y)/2.0;
        part(x,mid);
        part(mid+1,y);
        merge(x,y,mid);
    }
}
int main()
{
  
	//freopen("rand.txt","r",stdin);
	//freopen("xyz.txt","w",stdout);
    ll n, t ;
scanf ("%lld",&t) ;
while(t--)
{
        count=0;
        scanf("%lld",&n);
        for(ll i=1;i<=n;i++)
            scanf("%lld",&arr[i]);

        part(1,n);

        printf("%lld\n",count);
}    
    return 0;
}
