# include <stdio.h>
# include <conio.h>
# include <iostream>
# include <iomanip>

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
 }

 cout<<"\t  Daftar Honor Pegawai Honorer "<<endl;
 cout<<"\t       PT. ALAKADARNYA"<<endl;
 cout<<endl;
cout<<"--------------------------------------------------"<<endl;
 cout<<" No.   Nama     Jumlah    \tKelebihan  Jumlah "<<endl;
 cout<<"      Pegawai  Jam Kerja  \tJam Kerja   Honor "<<endl;
cout<<"--------------------------------------------------"<<endl;

 for(i = 1; i <= n; i++)
 {
  cout<<i;
  cout<<"\t"<<honor[i].nama;
  cout<<"\t"<<honor[i].jam<<" jam";
  cout<<"\t\t"<<lbh(honor[i].jam)<<" jam";
  cout<<"\t"<<honor[i].jumlah<<endl;
 }
 getch();
}