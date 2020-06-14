#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define PI 3.14
void TamGiac(float a, float b, float c)
{
	float S,P,p;
	printf("Nhap canh thu nhat cua tam giac: ");
	scanf("%f",&a);
    printf("Nhap canh thu hai cua tam giac: ");
	scanf("%f",&b);
	printf("Nhap canh thu ba cua tam giac: ");
	scanf("%f",&c);
	if(a+b<=c || a+c<=b || b+c<=a)
	 printf("Do dai cac canh khong hop le\n");
	else { 
	   P=a+b+c;
	   p=P/2;
	   S=sqrt(p*(p-a)*(p-b)*(p-c));
	   printf("Chu vi cua hinh tam giac la: %.2f\n",P);
	   printf("Dien tich hinh tam giac la: %.2f\n",S);
   }
}
void HinhTron(float a)
{
	float P,S;
	printf("Nhap ban kinh R cua hinh tron = ");
	scanf("%f",&a);
	P=2*PI*a;
	S=PI*a*a;
	printf("Chu vi cua hinh tron la: %.2f\n",P);
	printf("Dien tich hinh tron la: %.2f\n",S);
}
void HinhBinhHanh(float a, float b, float c )
{
	float P,S;
	printf("Nhap do dai canh thu nhat cua hinh binh hanh: ");
	scanf("%f",&a);
    printf("Nhap do dai canh thu hai cua hinh binh hanh: ");
	scanf("%f",&b);
	printf("Nhap goc tao boi 2 canh cua hinh binh hanh: ");
	scanf("%f",&c);	
	P=(a+b)*2;
	if (c<90){
	 S=a*b*sin(c*(PI/180));
	 printf("Chu vi cua hinh binh hanh la: %.2f\n",P);
	 printf("Dien tich hinh binh hanh la: %.2f\n",S);
	}
	else 
	{
	  c=180-c;
	  S=a*b*sin(c*(PI/180)); 
	printf("Chu vi cua hinh binh hanh la: %.2f\n",P);
	printf("Dien tich hinh binh hanh la: %.2f\n",S); 
    }
}
void HinhVuong(float a)
{
    float P,S;
    printf("Nhap canh hinh vuong: ");
    scanf("%f",&a);
    P=a*4;
    S=a*a;
    printf("Chu vi hinh vuong la: %.2f\n",P);
    printf("Dien tich hinh vuong la: %.2f\n",S);
}
void HinhChuNhat(float a,float b)
{
   float P,S;
   printf("Nhap chieu dai hinh chu nhat: ");
   scanf("%f",&a);
   printf("Nhap chieu rong hinh chu nhat: ");
   scanf("%f",&b);
   P=(a+b)*2;
   S=a*b;
   printf("Chu vi hinh chu nhat la: %.2f\n",P);
   printf("Dien tich hinh chu nhat la: %.2f\n",S);
}
void HinhThoi(float a, float b)
{
	float P,S,d1,d2;
	printf("Nhap do dai canh hinh thoi: ");
	scanf("%f",&a);
	P=a*4;
	printf("Nhap 1 goc tao boi 2 canh cua hinh thoi: ");
	scanf("%f",&b);
	d1=2*a*sin(b/2*PI/180);
	d2=2*a*sin((180-b)/2*PI/180);
	S=(d1*d2)/2;
	printf("Chu vi hinh thoi la %.2f\n",P);
    printf("Dien tich hinh thoi la : %.2f\n",S);
}
void HinhThang(float a, float b, float c, float d)
{
	float P,S,h;
	int k;
	do
	{
	printf("Nhap do dai day be cua hinh thang: ");
	scanf("%f",&a);
	printf("Nhap do dai day lon cua hinh thang: ");
	scanf("%f",&b);
    }
    while(a>b);
	printf("Nhap do dai canh ben thu nhat cua hinh thang: ");
	scanf("%f",&c);
	printf("Nhap do dai canh ben thu hai cua hinh thang: ");
	scanf("%f",&d);
    P=a+b+c+d;
    S=(a+b)*sqrt(2*(c*c*d*d+c*c*pow(b-a,2)+d*d*pow(b-a,2))-c*c*c*c-d*d*d*d-pow(b-a,4))/(4*(b-a));
    if(S==0 || S==NULL)
	{
	    printf("Do dai khong hop le, vui long nhap lai!\n");
	    do 
		{
	       do
	       {
	          printf("Nhap do dai day be cua hinh thang: ");
	          scanf("%f",&a);
	          printf("Nhap do dai day lon cua hinh thang: ");
	          scanf("%f",&b);
           }
           while(a>b);
	       printf("Nhap do dai canh ben thu nhat cua hinh thang: ");
	       scanf("%f",&c);
	       printf("Nhap do dai canh ben thu hai cua hinh thang: ");
	       scanf("%f",&d);
           P=a+b+c+d;
           S=(a+b)*sqrt(2*(c*c*d*d+c*c*pow(b-a,2)+d*d*pow(b-a,2))-c*c*c*c-d*d*d*d-pow(b-a,4))/(4*(b-a));
           if(S==0 || S==NULL)
		   {
	           printf("Do dai khong hop le, vui long nhap lai!\n");
		   }
	    }
		while(S==0 || S==NULL);
	    printf("Chu vi hinh thang la %.2f\n",P);
	    printf("Dien tich hinh thang la %.2f\n",S);
    }
	
}
void HinhLucGiacDeu(float a)
{
	float P,S;
	printf("Nhap do dai canh cua hinh luc giac deu: ");
	scanf("%f",&a);
	P=a*6;
	S=(3*sqrt(3)*a*a)/2;
	printf("Chu vi hinh luc giac deu la %.2f\n",P);
	printf("Dien tich hinh luc giac deu la %.2f\n",S);
}
void HinhBatGiacDeu(float a)
{
	float P,S;
	printf("Nhap do dai canh cua hinh bat giac deu: ");
	scanf("%f",&a);
	P=a*8;
	S=(a*a*8*1/tan(PI/8))/4;
	printf("Chu vi hinh bat giac deu la %.2f\n",P);
	printf("Dien tich hinh bat giac deu la %.2f\n",S);
}
void HinhHopChuNhat(float a,float b,float c)
{
	float Sxq,Stp,V;
	printf("Nhap chieu dai day cua hinh hop chu nhat: ");
	scanf("%f",&a);
	printf("Nhap chieu rong day cua hinh hop chu nhat: ");
	scanf("%f",&b);
	printf("Nhap do dai canh ben cua hinh hop chu nhat: ");
	scanf("%f",&c);
	Sxq=2*c*(a+b);
	Stp=Sxq+2*a*b;
	V=a*b*c;
	printf("Dien tich xung quanh hinh hop chu nhat la %.2f\n",Sxq);
	printf("Dien tich toan phan hinh hop chu nhat la %.2f\n",Stp);
	printf("The tich hinh hop chu nhat la %.2f\n",V);
}
void HinhChopTamGiacDeu(float a,float b)
{
	float c,d,k,Sxq,Stp,V;
	printf("Nhap do dai canh day cua hinh chop tam giac deu: ");
	scanf("%f",&a);
	printf("Nhap do dai canh ben cua hinh chop tam giac deu: ");
	scanf("%f",&b);
	c=a*sqrt(3)/3;
	d=sqrt(b*b-c*c);
	k=sqrt(b*b-a*a/4);
	Sxq=k*a*3/2;
	Stp=Sxq+a*a*sqrt(3)/4;
	V=a*a*sqrt(3)/4*d/3;
	printf("Dien tich xung quanh hinh chop tam giac deu la %.2f\n",Sxq);
	printf("Dien tich toan phan hinh chop tam giac deu la %.2f\n",Stp);
	printf("The tich hinh chop tam giac deu la %.2f\n",V);
}
void HinhLangTruTamGiacDeu(float a,float b)
{
	float Sxq,Stp,V;
	printf("Nhap do dai canh day cua hinh lang tru tam giac deu: ");
	scanf("%f",&a);
	printf("Nhap do dai canh ben cua hinh lang tru tam giac deu: ");
	scanf("%f",&b);
	Sxq=a*3*b;
	Stp=Sxq+a*a*sqrt(3)/2;
	V=a*a*b*sqrt(3)/4;
	printf("Dien tich xung quanh hinh lang tru tam giac deu = %.2f\n",Sxq);
	printf("Dien tich toan phan hinh lang tru tam giac deu = %.2f\n",Stp);
	printf("The tich hinh lang tru tam giac deu = %.2f\n",V);
}
void HinhNon(float a, float b)
{
	float h,Sxq,Stp,V;
	printf("Nhap do dai duong sinh cua hinh non: ");
	scanf("%f",&a);
	printf("Nhap do dai ban kinh cua cua hinh non: ");
	scanf("%f",&b);
	h=sqrt(a*a-b*b);
	Sxq=PI*a*b;	
	Stp=Sxq+PI*b*b;
	V=PI*b*b*h/3;
	printf("Dien tich xung quanh cua hinh non = %.2f\n",Sxq);
	printf("Dien tich toan phan cua hinh non = %.2f\n",Stp);
	printf("The tich cua hinh non = %.2f\n",V);
}
void HinhTru(float a,float b)
{
	float Sxq,Stp,V;
	printf("Nhap do dai duong cao cua hinh non: ");
	scanf("%f",&a);
	printf("Nhap do dai ban kinh cua hinh non: ");
	scanf("%f",&b);
	Sxq=2*PI*a*b;
	Stp=Sxq+2*PI*b*b;
	V=PI*a*b*b;
	printf("Dien tich xung quanh cua hinh tru tron = %.2f\n",Sxq);
	printf("Dien tich toan phan cua hinh tru tron = %.2f\n",Stp);
	printf("The tich cua hinh tru tron = %.2f\n",V);
}
void KhoiLapPhuong(float a)
{
	float Sxq,Stp,V;
	printf("Nhap do dai canh cua khoi lap phuong: ");
	scanf("%f",&a);
	Sxq=a*a*4;
	Stp=a*a*6;
	V=a*a*a;
	printf("Dien tich xung quanh cua khoi lap phuong = %.2f\n",Sxq);
	printf("Dien tich toan phan cua khoi lap phuong = %.2f\n",Stp);
	printf("The tich cua khoi lap phuong = %.2f\n",V);
}
void HinhCau(float a)
{
	float S,V;
	printf("Nhap do dai ban kinh cua hinh cau: ");
	scanf("%f",&a);
	S=4*PI*a*a;
	V=4*PI*a*a*a/3;
	printf("Dien tich cua hinh cau = %.2f\n",S);
	printf("The tich cua hinh cau = %.2f\n",V);
}
void HinhChopTuGiacDeu(float a, float b)
{
	float k,h,V;
	printf("Nhap do dai canh day cua hinh chop tu giac deu: ");
	scanf("%f",&a);
	printf("Nhap do dai canh ben cua hinh chop tu giac deu: ");
	scanf("%f",&b);
	k=a*sqrt(2)/2;
	h=sqrt(b*b-k*k);
	V=a*a*h/3;
	printf("The tich cua hinh chop tu giac deu la %.2f\n",V);
}
void Menu()
{
   float a,b,c,d;
   int key;
   system("color F0");
	printf("----------MENU----------\n");
	printf("I. CAC HINH HOC DON GIAN.\n");
	printf("1: Hinh tam giac.\n");
    printf("2: Hinh tron.\n");
    printf("3: Hinh binh hanh.\n");
    printf("4: Hinh vuong.\n");
    printf("5: Hinh chu nhat.\n");
    printf("6: Hinh thoi.\n");
    printf("7: Hinh thang.\n");
    printf("8: Hinh luc giac deu.\n");
    printf("9: Hinh bat giac deu.\n");
    printf("************************\n");
    printf("II. CAC HINH HOC PHUC TAP.\n");
    printf("10: Hinh lap phuong.\n");
    printf("11: Hinh hop chu nhat.\n");
    printf("12: Hinh tru.\n");
    printf("13: Hinh cau.\n");
    printf("14: Hinh non.\n");
    printf("15: Hinh chop tam giac deu.\n");
    printf("16: Hinh chop tu giac deu.\n");
    printf("17: Hinh lang tru tam giac.\n");
    printf("18. Thoat\n");
    for(;;){	
	       printf("Nhap lua chon cua ban:");
	       scanf("%d",&key);
	       printf("*******************\n");
	switch (key){
		case 1:
		{
				TamGiac(a,b,c);
				break;
			}
		case 2: 
		{       HinhTron(a);
		        break;
			}
		case 3:
		{       HinhBinhHanh(a,b,c);
				break;  
			}
		case 4:
		{       HinhVuong(a);
		        break;
			}
		case 5:
		{   
		       HinhChuNhat(a,b);
		       break;
			}
		case 6:
		{
			HinhThoi(a,b);
			break;
				}
		case 7:
		{
			HinhThang(a,b,c,d);
			break;
				}
		case 8:
		{
			HinhLucGiacDeu(a);
			break;
				}
		case 9:
			{
		    HinhBatGiacDeu(a);
			break;
		    }
		case 10:
		{
				KhoiLapPhuong(a);
				break;
			}
		case 11: 
		{       HinhHopChuNhat(a,b,c);
		        break;
			}
		case 12:
		{       HinhTru(a,b);
				break;  
			}
		case 13:
		{       HinhCau(a);
		        break;
			}
		case 14:
		{   
		       HinhNon(a,b);
		       break;
			}
		case 15:
		{
			HinhChopTamGiacDeu(a,b);
			break;
				}
		case 16:
		{
			HinhChopTuGiacDeu(a,b);
			break;
				}
		case 17:
		{
			HinhLangTruTamGiacDeu(a,b);
			break;
				}
		case 18:
			{
		       printf("Goodbye! See you again <3");
		       exit(0);
			    }    
		default:
		{
			printf("Lua chon khong hop le, vui long nhap lai!\n");
			break;
		  }	  				
	}
	}   
}
int main()
{
 Menu();
}
