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

void SwapNumber(int &a, int &b)
{
  int temp=a;
  a=b; 
  b=temp;
}

void SapXepTangDan(int b[], int index)
{
  for(int i=0; i<index-1; i++)
  {
    for(int j=i+1; j<index; j++)
    {
      if(b[i]>b[j])
      {
        SwapNumber(b[i], b[j]);
      }
    }
  }
}

void SapXepTamGiacTren(int arr[][100], int n)
{
  int b[100], index=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(j>i)
      {
        b[index++]=arr[i][j];
      }
    }
  }

  SapXepTangDan(b, index);

  index=0;

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(j>i)
      {
        arr[i][j]=b[index++];
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
  SapXepTamGiacTren(arr, n);
  cout << endl;
  XuatMang(arr, n);
}
