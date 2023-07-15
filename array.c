#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, ch, a[50], element, position;

    printf("Enter the number of elements you want to enter into the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The elements are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    do{
        printf("Select an option for performing various operations: \n");
        printf("1. Insert element at a specified position \n");
        printf("2. Delete element from a specified position \n");
        printf("3. Insertion at the end \n");
        printf("4. Deletion from the end \n");
        printf("5. Exit \n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter the position where the element should be inserted: ");
                scanf("%d", &position);

                if(position < 0 || position > n)
                {
                    printf("Invalid position! \n");
                }
                else
                {
                    printf("Enter the element to be inserted: ");
                    scanf("%d", &element);

                    for(i = n; i > position; i--)
                    {
                        a[i] = a[i-1];
                    }

                    a[position] = element;

                    n++;

                    printf("Elements after insertion: \n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter the position of the element to be deleted: ");
                scanf("%d", &position);

                if(position < 0 || position >= n)
                {
                    printf("Invalid position! \n");
                }
                else
                {
                    for(i = position; i < n-1; i++)
                    {
                        a[i] = a[i+1];
                    }

                    n--;

                    printf("Elements after deletion: \n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);

                a[n] = element;
                n++;

                printf("Elements after insertion: \n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 4:
                if(n == 0)
                {
                    printf("Array is empty \n");
                }
                else
                {
                    n--;

                    printf("Elements after deletion: \n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("Invalid option! \n");
                break;
        }
    } while(ch != 5);

    return 0;
}
