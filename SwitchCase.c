
#include <stdio.h>
int main()
{
    int day; //  Monday -1 , Tuesday -2
    printf("Enter Your Favorite Day (1-7) : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Not a Valid day\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char day; // M-  Monday  ,  T -Tuesday
    printf("Enter Your Favorite Day (1-7) : ");
    scanf("%s", &day);
    switch (day)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 't':
        printf("Tuesday\n");
        break;
    case 'w':
        printf("Wednesday\n");
        break;
    case 'T':
        printf("Thursday\n");
        break;
    case 'f':
        printf("Friday\n");
        break;
    case 's':
        printf("Saturday\n");
        break;
    case 'S':
        printf("Sunday\n");
        break;
    default:
        printf("Not a Valid day\n");
    }
    return 0;
}
