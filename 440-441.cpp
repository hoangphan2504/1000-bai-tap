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

int TinhTongDuongCheo(int arr[][100], int n)
{
  int tong=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if((i+j)==n-1)
      {
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
  cout << TinhTongDuongCheo(arr, n);
}
