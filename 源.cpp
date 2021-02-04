#include<stdio.h>
int main()
{
	int count = 0;
	printf("请输入一串字符：");

	while (getchar() != '\n')//使用getchar来获取字符，当输入不是换行符（回车）时，bool值为1，count+1
	{
		count = count + 1;
	}
	printf("你输入了%d个字符", count);
	
	return 0;

}