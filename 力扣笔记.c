#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//欲使用随机数srand((unsigned int)time(NULL))，random()函数，需要引如下两个头文件
#include<stdlib.h>
#include<time.h>

////1. 两数之和
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int* ret = malloc(8);
//    int i, j;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        for (j = i + 1; j < numsSize; j++)
//        {
//            if (nums[i] + nums[j] == target) {
//                ret[0] = i;
//                ret[1] = j;
//                break;
//            }
//        }
//
//    }
//    *returnSize = 2;
//    return ret;
//}

//2. 两数相加(未解决！！！）学会了创建链表再做

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
//{
//    int i = 0, j = 0;
//    //while (*(l1 + i))
//    //{
//    //    i++;
//    //}
//    //while (*(l2 + j))
//    //{
//    //    j++;
//    //}
//    int k = 0;
//    int l11 = 0, l22 = 0, l33 = 0;
//    for (i = 0; (l1 + i) != 0; i++)
//    {
//        l11 += (*(l1 + i)) * pow(10, i);
//    }
//    for (j = 0; (l2 + j) != 0; j++)
//    {
//        l22 += (*(l2 + j)) * pow(10, j);
//    }
//    l33 = l11 + l22;
//    struct ListNode* l3;
//    for (k = 0; k; k++)
//    {
//        *(l3 + k) = (l33 / pow(10, k)) % 10;
//    }
//    return l3;
//}
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
//{
//    struct ListNode* l11 = l1;
//    struct ListNode* l22 = l2;
//    while (l11 != NULL || l22 != NULL)
//    {
//        if (l11 == NULL || l22 == NULL)
//            ;
//        else
//        l11->val += l22->val;
//        if (l11->val >= 10)
//        {
//            l11->val %= 10;
//            if (l11->next != NULL)
//            l11->next->val += 1;
//        }
//        if(l11 != NULL)
//        l11 = l11->next;
//        if(l22 != NULL)
//        l22 = l22->next;
//    }
//    return l1;
//}
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//int main(void)
//{
//    return 0;
//}

////3. 无重复字符的最长子串
//int lengthOfLongestSubstring(char* s)
//{
//    int temp = 0, i = 0, j = 0, sl = 0, n = 0, beg = 0, end = 0;
//    for (i = 0; *(s + i) != '\0'; ++i);
//    sl = i;
//    for (beg = 0; beg < sl; ++beg)
//    {
//        end = sl - 1, temp = sl;
//        for (i = beg; i <= end; ++i)
//        {
//            for (j = i + 1; j <= end; ++j)
//            {
//                if (s[i] == s[j])
//                    break;
//            }
//            if (i == j)
//                end = j;
//            else
//                end = j - 1;
//            if (end - beg + 1 < temp)
//                temp = end - beg + 1;
//        }
//        if (temp > n)
//            n = temp;
//    }
//    return n;
//}
//int main()
// {
//    char ch[] = "abca";
//    printf("%d", lengthOfLongestSubstring(ch));//答案应该是3
//    return 0;
//}

////4. 寻找两个正序数组的中位数
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//    int numsx[2000] = { 0 };
//    int i = 0, j = 0, temp = 0, count = 0;
//    for (i = 0; i < nums1Size; i++)
//    {
//        numsx[i] = *(nums1 + i);
//    }
//    for (i = 0; i < nums2Size; i++)
//    {
//        numsx[nums1Size + i] = *(nums2 + i);
//    }
//    while (count <= nums1Size + nums2Size)
//    {
//        for (i = 0; i < nums1Size + nums2Size - 1; i++)
//        {
//            j = i + 1;
//            if (numsx[i] > numsx[j])
//            {
//                temp = numsx[j];
//                numsx[j] = numsx[i];
//                numsx[i] = temp;
//            }
//        }
//        count++;
//    }
//    int sz = nums1Size + nums2Size;
//    if (sz % 2 == 0)
//        return (numsx[(sz/2)-1] + numsx[(sz/2)])/2.0;
//    else
//        return numsx[sz / 2];
//}
//int main()
//{
//    int nums1[] = {1,2};
//    int nums2[] = {3,4};
//    printf("%lf",findMedianSortedArrays(nums1, 2, nums2, 2));
//    return 0;
//}

