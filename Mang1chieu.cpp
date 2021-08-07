#define _CRT_SECURE_NO_WARNINGS
/*
STT: 21
MSSV: 2001190676
Ho Va Ten: Nguyen Quang Minh
Noi dung: Bai Tap ve nha buoi 2
*/
//khai bao thu vien

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//khai bao cau truc, hang so , (neu co)
#define MAX_SIZE 100
const long max = 100000;
//khai bao cac ham

void nhapmang(int * &a, int &n);
void xuatmang(int *a, int n);
void nhapmang1C_Songuyen(int a[], int &n);
void xuatMang1C_Songuyen(int a[], int n);
void menu1();
void thucthi();
void hoanVi(int &x, int &y);
void nhapMang1C_NguyenNgauNhien(int a[], int &n, int &m);
void nhapMang1C_NguyenNgauNhientoanchan(int a[], int &n, int &m);
void nhapMang1C_NguyenNgauNhienchanle(int a[], int &n, int &m);
void sapXepChanTang(int a[], int n);
void sapXepChanTangLeGiam(int a[], int &n);
void GiaTriAm(int a[],int &n, int &m);
int traVeGiaTriDuongDauTien(int a[], int n);
void mang1c_sothuc(float a[], int &n, int &m);
void xuatMang1C_Sothuc(float a[], int n);
int timgiatrimax(float a[], int n);
void nhapmang1C_Sothuc(float a[], int &n);
void timViTriChanCuoi(int a[], int n);
int timViTrimindautien(int a[], int n);
int traVeGiaTriChanDauTien(int a[], int n);
bool kiemtrasohoanthien(int a[], int n);
int vitrisht(int a[], int n);
int timsntdautien(int a[], int n);
float timmaxgiatriam(float a[], int n);
int timsntmax(int a[], int n);
int vishtnhonhat(int a[], int n);
int timminchan(int a[], int n);
float timkhoangcach(float a[], int n, float x);
float timkhoangcachmin(float a[], int n, float x);
void timdoangiatri(float a[], int n);
void timdoangiatrix(int a[], int n);
int timvitricodk(int a[], int n);
int timchannhohonle(int a[], int n);
void LietKe(int a[], int n);
void LietKeCoDK(int a[], int n);

//------------
//than chuong trinh
void main(){
	menu1();
	thucthi();
	
	getch();
}

//menu chuong trinh

void menu1()
{
	int n = 0;
	printf("\n======Chuong Trinh thuc thi xu ly mang 1 chieu=====");
	printf("\n======Bai01. Tao va xuat mang bang tay=====");
	printf("\n======Bai02. Tao va xuat mang ngua nhien");
	printf("\n======Bai03. Tao va xuat mang toan chan");
	printf("\n======Bai04. Tao va xuat mang chan le");
	printf("\n======Bai05. tao mang chan tang");
	printf("\n======Bai06. tim gia max trong mang 1 chieu so thuc");
	printf("\n======Bai07.xuat mang 1c la so am");
	printf("\n======Bai08. xuat mang ngau nhien so thuc");
	printf("\n======Bai09. tra Ve Gia Tri Duong Dau Tien");
	printf("\n======Bai10. tim Vi Tri Chan Cuoi");
	printf("\n======Bai11. tim Vi Tri min dau tien");
	printf("\n======Bai12. tra Ve Gia Tri Chan Dau Tien");
	printf("\n======Bai13. tim vi tri so hoan thien cuoi cung");
	printf("\n======Bai14. tim vi tri so nguyen to dau tien");
	printf("\n======Bai15. tim gia tri am lon nhat trong mang so thuc");
	printf("\n======Bai16. tim so nguyen to lon nhat");
	printf("\n======Bai17. tim so hoan thien nho nhat");
	printf("\n======Bai18. tim so chan nho nhat");
	printf("\n======Bai19. tinh khoang cach xa x nhat");
	printf("\n======Bai20. tim vi tri co khoang cach gan x nhat");
	printf("\n======Bai21. tim doan [a,b] chua tat ca gia tri trong mang");
	printf("\n======Bai22. tim doan [-x,x] chua tat ca gia tri trong mang");
	printf("\n======Bai23. tim vi tri tra tri co gia tri bang tich hai so lan can");
	printf("\n======Bai24. tim so chan nho hon tat ca so le trong mang");
	printf("\n======Bai25. tim so lon hon tri tuyet doi cua so ke truoc no");
	printf("\n======Bai26. tim so thoa dieu kien");

	printf("\n\0. Thoat Chuong trinh");
}

