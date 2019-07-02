#include<iostream.h>
#include<conio.h>
int main ()
{
	struct tgl
   {
   	int tanggal;
      int bulan;
      int tahun;
   }
   tgl={12,4,2012};
   struct data
   {
   	char kode[10];
      char nama[20];
      int harga;
      int diskon;
   };
   struct
   {
   	struct data barang;
      int jumlah;
   }
   data1={"101010","baju rajut",45000,5,10};
   struct
   {
   	struct data barang;
      int jumlah;
   }
   data2={"101011","baju twistcone",65000,5,7};
	struct
	{
		struct data barang;
		int jumlah;
   }
   data3={"101012","baju sifon",65000,5,7};
   struct
   {
   	struct data barang;
      int jumlah;
   }
   data4={"101013","celana katun",70000,5,9};
   struct
   {
   	struct data barang;
      int jumlah;
   }
   data5={"101014","rok sifon",60000,5,9};
   struct
   {
   	struct data barang;
   	int jumlah;
   }
   data6={"101015","rok scallop ",60000,5,8};
   cout<<"\t\t-------------------------------------------------"<<endl;
   cout<<"\t\t            DATABASE PENJUALAN APShop            "<<endl;
   cout<<"\t\t-------------------------------------------------"<<endl;
   cout<<"Tanggalpenjualan= "<<tgl.tanggal<<"/"<<tgl.bulan<<"/"<<tgl.tahun<<endl;
   cout<<endl;
   cout<<" Kode|| Nama\t\t|| Harga || Diskon(%) || Jumlah"<<endl<<endl;
   cout<<data1.barang.kode<< " ||"
   	<<data1.barang.nama<<"\t|| "
      <<data1.barang.harga<<"\t|| "
      <<data1.barang.diskon<<"\t\t|| "
      <<data1.jumlah<<endl<<endl;
   cout<<data2.barang.kode<< " ||"
   	<<data2.barang.nama<<"\t|| "
      <<data2.barang.harga<<"\t|| "
      <<data2.barang.diskon<<"\t\t|| "
      <<data2.jumlah<<endl<<endl;
	cout<<data3.barang.kode<< " ||"
   	<<data3.barang.nama<<"\t|| "
      <<data3.barang.harga<<"\t|| "
      <<data3.barang.diskon<<"\t\t|| "
      <<data3.jumlah<<endl<<endl;
   cout<<data4.barang.kode<< " ||"
   	<<data4.barang.nama<<"\t|| "
      <<data4.barang.harga<<"\t|| "
      <<data4.barang.diskon<<"\t\t|| "
      <<data4.jumlah<<endl<<endl;
   cout<<data5.barang.kode<< " ||"
   	<<data5.barang.nama<<"\t|| "
   	<<data5.barang.harga<<"\t|| "
      <<data5.barang.diskon<<"\t\t|| "
      <<data5.jumlah<<endl<<endl;
   cout<<data6.barang.kode<< " ||"
   	<<data6.barang.nama<<"\t|| "
      <<data6.barang.harga<<"\t|| "
      <<data6.barang.diskon<<"\t\t|| "
      <<data6.jumlah<<endl<<endl;
   cout<<"======================================================================="<<endl;
   getch();
   }