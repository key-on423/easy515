#include <stdio.h>

//1.��д�����¶ȣ������¶�ת������Ҫ�󣺴Ӽ�������һ����ʩά�ȣ���Ļ����ʾ
//��Ӧ�Ļ����¶ȣ����ȡ��λС����ת����ʽ��F=C*9/5+32

//int main()
//{
//	printf("������һ�������¶ȣ��ҽ�������Ļ����¶�:\n");
//	double she, hua;
//	scanf("%lf", &she);
//	hua = she * 9 / 5+32;
//	printf("���Ļ����¶�Ϊ��%.2lf", hua);
//	return 0;
//}

//2.�Ա���ж�������������Ƿ����5����7�������������ǣ������yes���������no

//int main()
//{
//	printf("������һ�����������ҽ�Ϊ���ж����Ƿ���5��7�ı���\n");
//	int x;
//	scanf("%d", &x);
//	if (x % 5 == 0 && x % 7 == 0)
//		printf("yes!\n");
//	else
//		printf("no!\n");
//	return 0;
//}


//3.�ж���m�Ƿ�Ϊ����?(1��������)
//#include <math.h>
//int main()
//{
//	printf("������һ���������ҽ�Ϊ���ж����Ƿ�������\n");
//	int x,y,panbie;
//	scanf("%d", &x);
//	for (y = 2;y <= sqrt(x);y++)
//	{
//		    panbie = 1;
//		if (x % y == 0)
//			panbie = -1;
//	}
//	if (panbie == 1)
//		printf("%d������\n", x);
//	else
//		printf("%d��������\n", x);
//	return 0;
//}

//4.��15�����������򣬰���С�����˳�����

void main()
{
	int arr[15];
	printf("������15�������ҽ�����С�����˳�����\n");
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