////5. 最长回文子串
////给你一个字符串 s，找到 s 中最长的回文子串。
////如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。
////输入：s = "babad"
////输出："bab"
////解释："aba" 同样是符合题意的答案。
//char* longestPalindrome(char* s) {
//	int sz = 0, i = 0, l = 0, left = 0, right = 0, j = 0, k = 0, count = 0;//j,k用于循环赋值得到字符串
//	char temp = 0;
//	//得到s的长度
//	for (i = 0; *(s + i) != '\0'; i++);
//	sz = i;
//	//从最长的开始判断是否是回文子串，是即保存并返回
//	// 得到一个子串(当前最长
//	for (l = sz; l > 0; l--)
//	{
//		for (i = 0; i <= sz - l; i++)
//		{
//			left = i, right = i + l - 1;
//			int flag = 1;
//			while (left <= right)
//			{
//				if (*(s + left) == *(s + right))
//					left++, right--;
//				else
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				count++;
//				break;
//			}
//		}
//		if (count != 0)
//			break;
//	}
//	char* ret = malloc(l);
//	for (j = i, k = 0; j < i + l; j++, k++)
//	{
//		*(ret + k) = *(s + j);
//	}
//	
//	*(ret + l) = '\0';
//	return ret;
//}
//int main()
//{
//	printf("%s", longestPalindrome("babcd"));
//	return 0;
//}

////6. N 字形变换
//char* convert(char* s, int numRows) {
//	//行数等于1的另作处理
//	if (numRows == 1)
//		return s;
//	//默认行数大于1
//	//得到字符串长度
//	int sz = strlen(s);
//	//用一个数组来标记s中的各个元素应该在第几行
//	int* sign = malloc(sizeof(int)*sz);
//	int i=0,j = 1;//代表行数
//	int flag = 1;//flag=1行数就增加，=0就减少
//	for (i = 0; i < sz; i++)
//	{
//		sign[i] = j;
//		if (j == numRows)
//			flag = 0;
//		else if (j == 1)
//			flag = 1;
//		if (flag == 1)
//			j++;
//		else
//			j--;
//	}
//	//按照标记遍历numRows次数组按照n字形一行一行地挨个行存储
//	char* ret = malloc(sizeof(char) * sz+1);
//	int number=0;
//	for (j = 1; j <= numRows; j++)//j代表到第几行了
//	{
//		for (i = 0; i < sz; i++)//i在标记中循环遍历
//		{
//			if (sign[i] == j)
//			{
//				ret[number] = s[i];
//				number++;
//			}
//		}
//	}
//	ret[number] = '\0';
//	return ret;
//}
//int main()
//{
//	printf("%s", convert("PAYPALISHIRING", 3)); //输出："PAHNAPLSIIGYIR"
//	return 0;
//}

////7. 整数反转
//int reverse(int x) {
//    if (x == 2147483648)
//        return 0;
//    int xx = x < 0 ? (-1) * x : x;//让xx为x的绝对值
//    int length = 1,
//        i = xx;
//    while ((i /= 10) != 0)//得到x的长度
//    {
//        length++;
//    }
//        int j = 0;
//    if (length == 10)
//    {
//        int max = 2147483647;
//        for (i = xx, j = 1000000000; i > 0; i /= 10, j /= 10)
//        {
//                if (i % 10 > (max / j) % 10)
//                    return 0;
//                else if (i % 10 < (max / j) % 10)
//                    break;
//        }
//    }
//    int s = 0, ret = 0;
//    for (i = 0; i < length; i++)
//    {
//        s = xx;
//        for (j = 0; j < i; j++)
//            s /= 10;
//        s %= 10;
//        for (j = 0; j < length - i - 1; j++)
//            s *= 10;
//        ret += s;
//    }
//    return x < 0 ? ret * (-1) : ret;
//}
//int main(void)
//{
//    printf("%d", reverse(-2147483412));
//    return 0;
//}

////8. 字符串转换整数(atoi)
//int myAtoi(char* s) {
//    int ret = 0, sign = 1;
//    for (; *s == ' '; ++s);
//    if (*s == '-')
//    {
//        sign = -1;
//        s++;
//    }
//    else if (*s == '+')
//    {
//        sign = 1;
//        s++;
//    }
//    for (; *s == '0'; s++);
//    int count = 0;
//    while (*s <= '9' && *s >= '0')
//    {
//        count++;
//        s++;
//    }
//    s--;
//    if (count > 10)
//        return sign == 1 ? 2147483647 : 2147483648;
//    int i = 0, j = 0;
//    for (i = 0; i < count; i++)
//    {
//        int temp = *(s - i) - '0';
//        if (count == 10 && i == 9)
//        {
//            if (temp > 2)
//                return sign == 1 ? 2147483647 : 2147483648;
//            else if (temp == 2)
//            {
//                if (sign == 1 && ret >= 147483647)
//                    return 2147483647;
//                else if (sign == -1 && ret >= 147483648)
//                    return 2147483648;
//            }
//        }
//        for (j = 0; j < i; j++)
//        {
//            temp *= 10;
//        }
//        ret += temp;
//    }
//    return sign * ret;
//}
//int main(void)
//{
//    char s[50] = "4193 with words";
//    printf("%d", myAtoi(s));
//    return 0;
//}

