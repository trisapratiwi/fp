#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct barang{
	char id[50];
	char nmbrg[50];
	int ktgr;
	int rak;
	int jmlh;
	int hrg;
}brg[50]; 

struct data{
	char jenis[50];
	char no_rak[50];
}dt[50];

int i=0;
void add();
void view();
void edit();
void find();
void sort();

int main(){
	system("color C");
	int menu;
	pilih :
		printf("\n\t __________________________________________");
		printf("\n\t|                 MENU UTAMA               |");    
		printf("\n\t|__________________________________________|"); 
		printf("\n\t|  1. input                                |");
		printf("\n\t|  2. View                                 |");
		printf("\n\t|  3. ubah data                            |");
		printf("\n\t|  4. cari data                            |");
		printf("\n\t|  5. sort data                            |");
		printf("\n\t|  6. Keluar                               |");
		printf("\n\t|__________________________________________|");
		printf("\n\tMasukkan pilihan menu [1-6] = ");
		scanf("%d",&menu);
		
		switch (menu){
			case 1 :
				system("cls");
				add();
				goto pilih;
				break;
			case 2 :
				system("cls");
				view();
				goto pilih;
				break;
			case 3 :
				system("cls");
				edit();
				goto pilih;
				break;
			case 4 :
				system("cls");
				find();
				goto pilih;
				break;
			case 5 :
				system("cls");
				sort();
				goto pilih;
				break;
			case 6 :
				printf("byee....");
				getch();
				system("cls");
				exit(0);
				break;
			default :
				system("cls");
				printf("Maaf, pilihan yang anda masukkan tidak tersedia !!\n");
				getch();
				system ("cls");
				goto pilih;
				break;
		}
	return 0;
}

void input(){
	printf("Input data ke-%d\n", i+1);
	printf("Masukkan id barang : "); fflush (stdin); scanf("%s", &brg[i].id);
	printf("Masukkan nama barang : "); fflush (stdin); scanf("%s", &brg[i].nmbrg);
	printf("kategori barang\n");
	printf("1. elektronik \n2. rumah_tangga \n3. busana");
	printf("\nmasukkan jenis kategori barang : "); fflush (stdin); scanf("%d", &brg[i].ktgr);
	
	if(brg[i].ktgr==1){
		strcpy(dt[i].jenis,"elektronik");
	}
	else if(brg[i].ktgr==2){
		strcpy(dt[i].jenis,"rumah tangga");
	}
	else if(brg[i].ktgr==3){
		strcpy(dt[i].jenis,"busana");
	}
	else{
		printf("\n\tMaaf, input tidak tersedia\n");
		input();
	}
	printf("no_rak\n");
	printf("1. 001 \n2. 002  \n3. 003 \n4. 004\n");
	printf("masukkan no_rak barang : "); fflush (stdin); scanf("%d", &brg[i].rak);
	if(brg[i].rak==1){
		strcpy(dt[i].no_rak,"001");
	}
	else if(brg[i].rak==2){
		strcpy(dt[i].no_rak,"002");
	}
	else if(brg[i].rak==3){
		strcpy(dt[i].no_rak,"003");
	}
	else if(brg[i].rak==4){
		strcpy(dt[i].no_rak,"004");
	}
	else{
		printf("\n\tMaaf, input tidak tersedia\n");
		getch();
		system("cls");
		input();
	}
	printf("Masukkan jumlah barang : "); fflush (stdin); scanf("%d", &brg[i].jmlh);
	printf("Masukkan harga barang : "); fflush (stdin); scanf("%d", &brg[i].hrg);
}
void add(){
	input();
	printf("\n\tData berhasil ditambahkan... ");	
	i++;
	getch();
	system("cls");
}

void data_barang(int j){
			printf("TAMPILAN BARANG KE - %d\n", j+1);	
			printf("id		: %s\n", brg[j].id);	
			printf("nama		: %s\n", brg[j].nmbrg);
			printf("kategori	: %s\n", dt[j].jenis);
			printf("no rak		: %s\n", dt[j].no_rak);
			printf("jumlah		: %d\n", brg[j].jmlh);
			printf("harga		: Rp. %d\n\n", brg[j].hrg);
}

