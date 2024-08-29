#include <stdio.h>
#include <stdlib.h>

int *stack, choice, size, top, n, i;
void push(void);
void pop(void);
void display(void);

int main() {
    top=-1;
    printf("Size of stack [MAX:100]: ");
    scanf("%d", &size);
    stack = (int*)malloc(size*sizeof(int));
    printf("\n\t 1. PUSH\n\t 2. POP\n\t 3. DISPLAY\n\t 4. EXIT");

    do{
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit point.//");
                break;
            default:
                printf("Choose a proper option.");
        }
    } while(choice!=4);
    return 0;
}

void push() {
    if (top>=size-1) {
        printf("Stack OVERFLOW");
    } else {
        printf("PUSH ELEMENT: ");
        scanf("%d",&n);
        top++;
        stack[top] = n;
        printf("\nTOP ~> %d", top);
    }
}

void pop() {
    if(top <= -1) {
        printf("Stack UNDERFLOW");
    } else {
        printf("POPPED ELEMENT: %d", stack[top]);
        stack[top]=0;
        top--;
        printf("\nTOP ~> %d", top);
    }
}

void display() {
    if(top >= 0){
        printf("STACK REPRESENTATION");
        for(i=size-1; i >= 0; i--) {
            printf("\n\t  __");
            printf("\n\t| ");
            printf("%d | ~> %d", stack[i], i);
        }
        printf("\n\t  --");
    } else {
        printf("Empty stack");
    }
}