void thucthi(){

	int M,N,V,d;
	float g,x;
	float B[100],C[100];
	int A[100];
	int chon = -1;
	while(chon!=0)
	{
		printf("\nMoi nhap so can thuc thi: ");
		scanf("%d", &chon);
		switch(chon)
		{
			case 0: exit(1);
				break;
			case 1:
				nhapmang1C_Songuyen(A,N);
				
				printf("\n Mang xuat: ");
				xuatMang1C_Songuyen(A,N);
				break;
			case 2:
				nhapMang1C_NguyenNgauNhien(A,N,M);
				printf("\nMang duoc tao ra ngau nhien: ");
				xuatMang1C_Songuyen(A,N);
				break;
			case 3:
				nhapMang1C_NguyenNgauNhientoanchan(A,N,M);
				printf("\nMang duoc tao ra ngau nhien chua toan so chan: ");
				xuatMang1C_Songuyen(A,N);
				break;
			case 4:
					nhapMang1C_NguyenNgauNhienchanle(A,N,M);
					printf("\nMang duoc tao ra ngau nhien chua so chan le: ");
					xuatMang1C_Songuyen(A,N);
					break;
			case 5:
					nhapMang1C_NguyenNgauNhientoanchan(A,N,M);
					printf("\nMang duoc tao ra ngau nhien chua so chan : ");
					xuatMang1C_Songuyen(A,N);
					sapXepChanTang(A,N);
					printf("\nMang duoc tao ra ngau nhien chua so chan tang: ");
					xuatMang1C_Songuyen(A,N);
						break;
			case 6:
					
					nhapmang1C_Sothuc(B,N);
					printf("\nmang so thuc duoc tao ra la: ");
					xuatMang1C_Sothuc(B,N);
					g = timgiatrimax(B,N);
					printf("\ngia tri max trong mang so thuc la %.2f ", g);
					break;
			case 7:
					GiaTriAm(A,N,M);
					printf("\nMang duoc tao ra ngau nhien toan so am:");
					xuatMang1C_Songuyen(A,N);
					break;
			case 8: 
					mang1c_sothuc(B,N,M);
					printf("\nMang duoc tao ra ngau nhien so thuc:");
					xuatMang1C_Sothuc(B,N);
					break;
			case 9:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien: ");
					xuatMang1C_Songuyen(A,N);
					printf("\ngia tri chan dau tien la %d",traVeGiaTriDuongDauTien(A,N));
					break;
			case 10:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien: ");
					xuatMang1C_Songuyen(A,N);
					timViTriChanCuoi(A,N);
					break;
			case 11: 
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien: ");
					xuatMang1C_Songuyen(A,N);
					printf("%d",timViTrimindautien(A,N));
					break;
			case 12:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("%d",traVeGiaTriChanDauTien(A,N));
					break;
			case 13:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("\nvi tri so hoan thien cuoi cung la : ");
					printf("%d",vitrisht(A,N));
					
					break;
			case 14:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("\nso nguyen to dau tien la: ");
					printf("%d",timsntdautien(A,N));
					break;
			case 15:
					nhapmang1C_Sothuc(B,N);
					printf("\nmang so thuc am duoc tao ra la: ");
					xuatMang1C_Sothuc(B,N);
					printf("\n gia tri am lon nhat trong mang so thuc la: ");
					printf("%.1f", timmaxgiatriam(B,N));
					break;
			case 16: 
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("\nso nguyen to max la: ");
					printf("%d",timsntmax(A,N));
					break;

			case 17:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("\n so hoan thien nho nhat la:");
					printf("%d",vishtnhonhat(A,N));
					break;
			case 18:
					nhapmang1C_Songuyen(A,N);
					printf("\n Mang xuat: ");
					xuatMang1C_Songuyen(A,N);
					printf("\n so chan nho nhat la: %d",timminchan(A,N) );
					break;
			case 19:
					mang1c_sothuc(B,N,M);
					printf("\nMang duoc tao ra ngau nhien so thuc:");
					xuatMang1C_Sothuc(B,N);
					printf("\nnhap x = ");
					scanf("%f",&x);
					g =  timkhoangcach(B,N,x);
					printf("\n%.1f la khoang cach xa nhat voi %.1f", g, x);

					break;
			case 20:
					mang1c_sothuc(B,N,M);
					printf("\nMang duoc tao ra ngau nhien so thuc:");
					xuatMang1C_Sothuc(B,N);
					printf("\nnhap x = ");
					scanf("%f",&x);
					g =  timkhoangcachmin(B,N,x);
					printf("\n%.f la vi tri co khoang cach gan nhat voi %.1f", g, x);
					break;
			case 21:
					mang1c_sothuc(B,N,M);
					printf("\nMang duoc tao ra ngau nhien so thuc:");
					xuatMang1C_Sothuc(B,N);
					timdoangiatri(B,N);
					break;
			case 22:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					timdoangiatrix(A,N);
					break;

			case 23:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					printf("\n vi tri tra tri co gia tri bang tich hai so lan can la: %d",timvitricodk(A,N));
					break;
			case 24:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					if(timchannhohonle(A,N) == -1)
						printf("\n mang khong co so le nao");
					else
						printf("\n so chan nho hon cac phan tu le la %d",timchannhohonle(A,N));
					break;
			case 25:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					LietKe(A,N);
					break;
			case 26:
					nhapMang1C_NguyenNgauNhien(A,N,M);
					printf("\nMang duoc tao ra ngau nhien : ");
					xuatMang1C_Songuyen(A,N);
					LietKeCoDK(A,N);
					break;
			default: printf("\nGia tri chon khong phu hop");
				break;
		}
	}
}

