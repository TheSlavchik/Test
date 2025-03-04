#include "equation/equation.h"
#include "integral/integral.h"
#include "list/linked_list.h"
#include "stack/stack.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void test1()
{
    double *arr = solve_equation(1, 0, -1);

    assert(arr[0] == 2);
}

int main()
{
    /*Zadanie 1

    double *arr = solve_equation(1,0,-1);

    for (int i = 1; i < arr[0]+1; i++)
    {
        printf("%lf", arr[i]);
    }*/

    /*Zadaine 2
    double sinus(double x)
    {
        return sin(x);
    }

    printf("%lf \n", integral(sinus, 1, 2, 10000));
    */

    /*Zadanie 3
    List *list = make_list();
    printf("%d\n", count(list));
    add_to_end(1, list);
    add_to_start(228, list);
    add_to_end(2, list);
    add_by_id(17, 3, list);

    Node *a = find_by_id(3, list);

    if (a == NULL)
    {
        printf("null\n");
    }
    else
    {
        printf("%d", a->data);
    }

    delete (2, list);*/

    /*Zadaine 4
    Stack *stack = initialize_stack();

    push(stack, 123);
    push(stack, 228);

    printf("%d \n", pop(stack));
    printf("%d \n", pop(stack));*/

    test1();

    return 0;
}