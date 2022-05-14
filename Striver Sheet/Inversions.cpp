#include <bits/stdc++.h>

using namespace std;
long long solve(long long *arr, long long *temp, int start, int end)
{

    if (start >= end)
        return 0;
    int mid = end + (start - end) / 2;
    long long ans = 0;

    ans += (solve(arr, temp, start, mid) + solve(arr, temp, mid + 1, end));

    int i = start, j = mid + 1, index = start;
    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            temp[index++] = arr[j++];
            ans += (mid - i + 1);
        }
        else
        {
            temp[index++] = arr[i++];
        }
    }
    while (i <= mid)
    {

        temp[index++] = arr[i++];
    }
    while (j <= end)
    {

        temp[index++] = arr[j++];
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i];
    }

    return ans;
}

long long getInversions(long long *arr, int n)
{
    // Write your code here.
    long long int temp[n];
    return solve(arr, temp, 0, n - 1);
}

int main()
{
    long long int arr[] = {5, 3, 2, 1, 4};
    int n = 5;

    int ans = getInversions(arr, n);
    cout << "The total inversions are " << ans << endl;

    return 0;
}