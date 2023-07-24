//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <utility>
//using namespace std;
//#define Mul(x,y) ++x*y++
//
//void part(vector<int>& arr, int low, int high)
//{
//	if (low >= high)
//	{
//		return;
//	}
//	int left = low;
//	int right = high;
//	int temp = arr[low];
//	while(low < high)
//	{
//		while (low < high &&  arr[high]>=temp) high--;
//		arr[low] = arr[high];
//		while (low < high && arr[low] <= temp) low++;
//		arr[high] = arr[low];
//	}
//	arr[low] = temp;
//	
//	part(arr, left, low-1);
//	part(arr, low + 1, right);
//}
//
//void quickSort(vector<int>&arr,int low,int high)
//{
//	
//}
//
//void printVec(vector<int>& arr)
//{
//	cout << "ÖµÎª£º" << endl;
//	for (vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	for (int num : arr)
//	{
//		cout << num << endl;
//	}
//}
//
//void mysort(vector<int>& num, int low, int high)
//{
//	if (low >= high)
//	{
//		return;
//	}
//	int i = low;
//	int j = high;
//	int p = num[low];
//
//	while (i < j)
//	{
//
//		while (p <= num[j] && i < j)
//			j--;
//		while (p >= num[i] && i < j)
//			i++;
//		swap(num[i], num[j]);
//	}
//	swap(num[low], num[i]);
//
//	mysort(num, low, i - 1);
//	mysort(num, i + 1, high);
//}
//
//int main()
//{
//	vector<int> nums = { 3,7,5,1};
//	int low = 0;
//	int high = nums.size() - 1;
//	part(nums, low, high);
//	for (int x : nums)
//	{
//		cout << x << "   ";
//	}
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int c = 8;
//	printf("%d", Mul(a + b, b + c));
//	return 0;
//}