////11. 盛最多水的容器
//int maxArea(int* height, int heightSize) {
//	int i,imax=0,jmax=0, j,v=0,vmax=0;
//	for (i = 0; i < heightSize-1;++i)
//	{
//		if (height[i] > imax)
//		{
//			imax = height[i];
//			jmax = 0;
//			for (j = heightSize - 1; j > i; --j)
//			{
//				if (height[j] > jmax)
//				{
//					jmax = height[j];
//					v = (height[i] > height[j] ? height[j] : height[i]) * (j - i);
//					vmax = v > vmax ? v : vmax;
//				}
//			}
//		}
//	}
//	return vmax;
//}
//int main(void)
//{
//	int height[]={2,3,4,5,18,17,6};
//	printf("%d",maxArea(height,7));
//	return 0;
//}

////12. 整数转罗马数字
//char* intToRoman(int num)
//{
//	int n1, n2, n3, n4;
//	n1 = num % 10;
//	n2 = (num / 10) % 10;
//	n3 = (num / 100) % 10;
//	n4 = (num / 1000) % 10;
//	int i = 0;
//	char*ch1 =malloc(20);
//	if (n4 != 0)
//	{
//		for (i = 0; i < n4; i++)
//			ch1[i] = 'M';
//		ch1[i] = '\0';
//	}
//	char* ch2 = &ch1[i];
//	i = 0;
//	if (n3 != 0)
//	{
//		if (n3 == 4)
//		{
//			ch2[0] = 'C';
//			ch2[1] = 'D';
//			ch2[2] = '\0';
//			i = 2;
//		}
//		else if (n3 == 9)
//		{
//			ch2[0] = 'C';
//			ch2[1] = 'M';
//			ch2[2] = '\0';
//			i = 2;
//		}
//		else if (n3 >= 5)
//		{
//			ch2[0] = 'D';
//			for (i = 1; i <= n3 - 5; i++)
//				ch2[i] = 'C';
//			ch2[i] = '\0';
//		}
//		else
//		{
//			for (i = 0; i < n3; i++)
//				ch2[i] = 'C';
//			ch2[i] = '\0';
//		}
//	}
//	char*ch3 = &ch2[i];
//	i = 0;
//	if (n2 != 0)
//	{
//		if (n2 == 4)
//		{
//			ch3[0] = 'X';
//			ch3[1] = 'L';
//			ch3[2] = '\0';
//			i = 2;
//		}
//		else if (n2 == 9)
//		{
//			ch3[0] = 'X';
//			ch3[1] = 'C';
//			ch3[2] = '\0';
//			i = 2;
//		}
//		else if (n2 >= 5)
//		{
//			ch3[0] = 'L';
//			for (i = 1; i <= n2 - 5; i++)
//				ch3[i] = 'X';
//			ch3[i] = '\0';
//		}
//		else
//		{
//			for (i = 0; i < n2; i++)
//				ch3[i] = 'X';
//			ch3[i] = '\0';
//		}
//	}
//	char*ch4 = &ch3[i];
//	i = 0;
//	if (n1 != 0)
//	{
//		if (n1 == 4)
//		{
//			ch4[0] = 'I';
//			ch4[1] = 'V';
//			ch4[2] = '\0';
//			i = 2;
//		}
//		else if (n1== 9)
//		{
//			ch4[0] = 'I';
//			ch4[1] = 'X';
//			ch4[2] = '\0';
//			i = 2;
//		}
//		else if (n1 >= 5)
//		{
//			ch4[0] = 'V';
//			for (i = 1; i <= n1 - 5; i++)
//				ch4[i] = 'I';
//			ch4[i] = '\0';
//		}
//		else
//		{
//			for (i = 0; i < n1; i++)
//				ch4[i] = 'I';
//			ch4[i] = '\0';
//		}
//	}
//	return ch1;
//}
//int main(void)
//{
//	printf("%s", intToRoman(101));
//		return 0;
//}
