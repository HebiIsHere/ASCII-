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
	char str1[]="烟花易逝，人情长存！\n"; 
	char str2[]="欢迎使用袔苾的ASCII小工具\n";
	char str3[]="作者：袔苾来啦\n"; 
	char str4[]="\n|继续使用请输入1，退出请输入0：";
	char str5[]="|请选择你需要的功能：             \n";
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
		printf("|    ASCII码转字符——请输入1       |\n");
		usleep(WAIT_SECOND);
		printf("|    字符转ASCII码——请输入2       |\n");
		usleep(WAIT_SECOND);
		printf("|  字符串转ASCII码——请输入3       |\n");
		usleep(WAIT_SECOND);
		printf("|           退出——请输入0         |\n"); 
		usleep(WAIT_SECOND);
		printf("|请输入："); 
		scanf("%d",&choose);
		if(choose==1)
	    { 
	    	while(n!=1)
	    	{
	    		printf("|请输入你想转换的ASCII码(数值小于%d)：",MAX);
	    	    scanf("%d",&a);
	    	    if(a<0||a>127)
	    	    {
	    		    printf("|您输入的数字过大或过小，请重新输入哦\n");
	    		    usleep(WAIT_SECOND);
	    	    }
	    	    else
	    	    {
	    	    	printf("|%d代表的字符为%c\n",a,a);
			    	usleep(WAIT_SECOND);
			    	n=1;
				}
			};
		}
		if(choose==2)
		{
			printf("|请输入你想转换的字符：");
			scanf("%c",&enter);
			scanf("%c",&a);
			printf("|%c代表的ASCII码为%d\n",a,a);
		}
		if(choose==3)
		{
			printf("|请输入你想要转换的字符串（暂且只支持英文，最多支持1000字的转换）：");
			scanf("%s",str);
			printf("|该字符串的ASCII码是：\n|");
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
			printf("输入错误！不听话抽卡会歪七七的！\n");
			break; 
		}
	}
	if(m==0)
	{
		printf("感谢您的使用！\n");
	}
	usleep(WAIT_SECOND);
	printf("正在退出");
	printf(".");
	usleep(WAIT_SECOND);
	printf(".");
	usleep(WAIT_SECOND);
	printf(".");
	sleep(1);
	return 0;
} 