void nhapmang1C_Songuyen(int a[], int &n)
{
	do{
		printf("cho biet so phan tu cua mang: ");
		scanf("%d", &n);

	}while (n<=0);
	for (int i =0; i< n ;i++)
	{
		printf("gia tri cua phan tu a[%d]=", i);
		scanf("%d", &a[i]);
	}

}

void nhapmang1C_Sothuc(float a[], int &n)
{
	do{
		printf("cho biet so phan tu cua mang: ");
		scanf("%d", &n);

	}while (n<=0);
	for(int i=0;i<n;i++)
  {
   printf("\nphan tu thu a[%d]=: ",i);
   scanf("%f",&a[i]);
  }

}

void nhapMang1C_NguyenNgauNhien(int a[], int &n, int &m){
	
	//Nhập số phần tử của mảng
	do {
		printf("Cho biet so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0);
	//Nhập giá trị lớn nhất cho phần tử của mảng
	do {
		printf("Cho biet gia tri lon nhat cua phan tu: ");
		scanf("%d", &m);
	} while (m <= 0);
	//Tao mang ngau nhien tu 0 den m
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (m + 1);
	}

}

void xuatMang1C_Songuyen(int a[], int n)
{
	printf("\n noi dung cua mang la: ");
	for(int i=0; i< n; i++)
		printf("%4d", a[i]);
}

void  xuatMang1C_Sothuc(float a[], int n){
	printf("\n noi dung cua mang la: ");
	for(int i=0;i<n;i++)
   {
    printf("\t %8.2f",a[i]);
   }
}
void nhapMang1C_NguyenNgauNhientoanchan(int a[], int &n, int &m)
{
	int x;
	//Nhập số phần tử của mảng
	do {
		printf("\nCho biet so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0);
	//Nhập giá trị lớn nhất cho phần tử của mảng
	do {
		printf("\nCho biet gia tri lon nhat cua phan tu: ");
		scanf("%d", &m);
	} while (m <= 0);
	//Tao mang ngau nhien tu 0 den m
	for (int i = 0; i < n; i++)
	{
		do{
			x = a[i] = rand() % (m +1);
		}while(x % 2 == 1);
			a[i] = x;
	}
		
}

void nhapMang1C_NguyenNgauNhienchanle(int a[], int &n, int &m)
{
		int x;
	//Nhập số phần tử của mảng
	do {
		printf("\nCho biet so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0);
	//Nhập giá trị lớn nhất cho phần tử của mảng
	do {
		printf("\nCho biet gia tri lon nhat cua phan tu: ");
		scanf("%d", &m);
	} while (m <= 0);
	//Tao mang ngau nhien tu 0 den m
	for (int i = 0; i < n; i++)
	{
		//kiem tra dieu kien cho nhap so chan
		if( i % 2 ==0)
			do
			{
				x = rand() % (m+1);

			}while (x % 2 == 1);
		else
			do
			{
				x = rand() % (m +1 );
			}while (x % 2 == 0);
			a[i] = x; // ngẫu nhiên từ 0 đến m
	}
}

void sapXepChanTang(int a[10], int n)
{
       for(int i = 0; i < n ; i++){
		if(a[i] % 2 == 0)
        for(int j = i + 1; j < n; j++){
			if(a[j] % 2 == 0)
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
               int tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
	}
}

void hoanVi(int &x, int &y)
{
	int q = x;
	x=y;
	y=q;
}
void sapXepChanTangLeGiam(int a[], int &n)
{
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
             if(a[i] < a[j] && a[i] == 0 && a[j] == 0 )
			 {hoanVi(a[i],a[j]);}
			 if(a[i] > a[j] && a[i] != 0 && a[j] != 0 )
				 hoanVi(a[i],a[j]);
        }
    }
}

void GiaTriAm(int a[],int &n, int &m)
{
	//Nhập số phần tử của mảng
	do {
		printf("\nCho biet so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0);
	//Nhập giá trị lớn nhất cho phần tử của mảng
	do {
		printf("\nCho biet gia tri lon nhat cua phan tu: ");
		scanf("%d", &m);
	} while (m <= 0);
	//Tao mang ngau nhien tu 0 den m
	for (int i =0; i< n ;i++){
		{
			 a[i] = rand() % (m +1) * (-1);
				
		}
			
	}
}
void mang1c_sothuc(float a[], int &n, int &m)
{
	
	//Nhập số phần tử của mảng
	do {
		printf("\nCho biet so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0);
	//Nhập giá trị lớn nhất cho phần tử của mảng
	do {
		printf("\nCho biet gia tri lon nhat cua phan tu: ");
		scanf("%d", &m);
	} while (m <= 0);

	for(int i =0; i< n; i++){
		{
			a[i] = rand() % (m +1)* 0.1;

		}
		
	}

}

int timgiatrimax(float a[], int n){
	float max;
	max = a[0];
	for(int i = 1 ; i < n; i++){
		if(max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int traVeGiaTriDuongDauTien(int a[], int n)
{
	int x;
	printf("\n gia tri duong dau tien la: ");
	for(int i = 0 ;i< n ; i++){
		if(a[i] > 0)
			x = a[i];
		return x;

	}
	return -1;
		
}

void timViTriChanCuoi(int a[], int n)
{
	int x;
	printf("\nGiaTriChanCuoiCung: ");
	 for(int i=0;i<n;i++)
	 {
 
	 if(a[i]%2==0) 
		 x=a[i];
	
	 }
	  printf("%d", x);

}

int timViTrimindautien(int a[], int n)
{
	printf("\nGia Tri min dau tien la : ");
	 for(int i=0;i<n;i++)
		 for(int j = i+1; j < n; j++ )
	 {
 
		 if(a[i] < a[j] ) 
			return a[i];
		 else
			 return a[j];
	
	 }
	  

}
int traVeGiaTriChanDauTien(int a[], int n)
{
	
	printf("\n vi tri gia tri chan dau tien la: ");
	for(int i = 0 ;i< n ; i++){
		if(a[i] % 2 == 0)
		{
			
			return i;
		}
		
	}
	return -1;
}
int kiemtrasohoanthien(int n)
{
	int tong = 0;
	for(int i = 1;i < n; i++ )
		if(n % i == 0)
			tong += i;
	if(tong != 0 && tong == n){
			return 1;
		}
		else
			return 0;
}

int vitrisht(int a[], int n)
{
	for(int i = n-1 ; i >= 0 ;i-- ){
		if(kiemtrasohoanthien(a[i])==1)
			return i;
	}
		return -1;
}

bool kiemtrasnt(int n)
{
	for(int i = 1 ;i < n; i++)
	{
		if(n%2 != 0 && n % 1 == 0 && n % n == 0 )
		{
			return true;
		}
		else
			return false;
	}
}

int timsntdautien(int a[], int n)
{
	for(int i =0 ; i< n ; i++)
	{
		if(kiemtrasnt(a[i]) ==  true)
			return a[i];
		
	}
			return -1;
	
}

float timmaxgiatriam(float a[], int n)
{
	int x = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] < 0 )
		{
			x = a[i];
			
		}
	}
	for(int i = 0 ; i < n ; i ++ )
	{
		if(a[i] > x && a[i] < 0)
			x = a[i];
	}
	return x;
}

int timsntmax(int a[], int n)
{
	int x = 0;
	for(int i =0 ; i< n ; i++)
	{
		if(kiemtrasnt(a[i]) ==  true)
			x = a[i];
		
	}
	for(int i =0 ; i< n ; i++)
	{
		if(kiemtrasnt(a[i]) ==  true && a[i] > x)
			x = a[i];
		
	}
	return x;
			
	
}
int vishtnhonhat(int a[], int n)
{
	int x =0 ;
	for(int i = 0; i < n ;i++ ){
		if(kiemtrasohoanthien(a[i])==1)
			x = a[i];
	}
	for(int i =0 ;i < n ;i++ )
	{
		if(kiemtrasohoanthien(a[i])==1 && a[i] < x)
			x = a[i];
	}
	return x;
}

int demgiatrichan(int n)
{
	int dem =0;
	for(int i =0; i< n ; i++)
	{
		if(n % 2 == 0 )
			dem ++;
	}

	return dem;

}

int timminchan(int a[], int n)
{
	int x = 0;
	for(int i = 0 ;i < n ;i++)
	{
		if(a[i] % 2 == 0)
			x =a[i];
	}
	for (int i = 0 ;i < n ;i++ )
	{
		if(a[i] % 2 == 0 && a[i] < x)
			x = a[i];
	}
	for(int i = n-1 ; i >=0 ; i--)
	{
		if(a[i] % 2 == 0 && a[i] == x && demgiatrichan(a[i]) > 1)
		{
			return i;
		}
	}
	return x;

}

float timkhoangcach(float a[], int n, float x)
{
	int idx = 0;
    float c;
    float d = abs(double(a[0] - x));
 
    for(int i = 1; i < n; i++)
    {
        c = abs(double(a[i] - x));
        if(d < c)
        {
            d = c;
            idx = i;
        }
    }
    return a[idx];
}

float timkhoangcachmin(float a[], int n, float x)
{
	int idx = 0;
    float c;
    float d = abs(double(a[0] - x));
 
    for(int i = 1; i < n; i++)
    {
        c = abs(double(a[i] - x));
        if(d > c)
        {
            d = c;
            idx = i;
        }
    }
    return idx;
}

void timdoangiatri(float a[], int n)
{
	float max = a[0];
	float min = a[0];
	for(int i = 1; i<n; i++ )
	{
		max = (a[i] > max) ? a[i]:max;
		min = (a[i] < min) ? a[i]:min;
	}
		printf("\ndoan tu [%.1f , %.1f] chua tat ca ca gia tri trong mang",min, max);
}

void timdoangiatrix(int a[], int n)
{
	int x = a[0];
	for(int i = 1; i<n; i++ )
	{
		x = (x >(abs)(a[i])) ? x:a[i];
	}
		printf("\ndoan tu [%d , %d] chua tat ca ca gia tri trong mang",-x, x);
}

int timvitricodk(int a[], int n)
{
	for(int i =0; i< n ;i++)
	{
		if(a[i+1] * a[i-1] ==  a[i])
		{
			return i;
		}
	}
	return -1;
}

int timchannhohonle(int a[], int n)
{
    long min = max;
    for (int i = 0; i < n; i++) 
	{
        if (a[i] < min && a[i] % 2 == 1)
            min = a[i];
    }
    if( min == max )
        return -1;
    else
        return min - 1;
}

void LietKe(int a[], int n)
{
    int x = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>abs(a[i-1]))
        {
            x = 1;
            printf("\nSo lon hon tri tuyet doi ke truoc no la %4d", a[i]);
        }
    }
    if (x == 0)
        printf("\nMang ko co gia tri do");
}

void LietKeCoDK(int a[], int n)
{
    int x = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>abs(a[i-1]) && a[i] < abs(a[i+1]))
        {
            x =1;
            printf("\n So thoa dieu kien la %4d", a[i]);
        }
    }
    if (x == 0)
        printf("\nMang ko co gia tri do");
}



