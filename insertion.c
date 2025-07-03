#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sz = 10;

    int pos, element;
    printf("Enter The position: ");
    scanf("%d", &pos);

    printf("Enter The element index: ");
    scanf("%d", &element);

    if(pos < 0 || pos > sz) {
        printf("Invalid position!\n");
        return 1;
    }

     // Shift elements to the right

    for (int i = sz; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

   arr[pos] = element;
   sz++;

    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}