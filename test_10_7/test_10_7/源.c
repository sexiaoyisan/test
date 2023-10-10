#include <stdio.h>
#include <time.h>
#include<conio.h>


//void delay()失败的延迟函数
//{
//	time_t start, end;
//	start = time(null);
//	unchar i;
//	while (z -- );
//	{
//		for (i = 0;ilt;121;i++);
//	}
//	end = time(null);
//
//}


int main()
{



	//char ch;失败的延迟函数
	//system("stty -icanon");//关闭缓冲区, 输入字符无需按回车键直接接受
	//ch = getchar();
	//if (ch =='w')
	//	printf("OK\n");
	//return 0;





	printf("11111\n11111\n11800\n11111\n11111");
	srand(time(0));
	int max = 12;
	int se[] = { 0,0,0,0,0,0,0,0,0,0,0,0,4,3,2,0,0,0,0,0,0,0,0,0,0 };
	int fs = 0;
	int maxsum = 4;
	char cz;
	int jc = 1;
	int apple[25];
	int time2 = 0;
	int end = 0;

	do
	{
		int i = 0;
		int y = 0;
		int ii = 0;
		

		int time1 = rand() % 24;
		for (i = 0;i < 25;i++)//数组复制
		{
			apple[i] = se[i];
		}
		if (jc == 1)//红点没有被吃不能进行随机值刷新
		{
			printf("\n当前随机数是%d\n", time1);

			
			i = -1;
			while (i < 0)//当红点在不可放置地方时，重新生成随机数
			{
				printf("检查随机数中\n");
				if (apple[time1] > 1)
				{
					time1 = rand() % 24;
					printf("\n当前随机数是%d\n", max);
				}

				else
				{
					printf("随机数检查完毕\n");
					i = 0;
					time2 = time1;
					apple[time1] = -100;
					se[time1] = -100;
					break;
				}

			}
			jc--;
		}
		//for (i = 0;i < 25;i++)//求最大值地址
		//{
		//	if (apple[max] < apple[i])
		//	{
		//		max = i;
		//		printf("当前最大值是%d\n", max);
		//	}
		//	
		//}
		
		y = 0;
		for (ii = 0;ii < 5;ii++)//译码显示部分
		{
			for (i = 0; i < 5; i++)
				if (apple[y] == -100)
				{
					printf("* ");
					y++;
				}
				else if (apple[y] == 1)
				{
					se[y]=0;
					end = y;
					printf("1 ");
					y++;
				}
				else if (y == max)
				{
					se[y]--;
					printf("8 ");
					y++;
				}
				else if (apple[y] > 1)
				{
					se[y]--;
					printf("0 ");
					y++;
				}
				else
				{
					printf("1 ");
					y++;

				}
			printf("\n");
		}

		   //scanf("%c\n", cz); 这个需要回车确定
		    /*for (i = 0; i < 25; i++)
			printf("%d", apple[i]);*/
			//char ch;
			//ch = _getch();//需要#include<conio.h>，这个是不用用回车输入命令
			//if (ch == 'w')


		do//蛇穿墙逻辑
		{
			i = 0;
			cz = _getch();//不用回车确定就可以输入
			if (cz == 'w')
			{
				if (max == 1 || max == 2 || max == 3 || max == 4 || max == 0)
					max = max + 20;
				else
					max = max - 5;
			}
			else if (cz == 'a')
			{
				if (max == 0 || max == 5 || max == 10 || max == 15 || max == 20)
					max = max + 4;
				else
					max = max - 1;
			}
			else if (cz == 's')
			{
				if (max == 20 || max == 21 || max == 22 || max == 23 || max == 24)
					max = max - 20;
				else
					max = max + 5;
			}
			else if (cz == 'd')
			{
				if (max == 4 || max == 9 || max == 14 || max == 19 || max == 24)
					max = max - 4;
				else
					max = max + 1;
			}
			else
			{
				printf("\n请用英语输入法输入小写的‘w’‘a’‘s’‘d’");
				i = -1;
			}


		} while (i == -1);
		if (apple[max] > 1)
			fs = -100;
		se[max] = maxsum;//头部移动
		printf("\n检测是否吃到红点\n");
		if (max == time2)//检测是否吃到红点
		{
			printf("蛇吃到红点\n");
			for (i = 0;i < 24;i++)
			{
				if (apple[i] > 0)
				{
					se[i]++;
				}
			}
			maxsum++;
			jc++;
		}
		else				
			se[end] = 0;	//消去蛇尾	
		printf("max=%d\n", max);
	}
	while (fs > -10);
	printf("\n游戏结束");
	return 0;

	//return 0;
}










