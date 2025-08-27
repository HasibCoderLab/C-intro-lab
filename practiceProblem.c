// ========= Topic -> While Loop========
// Qs 14  ->
// =====================

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// ========= Topic -> For Loop========
// Qs 15  ->
//  find sum
// =====================
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
        printf(" Sum is %d\n", sum);
    }

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

// -- --Practice Question-- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 1 -- -- --
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks (0-100) : ");
    scanf("%d", &marks);
    if (marks > 0 && marks <= 30)
    {
        printf(" 🥹   You are Fail\n");
    }
    else if (marks > 30 && marks <= 100)
    {
        printf(" 😊  You are Pass\n");
    }
    else
    {
        printf(" 😔  Worng marks\n");
    }

    // -- -- -- -- -- -  ✴️✴️ Ternary /Operators✴️✴️-- -- -- -- -marks > 30 ? printf("PASS\n") : printf("FAIL\n");
    return 0;
}

// -- --Practice Question-- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 2 -- -- --

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter  Your Number (1-100) : ");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("😭 C\n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("🥲 B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("😊 A\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf(" 🥳 A+\n");
    }
    else
    {
        printf("wrong marks\n");
    }
    return 0;
}

// -- --Practice Question-- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 3 -- -- --

#include <stdio.h>
int main()
{
    int x = 2;
    if (x = 1)
    {
        printf("x is equel to 1\n");
    }
    else
    {
        printf("x is equel to 1\n ");
    }
    return 0;
}

//  ----   Practice Question  -- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 4  ------

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case\n");
    }
    else
    {
        printf("Not  English\n");
    }
}