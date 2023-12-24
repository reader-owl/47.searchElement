#include <iostream>

/*
                Q. search element in rotated sorted array II

            explanation -  array -  srr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6}  target = 3
                            unlike previous question here we can have duplicates in our array

                    approach from previous question will not work, bcz there are duplicates
                    if same element repeats at low, mid and high, then we have to shrink our search
                    spaces and have to add some conditions in our code

                    if(arr[low] == arr[mid] && arr[mid] == arr[high])
                    {
                        low = low + 1;
                        high = high - 1;
                        continue;
                    }


        Actual code
bool searchInRotatedSortedArrayII(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == k)
            return true;

        if(arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++, high--;
            continue;
        }

        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= k && k <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if(arr[mid] <= k && k <= arr[high])
                low = mid + 1;
            else
                high = mid -1;
        }
    }
    return false;
}


                TC - O(log base2 N)                 // most of the cases
                TC - O(N/2)                         // if array is shrinked to half
*/

int main()
{
    std::cout << "Hello World!\n";
}