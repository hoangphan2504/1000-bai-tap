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

int TimMax(int arr[][100], int n)
{
  int Max=arr[0][1];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if((i<j) && (arr[i][j]>Max))
      //if((i>j) && (arr[i][j]>Max))
      //if((i==j) && (arr[i][j]>Max))
      //if((i+j)==n-1 && (arr[i][j]>Max))
      {
        Max=arr[i][j];
      }
    }
  }
  return Max;
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
  cout << TimMax(arr, n);
}
