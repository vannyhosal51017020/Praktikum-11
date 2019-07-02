#include<iostream.h>

int main ()
{
      struct tgl
      {
      		int tanggal;
            int bulan;
            int tahun;
      };
      tgl={12,4,2012};
      struct data
      {
           char Kode[10];
           char Nama[20];
           int harga;
           int diskon;
       };
       struct
       {
            struct data barang;
            int jumlah;
       };
       data1={"101010","baju rajut",45000,5,10};
       struct
       {
            struct data barang;
            int jumlah;
       };
       data2={"101011","baju twistcone",65000,5,7};
       struct
       {
            struct data barang;
            int jumlah;
       };
