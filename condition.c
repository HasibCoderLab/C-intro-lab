//  ------------ 📃📖📖 Chapter - 3 📃📖📖 --------------

//     -----------  Condition 📝  -----------

#include <stdio.h>
int main()
{
   int age;
   printf("enter a number :");
   scanf("%d", &age);
   if (age > 18)
   {
      printf("Yea !  We  are adult \n");
   }
   else
   {
      printf("Not adult \n  ");
   }
   return 0;
}

#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age : ");
   scanf("%d", &age);
   if (age >= 18)
   {
      // printf("Yeh ! your are adult \n");
      printf(" adult \n");
   }

   else if (age > 13 && age < 18)
   {
      // printf("Your are tenneger \n");
      printf("tenneger\n");
   }
   else
   {
      printf("Baby \n");
   }

   return 0;
}
