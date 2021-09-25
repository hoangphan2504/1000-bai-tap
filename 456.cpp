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

bool KiemTraTangDan(int arr[][100], int n)
{
  for(int i=0; i<n-1; i++)
  {
    int j=i;
    if(arr[i][j] > arr[i+1][j+1])
      return false;
  }
  return true;
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
  if(KiemTraTangDan(arr, n))
    cout << "Yes";
  else
  cout << "No";
}
