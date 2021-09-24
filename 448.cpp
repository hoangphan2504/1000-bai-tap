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


int TimGiaTriGanNhauNhat(int arr[][100], int n)
{
  int Min= abs(arr[0][0]-arr[0][1]), m=n*n;
  for(int i=0; i<m-1; i++)
  {
    for(int j=i+1; j<m; j++)
    {
      if(abs(arr[i/n][i%n]-arr[j/n][j%n]) < Min)
      {
        Min = abs(arr[i/n][i%n]-arr[j/n][j%n]);
      }
    }
  }
  return Min;
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
  cout << TimGiaTriGanNhauNhat(arr, n);
}
