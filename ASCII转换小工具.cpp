#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define N 65535
#define MAX 127
#define WAIT_SECOND 500000
#define small_second 100000
void print(char x[1001])
{
	for(int i=0;i<strlen(x);i++)
	{
		printf("%c",x[i]);
		usleep(35000);
	}
}

int main()
{
	char a,enter;
	char str[1001];
	char str1[]="�̻����ţ����鳤�棡\n"; 
	char str2[]="��ӭʹ��Ўƃ��ASCIIС����\n";
	char str3[]="���ߣ�Ўƃ����\n"; 
	char str4[]="\n|����ʹ��������1���˳�������0��";
	char str5[]="|��ѡ������Ҫ�Ĺ��ܣ�             \n";
	int choose;
	int n=2;
	int m=2;
	
	print(str2);
	print(str3);
	print(str1);
	
	while(m!=0)
	{
		print(str5);
		sleep(1);
		printf("|    ASCII��ת�ַ�����������1       |\n");
		usleep(WAIT_SECOND);
		printf("|    �ַ�תASCII�롪��������2       |\n");
		usleep(WAIT_SECOND);
		printf("|  �ַ���תASCII�롪��������3       |\n");
		usleep(WAIT_SECOND);
		printf("|           �˳�����������0         |\n"); 
		usleep(WAIT_SECOND);
		printf("|�����룺"); 
		scanf("%d",&choose);
		if(choose==1)
	    { 
	    	while(n!=1)
	    	{
	    		printf("|����������ת����ASCII��(��ֵС��%d)��",MAX);
	    	    scanf("%d",&a);
	    	    if(a<0||a>127)
	    	    {
	    		    printf("|����������ֹ�����С������������Ŷ\n");
	    		    usleep(WAIT_SECOND);
	    	    }
	    	    else
	    	    {
	    	    	printf("|%d������ַ�Ϊ%c\n",a,a);
			    	usleep(WAIT_SECOND);
			    	n=1;
				}
			};
		}
		if(choose==2)
		{
			printf("|����������ת�����ַ���");
			scanf("%c",&enter);
			scanf("%c",&a);
			printf("|%c�����ASCII��Ϊ%d\n",a,a);
		}
		if(choose==3)
		{
			printf("|����������Ҫת�����ַ���������ֻ֧��Ӣ�ģ����֧��1000�ֵ�ת������");
			scanf("%s",str);
			printf("|���ַ�����ASCII���ǣ�\n|");
			for(int i=0;i<strlen(str);i++)
			{
				if(i%4 == 0 && i>3)
				{
					printf("\n|");
				}
				printf("%d ",str[i]);
			}
		}
		print(str4) ;
		scanf("%d",&m);
		if(m!=1 && m!=0) 
		{
			printf("������󣡲������鿨�������ߵģ�\n");
			break; 
		}
	}
	if(m==0)
	{
		printf("��л����ʹ�ã�\n");
	}
	usleep(WAIT_SECOND);
	printf("�����˳�");
	printf(".");
	usleep(WAIT_SECOND);
	printf(".");
	usleep(WAIT_SECOND);
	printf(".");
	sleep(1);
	return 0;
} 
