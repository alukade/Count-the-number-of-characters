#include<stdio.h>
int main()
{
	int count = 0;
	printf("������һ���ַ���");

	while (getchar() != '\n')//ʹ��getchar����ȡ�ַ��������벻�ǻ��з����س���ʱ��boolֵΪ1��count+1
	{
		count = count + 1;
	}
	printf("��������%d���ַ�", count);
	
	return 0;

}