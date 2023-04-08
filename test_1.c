#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
//欲使用随机数srand((unsigned int)time(NULL))，random()函数，需要引如下两个头文件
#include<stdlib.h>
#include<time.h>
//int main()//一串字符从两边向中显示
//{
//	while (1)
//	{
//	 char arr1[] = "welcome to ahu!";
//	 char arr2[] = "+++++++++++++++";
//	 int left = 0, right = strlen(arr1)-1;
//	 char a,b;
//	
//		do
//		{
//			a = arr2[left], b = arr2[right];//作为中间变量存储arr2的单字符
//			arr2[left] = arr1[left], arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//			Sleep(300);//暂停的效果 sleep（毫秒数）
//			system("cls");//清空屏幕
//			arr1[left] = a, arr1[right] = b;//达到两个字符串互换的效果
//			left++, right--;
//		} while (right >= 0);
//	}
//	return 0;
//} 
//猜数字游戏
//void game()
//{
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int i = 0;
//	do
//	{
//		printf("请输入你猜的数字\n\n");
//		int b = 0;
//		scanf("%d", &b);
//
//		if (i == 7)
//		{		
//			printf("次数用光，坤鸡孵化加速失败\n鸡哥发动【你干嘛~哈哈~哎呦~】技能，你被气孕\n\n开始一次新的游戏：\n");
//		    break;
//		}
//		else if(b < ret)
//			printf("很遗憾，猜小了，你的行为已经引起了坤哥的注意\n");
//		else if (b > ret) 
//			printf("很遗憾，猜大了，你的行为已经引起了坤哥的注意\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n坤仔已经孵化成功，并习得技能：你干嘛~哈哈~哎呦~（该技能可指定一人被气孕）\n\n开始一次新的游戏：\n");
//			break;
//		}
//		i++;
//
//	} while (1);
//}
//int main()//猜数字游戏
//{
//	srand((unsigned int)time(NULL));
//	do
//	{
//		int a;
//		printf("坤哥的小鸡仔马上要孵化出来了，现在有一个猜数字游戏可以帮助鸡仔更快啄碎蛋壳\n注意：该数字在1~100之间，你只有7次机会去猜这个数字！\n\n***********************\n*****输入1开始游戏*****\n*****输入0退出游戏*****\n***********************\n\n");
//		scanf("%d", &a);
//		if (a==1)
//			game();
//		else if (a == 0)
//			break;
//		else
//			printf("输入出现错误，请输入1或者0\n");
//	} while (1);
//	printf("游戏结束");
//		return 0;
//}
//
//int main()//memset 内存设置（替换）
//{
//	char arr[] = "Hello AHU!";
//	memset(arr, 'h', 5);
//	printf("%s", arr);
//	return 0;
//}
//int run_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	  return 1;
//	else
//	  return 0;
//}
//int main()//输出1000到2000年闰年
//{
//	int x=0,count=0;
//	for (x = 1000; x <= 2000;x++)
//	{
//		if (run_year(x) == 1)
//		{
//			printf("%d ", x);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
// 
// 
//年月日的表达形式有多种，如2010-3-15、2010/3/15、2010#3#15等，编程输入某人的生日（采用任一种形式的日期），再输出该12年后的生日日期。
//int main()
//{
//	int y = 0, m = 0, d = 0;
//	char a=0, b=0;
//	scanf("%d%c%d%c%d", &y,&a,&m,&b,&d);
//	y += 12;
//	printf("%d%c%d%c%d\n", y,a,m,b,d );
//	return 0;
//}
// 
// 
////输入一个数字字符给字符变量ch（保证输入的是字符，输入语句必须用格式符% c，或者用getchar（）函数获取该字符），将其字面数字乘10倍后以整型输出。
//int main()
// {
//	char ch = 0;
//	scanf("%c", &ch);
//	int c = 0;
//	c= (int)ch - '0';
//	c *= 10;
//	printf("%d", c);
//	return 0;
//}
// 
// 
//输入一个double型实数x，计算出y=ex+log2x+3x的结果，分别输出y的值，y的整数部分、和两种形式的小数部分，一种是小数部分以四舍五入方式保留5位小数部分，还有一种以截断方式显示小数点后5位。
//int main()
//{
//	double x = 0, y = 0;
//	scanf("%lf", &x);
//	y = exp(x) + log2(x) + 3 * x;
//	printf("%lf\n", y);
//	printf("%d\n", (int)y);
//	printf("%.5lf\n", y - (int)y);
//	printf("%.5lf\n", y - 0.000005 - (int)y);
//	return 0;
//}
// 
// 
//输入球的半径，输出该球的体积和表面积，输出结果保留小数点后3位，PI取值3.14159。
//int main()
//{
//	float  r = 0,v = 0, s = 0;
//	scanf("%f", &r);
//	v = (4 * 3.14159 * r * r * r) / 3;
//	s = 4 * 3.14159 * r * r;
//	printf("%.3f,%.3f", s, v);
//	return 0;
//}


