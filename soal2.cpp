# include <stdio.h>
# include <conio.h>
# include <iostream>
#include <iomanip>

using namespace std;

struct
{
 char nama[20];
 int jam, lebih, harian, jumlah;
}honor[10];

int lbh(int jam)
{
 if(jam >= 8)
 {
  return (jam - 8);
 }
 else
 {
  return (0);
 }
}

main()
{
 int i, n, total=0;

cout<<"**";
cout<<"Menghitung Honor Pegawai Honorer"<<endl;
cout<<"**";
cout<<"\nMasukkan Jumlah Karyawan Yang Akan Diinput : "; cin>>n;

 for(i = 1; i <= n; i++)
 {
  cout<<"\nData Ke - "<<i<<endl;
  cout<<"-----------"<<endl;
  cout<<"Nama Pegawai     : "; cin>>honor[i].nama;
  cout<<"Jumlah Jam Kerja : "; cin>>honor[i].jam;
  cout<<endl;

  honor[i].harian = 150000;

  if (honor[i].jam > 8)
  {
        honor[i].lebih = honor[i].jam - 8;
        honor[i].jumlah = honor[i].harian + (5000 * honor[i].lebih);
  }
  else if (honor[i].jam < 8)
  {
        honor[i].jumlah = honor[i].jam * 15000;
  }
  else {
      honor[i].jumlah = honor[i].harian;
  }
    total = total + honor[i].jumlah;
 }

cout<<"--------------------------------------------------"<<endl;
 cout<<"  Daftar Honor Pegawai Honorer "<<endl;
 cout<<"       PT. ALAKADARNYA"<<endl;
cout<<"--------------------------------------------------"<<endl;
 cout<<endl;
cout<<"--------------------------------------------------"<<endl;
 cout<<"| No. |  Nama   |  Jumlah   | Kelebihan | Jumlah |"<<endl;
 cout<<"|     | Pegawai | Jam Kerja | Jam Kerja |  Honor |"<<endl;
cout<<"--------------------------------------------------"<<endl;

 for(i = 1; i <= n; i++)
 {
  cout<<setw(3)<<"| "<<i;
  cout<<setw(5)<<"| "<<honor[i].nama;
  cout<<setw(6)<<"| "<<honor[i].jam<<" jam";
  cout<<setw(6)<<"| "<<lbh(honor[i].jam)<<" jam";
  cout<<setw(7)<<"| "<<honor[i].jumlah<<"  |"<<endl;
 }

cout<<"--------------------------------------------------"<<endl;
 cout<<"Jumlah Pegawai          :       "<<n<<" orang"<<endl;
 cout<<"Total Honor Keseluruhan :       Rp. "<<total<<endl;
cout<<"--------------------------------------------------"<<endl;

 getch();
}