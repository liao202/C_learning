#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

int* numsIntersection(int* nums1, int len1, 
	int* nums2, int len2, int* len)
{
	int i = 0;
	int j = 0;
	int* nums = (int*)malloc(sizeof(int));
	for (i = 0; i < len1; ++i)
	{
		int value = nums1[i];
		for (j = 0; j < len2; ++j)
		{
			if (value == nums2[j])
			{
				nums[*len] = value;
				++(*len);
				nums = (int*)realloc(nums, sizeof(int) * ((*len) + 1));
				break;
			}
		}
	}
	if (*len <= 0)
	{
		return NULL;
	}
	return nums;
}

int main()
{
	srand((unsigned int)time(0));
	int* nums1 = NULL;
	int* nums2 = NULL;
	int* nums = NULL;
	int len1 = 0;
	int len2 = 0;
	int len = 0;
	printf("Please input len1 and len2: \n");
	scanf("%d %d", &len1, &len2);
	assert(len1 >= 0 && len2 >= 0);
	nums1 = (int*)malloc(sizeof(int) * len1);
	nums2 = (int*)malloc(sizeof(int) * len2);
	assert(nums1 != NULL && nums2 != NULL);
	arrInit(nums1, len1);
	arrInit(nums2, len2);
	printf("The nums1 is: \n");
	arrDisplay(nums1, len1);
	printf("The nums2 is: \n");
	arrDisplay(nums2, len2);
	nums = numsIntersection(nums1, len1, nums2, len2, &len);
	if (nums != NULL)
	{
		printf("The nums intersection is: \n");
		arrDisplay(nums, len);
	}
	else
	{
		printf("The nums intersection is empty!\n");
	}
	free(nums1);
	nums1 = NULL;
	free(nums2);
	nums2 = NULL;
	free(NULL);
	nums = NULL;
	system("pause");
	return 0;
}