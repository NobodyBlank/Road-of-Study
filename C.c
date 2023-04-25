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
//		printf("坤哥的小鸡仔马上要孵化出来了，现在有一个猜数字游戏可以帮助鸡仔更快啄碎蛋壳\n注意：该数字在1~100之间，你只有7次机会去猜这个数字！\n")
//      printf("\n***********************\n*****输入1开始游戏*****\n*****输入0退出游戏*****\n***********************\n\n");
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

////输入一个double型实数x，计算出y=ex+log2x+3x的结果，
////分别输出y的值，y的整数部分、和两种形式的小数部分，
////一种是小数部分以四舍五入方式保留5位小数部分，
////还有一种以截断方式显示小数点后5位。
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
//    char a = 'w';
//    char* pc ='w';
//    printf("%c", pc);//为什么这里不用解引用？
//    return 0; //因为这个时候指针指的虽然是字符，但是处理的过程是和指针直接指向字符串的处理过程一样的，
//              //因此printf时候用char*类型的变量，而不是char类型的，因此不需要解引用
//}

//int main()
//{
//    int arr[5] = { 1,2,3,4,5 };
//    //printf("%d", *(arr+1));
//    int(*parr)[5] = &arr;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //printf("%d ", (*parr)[i]);
//        printf("%p %p ", parr+1,*parr+1);//结论：数组指针中，数组的地址放在了p里，p指向arr，
//                                         //(*p)就是原来的arr,也相当于指针，
//                                         //不过是指向数组首元素，那么*(*p)就是数组的首元素
//    }                                    //因此，对p+1相当于跳过了整个数组，但是对(*p+1)相当于只是跳过了数组的首元素。
//    return 0;    //p[i]能不能挨个打印数组？不能，应该是(*p)[i] 或者 *(*parr+i)
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p %p %p ", &arr[0], &arr[1], &arr[0]+1);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src) {
//	char* ret = dest; 
//	//1．找到目标空间的末尾\0
//	while (*dest++)
//	{
//	    ;
//	}
//	dest--;
//	//2．拷贝字符串
//	while (*dest++ = *src++)
//	{
//	    ;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr1[20] = "hello ";
//		my_strcat(arr1, "world");
//	printf("%s", arr1);
//
//}

//int main(void)
//{
//	int a = 0;
//	int sum = 0;
//	while (scanf("%d", &a) == 1)
//	{
//		sum += a;
//		if ((a=getchar()) == '\n')
//			break;
//		else
//			ungetc(a,stdin);
//	}
//	printf("%d", sum);
//	return 0;
//} 

//main()
//
//{
//    int a = 2, b = -1, c = 2;
//
//    if (a < b)
//        if (b < 0) c = 0;
//    
//    else c++;
//
//    printf("%d\n", c);
//
//}

//int main()
//{
//    int num = 0;
//    int x = 0;
//    int sum = 0;
//    scanf("%d", &num);
//    int count = 0;
//    while (count < num)
//    {
//        scanf("%d", &x);
//        if (x == '\n')
//            break;
//        sum += x;
//        count++;
//    }
//    float avg = (float)sum / num;
//    if (avg >= 90)
//        printf("优秀");
//    else if (avg < 60)
//        printf("差");
//    else
//        printf("良好");
//    return 0;
//}

//int main()
//{
//    int m, n;
//    scanf("%d,%d",&m,&n);
//    int i = 0;
//    for (i = m; i <= n; i++)
//    {
//        int flag = 1, j;
//        for (j = 2; j <= (i/2); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//    int line = 0, n = 0, num = 1;
//    scanf("%d",&n);
//    int i = 0;
//    for (i = 0; i < n-1; num += 2, i++);
//    for (line = 0; line < n; line++)
//    {
//        for (i = 0; i < line; i++)
//            printf(" ");
//        for (i = 0; i < num; i++)
//            printf("*");
//        printf("\n");
//        num -= 2;
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = n; i > 0; i--)
//    {
//        if (i % 17 == 0)
//            break;
//    }
//    printf("%d", i);
//    return 0;
//}

//main()
//{
//	int num, digit = 0, t;
//	printf("input a number\n");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		t = num % 10;
//		if (!(t % 2))
//			digit = 10 * digit + t;
//
//		num /= 10;
//	}
//	printf("%d\n", digit);
//}

//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int m=0;
//    int count;
//    int i = n;
//    for (count = 0; i != 0; count++, i /= 10);
//    int tmp;
//    for (i = 0; i < count; i++)
//    {
//        int j;
//        tmp = n % 10;
//        m *= 10;
//        m += tmp;
//        n /= 10;
//    }
//    printf("逆序数为%d,位数为%d", m, count);
//    return 0;
//}

//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch))
//    {
//        if (ch == '\n')
//            break;
//        if (ch == 'x')
//            printf("a");
//        else if (ch == 'y')
//            printf("b");
//        else if (ch == 'z')
//            printf("c");
//        else if (ch == 'X')
//            printf("A");
//        else if (ch == 'Y')
//            printf("B");
//        else if (ch == 'Z')
//            printf("C");
//        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//            printf("%c", ch + 3);
//        else
//            printf("%c", ch);
//    }
//    return 0;
//}

//探索一下汉诺塔问题和青蛙跳台阶问题（还未探索）
//如果鹏哥的课程后面没有讲函数栈帧（函数栈帧的创建和销毁讲解），函数压栈，那就自己研究一下
//typedef是什么意思呢？
//研究一下KMP算法
//最大公约数和最小公倍数计算方法：辗转相除法求最大公约数，两数相乘除以最大公约数等于最小公倍数
//ezayx图形框架和QT图形框架
//i/O设备有哪些
