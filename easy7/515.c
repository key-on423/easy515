#include <stdio.h>

//1.编写摄氏温度，华氏温度转换程序，要求：从键盘输入一个设施维度，屏幕就显示
//对应的华氏温度，输出取两位小数。转换公式：F=C*9/5+32

//int main()
//{
//	printf("请输入一个摄氏温度，我将输出它的华氏温度:\n");
//	double she, hua;
//	scanf("%lf", &she);
//	hua = she * 9 / 5+32;
//	printf("它的华氏温度为：%.2lf", hua);
//	return 0;
//}

//2.试编程判断输入的正整数是否既是5又是7的正倍数。若是，则输出yes，否则输出no

//int main()
//{
//	printf("请输入一个正整数，我将为你判断他是否是5和7的倍数\n");
//	int x;
//	scanf("%d", &x);
//	if (x % 5 == 0 && x % 7 == 0)
//		printf("yes!\n");
//	else
//		printf("no!\n");
//	return 0;
//}


//3.判断数m是否为素数?(1不是素数)
//#include <math.h>
//int main()
//{
//	printf("请输入一个整数，我将为你判断他是否是素数\n");
//	int x,y,panbie;
//	scanf("%d", &x);
//	for (y = 2;y <= sqrt(x);y++)
//	{
//		    panbie = 1;
//		if (x % y == 0)
//			panbie = -1;
//	}
//	if (panbie == 1)
//		printf("%d是素数\n", x);
//	else
//		printf("%d不是素数\n", x);
//	return 0;
//}

//4.对15个数进行排序，按从小到大的顺序输出

void main()
{
	int arr[15];
	printf("请输入15个数，我将按从小到大的顺序输出\n");
	int x,y;
	for (x = 0;x < 15;x++)
	{
		scanf("%d", &arr[x]);
	}
	for (y = 0;y < 15;y++)
		for (x = 0;x < 14 - y;x++)
			if (arr[x] > arr[x + 1])
			{
				int t = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = t;

			}

	for (x = 0;x < 15;x++)
		printf("%d ", arr[x]);
}