#include<stdio.h>

void main()
{
	int so,temp,digit,sum=0;
	
	printf("\nNhap so can xu li : ");
	scanf("%d",&so);
	
	temp=so;
	while(so>0)
	{
		digit=so % 10;
		sum=sum+digit;
		so /=10;
	}
	printf("\n so can nhap la : %d",temp);
	printf("\n tong cac chu so %d = %d ",temp,sum);
}
