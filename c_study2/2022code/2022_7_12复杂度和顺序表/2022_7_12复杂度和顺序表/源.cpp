#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序复杂度
void BubbleSort(int* a, int n)
{
	assert(a);
	
	//冒泡排序循环N,N-1,N-2......2,1次
	//时间复杂度为F(N) = (N*(N-1))/2
	//表示为O(N*2)

	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

//二分查找复杂度
int BinarySearch(int* a, int n, int x)
{
	assert(a);

	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}

	return -1;
}

