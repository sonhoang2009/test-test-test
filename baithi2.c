#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int i;
	printf("\n nhap chuoi : ");
	gets(str);
	
	for(i=0;i <= strlen(str);i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		str[i]=str[i] + 32;
	}
	printf("\n chuoi viet thuong la: %s",str);
	return 0;
}
