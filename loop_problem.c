
//  ৪. ১০ থেকে ১ পর্যন্ত উল্টোভাবে সংখ্যা প্রিন্ট করো।  🅿️ ➡️➡️

#include <stdio.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

//  =============================
//   Practice Question     📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️    - 1
// ================================

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        // sum += 1;
        printf("sum is %d\n", sum);
    }
    return 0;
}
