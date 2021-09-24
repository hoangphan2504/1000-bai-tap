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

/*int TinhTongDuongCheo(int arr[][100], int n)
{
  int tong=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(j==i)
      {
        tong+=arr[i][j];
      }
    }
  }
  return tong;
}*/

int TinhTongBienChan(int arr[][100], int n)
{
  int tong=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(i == 0 || i == n-1 || j == 0 || j == n-1)
      {
        if(arr[i][j] % 2 == 0)
          tong+=arr[i][j];
      }
    }
  }
  return tong;
}

int main()
{
  int n;
  cout <<"Nhap so: ";
  cin >> n;
  int arr[100][100];
  cout <<"Nhap mang: ";
  NhapMang(arr, n);
  XuatMang(arr, n);
  cout << TinhTongBienChan(arr, n);
}
