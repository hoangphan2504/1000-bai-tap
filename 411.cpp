#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int arr[][100], int &row, int &col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
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

void SoChanGiamDan(int arr[][100], int row, int col)
{
   int b[100]={0};
   int index=0;
   for(int i=0; i<row; i++)
   {
     for(int j=0; j<col; j++)
     {
      if(arr[i][j] % 2 == 0)
      {
        b[index++]=arr[i][j];
      }
     }
   }

   for(int i=0; i<index-1; i++)
   {
     for(int j=i+1; j<index; j++)
     { 
       if(b[j]>b[i])
        SwapNumber(b[j], b[i]);
     }
   }

   for(int i=0; i<index; i++)
   { 
     cout << b[i] << " ";
   }
}

int main()
{
    int row, col;

    cout << "Nhap so dong: ";
    cin >> row ;
    cout << "Nhap so cot: ";
    cin >> col;

    int arr[100][100];
    cout << "Nhap Mang: " << endl;
    NhapMang(arr, row, col);

    cout <<"Mang: " << endl;
    XuatMang(arr, row, col);
    cout << endl;

    
    SoChanGiamDan(arr, row, col);
    
}
