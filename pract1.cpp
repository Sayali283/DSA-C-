#include <stdio.h>
#include <conio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert()
{
    int value;

    if ((rear + 1) % MAX == front)
    {
        printf("\nCircular Queue is Full!");
        return;
    }

    printf("\nEnter element: ");
    scanf("%d", &value);

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;

    printf("\n%d inserted successfully!", value);
}

void deleteElement()
{
    int value;

    if (front == -1)
    {
        printf("\nCircular Queue is Empty!");
        return;
    }

    value = queue[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    printf("\n%d deleted successfully!", value);
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("\nCircular Queue is Empty!");
        return;
    }

    printf("\nCircular Queue elements are: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }
}

int main()
{
    int choice;


    do
    {
        printf("\n\n===== CIRCULAR QUEUE =====");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while (choice != 4);

    return 0;
}
