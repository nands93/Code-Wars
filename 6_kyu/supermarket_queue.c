/*There is a queue for the self-checkout tills at the supermarket. Your task is write a function to calculate the total time required for all the customers to check out!

input
customers: a pointer to an array of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
customers_length: the length of the array that customers points to.
n: a positive integer, the number of checkout tills.
output
The function should return an integer, the total time required.
https://www.codewars.com/kata/57b06f90e298a7b53d000a86/train/c
*/

int findMinIndex(int arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int queue_time(const int *customers, int customers_length, int n)
{
    if (customers_length == 0)
        return 0;

    int result = 0;

    if (n == 1)
    {
        for (int i = 0; i < customers_length; i++) {
            result += customers[i];
        }
        return result;
    }

    int tills[n];

    for (int j = 0; j < n; j++) {
        tills[j] = 0;
    }

     for (int i = 0; i < customers_length; i++) {
        int minTill = findMinIndex(tills, n);
        tills[minTill] += customers[i];
    }
    
    int maxTime = tills[0];
    for (int i = 1; i < n; i++) {
        if (tills[i] > maxTime) {
            maxTime = tills[i];
        }
    }
    return maxTime;
}