void view(){
	int j=0;
	if (i==0){
		printf ("Data Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
		for(j=0;j<i;j++){
			data_barang(j);
		}
		getch();
		system("cls");
	}
}

void edit(){
	int j=0;
	if (i==0){
		printf ("Data Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
		while(j<i){
			printf("Input data ke-%d\n", j+1);
			printf("Masukkan id barang : "); fflush (stdin); scanf("%s", &brg[j].id);
			printf("Masukkan nama barang : "); fflush (stdin); scanf("%s", &brg[j].nmbrg);
			printf("kategori barang\n");
			printf("1. elektronik \n2. rumah_tangga \n3. busana");
			printf("\nmasukkan jenis kategori barang\n"); fflush (stdin); scanf("%d", &brg[j].ktgr);
	
			if(brg[j].ktgr==1){
				strcpy(dt[j].jenis,"elektronik");
			}
			else if(brg[j].ktgr==2){
				strcpy(dt[j].jenis,"rumah tangga");
			}
			else if(brg[j].ktgr==3){
				strcpy(dt[j].jenis,"busana");
			}
			else{
				printf("\n\tMaaf, input tidak tersedia\n");
				getch();
				system("cls");
				input();
			}
			printf("\nno_rak\n");
			printf("1. 001 \n2. 002  \n3. 003 \n4. 004\n");
			printf("\nmasukkan no_rak barang : \n"); fflush (stdin); scanf("%d", &brg[i].rak);

			if(brg[j].rak==1){
				strcpy(dt[j].no_rak,"001");
			}
			else if(brg[j].rak==2){
				strcpy(dt[j].no_rak,"002");
			}
			else if(brg[j].rak==3){
				strcpy(dt[j].no_rak,"003");
			}
			else if(brg[j].rak==4){
				strcpy(dt[j].no_rak,"004");
			}
			else{
				printf("\n\tMaaf, input tidak tersedia\n");
				getch();
				system("cls");
				input();
		}
		printf("Masukkan jumlah barang : \n"); fflush (stdin); scanf("%d", &brg[j].jmlh);
		printf("Masukkan harga barang : \n"); fflush (stdin); scanf("%d", &brg[j].hrg);
		j++;
		getch();
		system("cls");
		}
	}
		printf("\n\n\tData anda berhasil di ubah...\n");
		view(j);
		getch();
		system("cls");
}

int binarysearch1(struct barang arr[], char cari[], int n)
{
    int t, hasil;
    int k = n - 1;
    int l = 0;
  
    while ( l <= k )
    {
        t = (l + k) / 2;
        hasil = strcmp(arr[t].id, cari);

        if (hasil == -1)
            l = t + 1;
        else if (hasil == 1)
            k = t - 1;
        else
           return t;
    }       
    return -1;  
}

int binarysearch2(struct barang arr[], char cari[], int n)
{
    int t, hasil;
    int k = n - 1;
    int l = 0;
  
    while ( l <= k ){
        t = (l + k) / 2;
        hasil = strcmp(arr[t].nmbrg, cari);

        if (hasil == -1)
            l = t + 1;
        else if (hasil == 1)
            k = t - 1;
        else
           return t;
    }       
    return -1;  
}

void InsertionSort1(struct barang arr[], int n) // ID
{
    int h, j;
    struct barang key;
    for(h = 1; h < n; h++)
    {
        key = arr[h];
        for (j = h - 1; (j >= 0) && (strcmp(arr[j+1].id, arr[j].id)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort2(struct barang arr[], int n) // nama barang
{
    int h, j;
    struct barang key;
    for(h = 1; h < n; h++)
    {
        key = arr[h];
        for (j = h - 1; (j >= 0) && (strcmp(arr[j+1].nmbrg, arr[j].nmbrg)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort3(struct data arr[], int n) // kategori
{
    int h, j;
    struct data key;
    for(h = 1; h < n; h++)
    {
        key = arr[h];
        for (j = h - 1; (j >= 0) && (strcmp(arr[j+1].jenis, arr[j].jenis)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort4(struct data arr[], int n) // no rak
{
    int h, j;
    struct data key;
    for(h = 1; h < n; h++)
    {
        key = arr[h];
        for (j = h - 1; (j >= 0) && (strcmp(arr[j+1].no_rak, arr[j].no_rak)<0); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void InsertionSort5(struct barang arr[], int n) // harga
{
    int i, j;
    int key;

    for(i = 1; i < n; i++)
    {
        key = arr[i].hrg;
        for (j = i - 1; (j >= 0) && (arr[j+1].hrg < key); j--)
        {
            arr[j + 1].hrg = arr[j].hrg;
        }
        arr[j + 1].hrg = key;
    }
}

void InsertionSort6(struct barang arr[], int n) // jumlah barang
{
    int i, j;
    int key;

    for(i = 1; i < n; i++)
    {
        key = arr[i].jmlh;
        for (j = i - 1; (j >= 0) && (arr[j+1].jmlh < key); j--)
        {
            arr[j + 1].hrg = arr[j].jmlh;
        }
        arr[j + 1].jmlh = key;
    }
}

void find()
{
	
	int hasil,pilihan;
	printf("1. cari id \n2. cari nama \n0. kembali ke menu \n");
	scanf("%d", &pilihan);
	system("cls");
	
	switch(pilihan){
		case 1 :
			system("cls");
			char cariid[50];
			printf("\nCari ID : ");fflush(stdin);scanf("%s",cariid);
			hasil = binarysearch1(brg,cariid,i);
			if(hasil == -1){
				printf("Tidak ditemukan ID File %s ",cariid);
	   			getch();
				system("cls");
				find();
			}
			else{
				printf("Hasil Pencarian :\n");
				for(i=hasil; i<=hasil; i++){
						data_barang(i);	
					}	
				printf("File Ditemukan..");
				getch();
				system("cls");
				find();
			}
		case 2 :
			system("cls");
			char caribrg[50];
			printf("\nCari nama barang : ");fflush(stdin);scanf("%s",caribrg);
			hasil = binarysearch2(brg,caribrg,i);
			if(hasil == -1){
				printf("Tidak ditemukan nama barang %s ",caribrg);
	   			getch();
				system("cls");
				find();
			}
			else{
				printf("Hasil Pencarian :\n");
				for(i=hasil; i<=hasil; i++){
						data_barang(i);	
					}	
				printf("File Ditemukan..");
				getch();
				system("cls");
				find();
			}
		default :
			main();
			break;
	}
}

void sort(){
	
	int l,pilihan;
	printf("1. sort id \n2. sort nama \n3.sort kategori \n4.sort rak \n5.sort harga \n6.sort jumlah \n0. kembali ke menu \n");
	scanf("%d", &pilihan);
	switch (pilihan){
		case 1 :
		{
			if(i==0){
				printf("\n Masukan id terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort1(brg,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		case 2 :
		{
			if(i==0){
				printf("\n Masukan nama barang terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort2(brg,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		case 3 :
		{
			if(i==0){
				printf("\n Masukan kategori terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort3(dt,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		case 4 :
		{
			if(i==0){
				printf("\n Masukan no rak terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort4(dt,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		case 5 :
		{
			if(i==0){
				printf("\n Masukan harga terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort5(brg,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		case 6 :
		{
			if(i==0){
				printf("\n Masukan jumlah barang terlebih dahulu..");
				getch();
				system("cls");
				sort();
			}
			else{
				InsertionSort6(brg,i);
				printf("\n Data setelah diurutkan \n");
				for(l=0; l<i; l++){
					data_barang(l);								
				}
				getch();
				system("cls");
				sort();
			}
		}
		default :
			main();
			break;
	}
}