////输入一个小数位不少于5位的实数x，计算y=x3-3x2+x+5的结果，输出该结果并保留小数点后10位。用double型实数。
//int main()
//{
//	double x = 0, y = 0;
//	scanf("%lf", &x);
//	y = x * x * x - 3 * x * x + x + 5;
//	printf("y=%.10lf", y);
//	return 0;
//}

//斐波那契数列
//int main()
//{
//	int a = 1, b = 1, c = 1;
//	printf("%d %d ", a, b);
//	while (2)
//	{
//		c = a + b,a = b, b = c;
//		printf("%d ", c);
//		Sleep(300);
//	}
//	return 0;
//}
// 
// 
//打印9*9乘法口诀表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
// 
// 
//递归打印一个字符串的每一位
//void the_every(char*p)
//{
//	printf("%c ", *p);
//	if (*p != '\0')
//	{
//		the_every(p+ 1);
//	}
//}
//int main() 
//{
//	char arr[] = "1234";
//	the_every(arr);
//	return 0;
//}
// 
//递归逆向打印一个字符串的每一位
//void the_every(char* p)
//{
//	if (*p != '\0')
//	{
//		the_every(p + 1);
//	}
//	printf("%c ", *p);
//
//}
//int main()
//{
//	char arr[] = "1234";
//	the_every(arr);
//	return 0;
//}
// 
// 
//递归求字符串长度
//int stringlength(char* p)
//{
//	if(*p!='\0')
//	return 1 + stringlength(p + 1);
//}
//int main()
//{
//	char arr[] = "1234";
//	printf("%d\n%d", strlen(arr),stringlength(arr));
//	return 0;
//}
// 
//输入1729，输出1+7+2+9
//int sum_tool(int n)
//{
//	if (n>9)
//		return n%10 + sum_tool((int)n/10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum;
//	sum = sum_tool(n);
//	printf("%d", sum);
//	return 0;
//}

//递归实现n的k次方(n,k均>0）
//int nnk(int n, int k)
//{
//	if (k > 0)
//		return n * nnk(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n, k;
//	printf("输入底数");
//	scanf("%d",&n);
//	printf("输入指数");
//	scanf("%d", &k);
//	int nk = nnk(n, k);
//	printf("%d的%d次方是%d",n,k,nk);
//}

//数组作为函数参数给数组排序(perfect)
//void bubble(int arr[], int sz)
//{
//    int i = 1;
//    for (i = 1; i < sz; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - i; j++)
//        {
//                if (arr[j] > arr[j + 1])
//                {
//                   int temp = arr[j+1];
//                   arr[j+1]=arr[j];
//                   arr[j]=temp;
//                }
//        }
//    }
//}
//int main()
//{
//     int arr[]={9,8,7,6,5,4,3,2,1};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     bubble(arr, sz);
//     int i;
//     for (i = 0; i < 9; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//    return 0;
//}


//void test1(char pb[])
//{
//    printf("%d", sizeof(pb));
//}
//int main()
//{
//    int a[10] = { 0 };
//    int b = 0;
//    char ch[] = { 'w' };
//    printf("%d ", (int)sizeof(ch));
//    test1(ch);
// 	return 0;
//}


//int main()
//{
//	int c = 2, b;
//	b = c + --c;
//	printf("%d", b);
//	return 0;
//}

////写一个函数打印arr数组的内容，不使用数组下标,使用指针。
//void printarr(int* arr,int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	printf("%d ", *(arr+i));
//}
//int main() 
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printarr(arr,sz);
//	return 0;
//}

//int main()
//{
//    
//    return 0;
//}

//探索一下汉诺塔问题和青蛙跳台阶问题（还未探索）
//如果鹏哥的课程后面没有讲函数栈帧（函数栈帧的创建和销毁讲解），函数压栈，那就自己研究一下
