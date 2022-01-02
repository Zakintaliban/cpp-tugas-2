#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
 
 
using namespace std;
 
int tarif(int a,int b){
   
    int harga = a*b;
   
    return harga;
   
}
 
int main(){
 
        char nama[20],kode;
        int tb[3]={500,700,1000};
        char buku[20][20]={"Cerpen","Komik","Novel"};
        int jp,total;
        string a;
   
    
        cout<<"Program Perpustakaan\n";
   
        cout<<"---------------------------------------------------\n";
        cout<<"|   KODE BUKU   |   JENIS BUKU   |   TARIF BUKU   |\n";
        cout<<"---------------------------------------------------\n";
        cout<<"|       C       |   Cerpen       |  Rp 500        |\n";
        cout<<"|       K       |   Komik        |  Rp 700        |\n";
        cout<<"|       N       |   Novel        |  Rp 1000       |\n";
        cout<<"---------------------------------------------------\n";
        do{
        cout<<"Nama Penyewa Buku    : ";
        cin>>nama;
        cout<<"Kode buku [C/K/N]    : ";
        cin>>kode;
   
        if(kode=='C'||kode=='c'){
            cout<<"Banyak Pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[0]);
            
            cout<<"\nTarif Sewa Rp.    : ";
            cout<<tb[0];
            cout<<"\nJenis buku     : ";
            cout<<buku[0];
            cout<<"\nPenyewa dengan nama    : ";
            cout<<nama;
            cout<<"\nJumlah Bayar Penyewaan Sebesar Rp.    : ";
            cout<<total;
            
           
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)? ";
            cin>>a;
       
       
        }else if(kode=='K'||kode=='k'){
       
            cout<<"Banyak Pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[1]);
           
            cout<<"\nTarif Sewa Rp.    : ";
            cout<<tb[1];
            cout<<"\nJenis buku     : ";
            cout<<buku[1];
            cout<<"\nPenyewa dengan nama    : ";
            cout<<nama;
            cout<<"\nJumlah Bayar Penyewaan Sebesar Rp.    : ";
            cout<<total;
            
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
       
       
        }else if(kode=='N'||kode=='n'){
       

            cout<<"Banyak Pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[2]);
            cout<<"\nTarif Sewa Rp.    : ";
            cout<<tb[2];
            cout<<"\nJenis buku     : ";
            cout<<buku[2];
            cout<<"\nPenyewa dengan nama    : ";
            cout<<nama;
            cout<<"\nJumlah Bayar Penyewaan Sebesar Rp.    : ";
            cout<<total;
            
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
        }  
    }while(a != "t");
    cout<<"terima kasih telah menggunakan program kami";
    getch();
    return 0;
}