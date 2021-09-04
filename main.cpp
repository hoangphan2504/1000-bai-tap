#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang(int a[], int n)
{
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }
}


/*
BAI 165

int Inchusoledautien(int a[], int n)
{
    for(int i = 0; i< n; i++)
    {
        int temp=a[i];
        while(temp>=10)
        {
            temp/=10;
        }
        if(temp % 2 != 0)
            return a[i];
    }
    return 0;
}*/
/*
//BAI 167
bool kiemtrasotoanle (int a, int n)
{
  int temp = a;
  while (temp > 10)
    {
      if ((temp % 10) % 2 != 0)
	{
	  temp /= 10;
	}
      else
	    temp %= 10;
    }
  if (temp % 2 != 0)
    return true;
    else
    return false;
}*/
/*
// Bai 168
int kiemtra5muk(int *a, int n)
{
    int maxx=0;
    for(int i =0; i < n; i++)
    {
        int k=1;
        while( pow(a[i], 1.0 / k) >= 5)
        {
            if( pow(a[i], 1.0/k) ==5)
            {
                maxx=a[i];
            }
            k++;
        }
    }
    return maxx;

}*/
/*
//169
int solenhonhat(int *a, int n)
{
    int dem=0,i,nhonhat;
    for( i = 0; i< n;i++)
    {
        if(a[i] % 2 != 0)
        {
            nhonhat = a[i];
            dem++;
        }
    }

    if( dem!=0 )
    {
        for(int j = i+1; j< n; j++)
        {
            if(a[j] % 2 != 0 && a[j] < nhonhat)
            {
                nhonhat=a[j];
            }
        }
    }
    return nhonhat;
}
int kiemtrasochanlonnhatnhohonsolenhonhat(int *a, int n, int nhonhat)
{
    int chanlonnhat =0;
    for(int i = 0; i< n;i++)
    {
        if(a[i] % 2 == 0 && a[i] < nhonhat && a[i] > chanlonnhat )
        {
            chanlonnhat=a[i];
        }
    }
    return chanlonnhat;
}*/
/*
//170-171
int gcdd(int a, int b)
{
    while(a!=b)
        if(a>b)
            a-=b;
        else
            b-=a;
    return a;
}
*/

// 170

int main()
{
    int n, nhonhat;
    cin >> n;
    int a[n];
    Nhapmang(a,n);
    /*int gcd=a[0];
    for(int i=1; i< n; i++)
    {
        gcd=gcdd(lcm,a[i]);
    }
    cout << gcdd;
    int ans=a[0];
    for(int i=1; i< n; i++)
    {
        ans=(ans*a[i])/gcdd(ans,a[i]);
    }
    cout << ans;*/


}
