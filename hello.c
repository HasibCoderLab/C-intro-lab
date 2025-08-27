#include <stdio.h>
int main()
{
    int age = 17;
    printf("Hello My age  %d", age);
    return 0;
}

#include <stdio.h>
int main()
{
    float num = 1.25;
    printf("%f", num);
    return 0;
}

// --------   Scanf ------------

#include <stdio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d", &age);
    printf(" age  is  : %d ", age);
    return 0;
}

#include <stdio.h>
int main()
{
    int age;
    printf("Entar Your age :");
    scanf("%d", &age);
    printf("age is : %d", age);
    return 0;
}

#include <stdio.h>
int main()
{
    int age;
    printf("Entar age : ");
    scanf("%d", &age);
    printf("age is : %d ", age);
    return 0;
}

//  -------- Simple Program With Snacf -----------

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a");
    scanf("%d", &a);

    printf("Enter b");
    scanf("%d", &b);

    printf("sum is : %d ", a + b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Entar a");
    scanf("%d", &a);
    printf("Entar b");
    scanf("%d", &b);
    printf("sum is %d", a + b);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Entar a");
    scanf("%d", &a);
    printf("Entar b");
    scanf("%d", &b);
    printf("Sum is : %d", a + b);
    return 0;
}

#include <stdio.h>
int main()
{
    char user_name[100] = "Tyep Your Name";
    printf("Tyep your  Name");
    scanf("%99s", user_name);
    printf("%s : ", user_name);
    return 0;
}

//   ---------------    `````````  Practice questions --------------

//  -------- Area of square ------

#include <stdio.h>
int main()
{
    int side;
    printf("Entar Side's Value : ");
    scanf("%d", &side);
    printf("Value is : %d", side * side);
    return 0;
}

#include <stdio.h>
int main()
{
    float side;
    printf("Entar Side's Value : ");
    scanf("%f", &side);
    printf("Value is : %f ", side * side);
    return 0;
}

#include <stdio.h>
int main()
{
    float radius;
    printf("Entar Radius Value : ");
    scanf("%f", &radius);
    printf("Area Value is : %f", 3.14 * radius * radius);
    return 0;
}

//  -------------  Chapter 2 -----------------
#include <stdio.h>
int main()
{

    int x, y, z;
    x = y = z = 1;
    return 0;
}

//  -----------   Last Moment Of chapter 02 ---
// ----------------    Task -  ---------------

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}

// ----------------    Task - 2 ---------------

#include <stdio.h>
int main()
{
    int isSanday = 0; //  1
    int isRanning = 1;
    printf("%d", isSanday && isRanning);
    return 0;
}

// ----------------    Task - 3 ---------------

#include <stdio.h>
int main()
{
    int isSanday = 0; //  1
    int isRanning = 1;
    printf("%d", isSanday || isRanning);
    return 0;
}

// ----------------    Task - 4 ---------------

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a  number :  ");
    scanf("%d", &x);
    printf("%d", x > 9 && x < 100);
    return 0;
    2322222;
}
