#include <iostream>
using namespace std;

void arrSum(int arr[], int arrLength)
{
    int sum = 0;

    for (int i = 0; i <= arrLength - 1; i++)
    {
        sum += arr[i];
    }

    cout << "The sum of numbers in array is: " << sum;
}

void arrProduct(int arr[], int arrLength)
{
    int product = 1;

    for (int i = 0; i <= arrLength - 1; i++)
    {
        product *= arr[i];
    }

    cout << "The Product of numbers in array is: " << product;
}

void maxNum(int arr[], int arrLength)
{
    int max = 0;

    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The Maximum of numbers in array is: " << max;
}

void minNum(int arr[], int arrLength)
{
    int min = 100;

    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The Maximum of numbers in array is: " << min;
}

int main()
{
    int arr[] = {1, 8, 4, 3, 9, 10, 5, 7, 2, 6};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int Choice;

    do
    {
        cout << "\n Menu \n";
        cout << "1. Sum of Array numbers" << endl;
        cout << "2. Product of Array numbers" << endl;
        cout << "3. The Maximum in array" << endl;
        cout << "4. The Minimum in array" << endl;
        cout << "5. Close" << endl;

        cout << "Enter choice from above processes: ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            arrSum(arr, arrLength);
            break;
        case 2:
            arrProduct(arr, arrLength);
            break;
        case 3:
            maxNum(arr, arrLength);
            break;
        case 4:
            minNum(arr, arrLength);
            break;
        case 5:
            cout << "Program closed";
            break;
        default:
            cout << "Invalid choice! Please enter a valid option (1-5).\n";
        }
    } while (Choice != 5);

    return 0;
}