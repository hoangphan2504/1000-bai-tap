#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int arr[][100], int &n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void DuaVeDauMatran(int arr[][100], int n, int indexi, int indexj)
{
  int temp= arr[indexi][indexj];
  for(int m=indexi; m>=0; m--)
  {
    if(m == indexi)
    {
      for(int k=indexj; k>0; k--)
      {
        arr[m][k]=arr[m][k-1];
      }
    }
    else
    {
      int temp1=arr[m][n-1];
      for(int k=n-1; k>0; k--)
      {
        arr[m][k]=arr[m][k-1];
      }
      arr[m+1][0]=temp1;
    }
  }
  arr[0][0]=temp;
}

void SapXep(int arr[][100], int n)
{
 for(int i=0; i<n; i++)
 {
   for(int j=0; j<n; j++)
   {
     if(arr[i][j] % 2 == 0)
     {
        DuaVeDauMatran(arr, n, i, j);
        XuatMang(arr, n);
        cout << endl;
     }
   }
 }
}

int main()
{
  int n, k, q;
  cout <<"Nhap so: ";
  cin >> n;
  int arr[100][100];
  cout <<"Nhap mang: ";
  NhapMang(arr, n);
  XuatMang(arr, n);
  cout << endl;
  SapXep(arr, n);
  cout << endl;
  XuatMang(arr, n);
}
