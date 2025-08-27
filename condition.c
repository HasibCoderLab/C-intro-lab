//  ------------ 📃📖📖 Chapter - 3 📃📖📖 --------------

//     -----------  Condition 📝  -----------

// #include <stdio.h>
//  int main(){
//     int  age ;
//     printf("enter a number :");
//     scanf("%d",&age);
//     if(age > 18 ){
//       printf("Yea !  We  are adult \n");

//     }
//     else{
//         printf("Not adult \n  ");
//     }
//     return 0 ;
//  }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     if(age >= 18){
//         // printf("Yeh ! your are adult \n");
//         printf(" adult \n");
        
//     }

//     else if (age >13 && age < 18){
//         // printf("Your are tenneger \n");
//         printf("tenneger\n");

//     }
//     else{
//         printf("Baby \n");

//     }
    
//     return 0;
// }

//   -----  Ternary Operator -----------
// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter Your  Age : ");
//     scanf("%d", &age);
//     age > 18 ? printf("Yea ! You are  adult") : printf(" Alass !  You are  not adult");
//     return 0 ;
// }

// #include <stdio.h>
// int main(){
//     int day ;     //  Monday -1 , Tuesday -2
//     printf("Enter Your Favorite Day (1-7) : ");
//     scanf("%d", &day);
//     switch (day){
//         case 1  : printf("Monday \n");
//         break;
//         case 2 :printf("Tuesday\n");
//         break;
//         case 3 : printf("Wednesday\n");
//         break;
//         case 4 : printf("Thursday\n");
//         break;
//         case 5 : printf("Friday\n");
//         break;
//         case 6 : printf("Saturday\n");
//         break;
//         case 7 : printf("Sunday\n");
//         break;
//         default : printf("Not a Valid day\n");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     char day ;     // M-  Monday  ,  T -Tuesday 
//     printf("Enter Your Favorite Day (1-7) : ");
//     scanf("%s", &day);
//     switch (day){
//         case 'm' : printf("Monday \n");
//         break;
//         case 't' :printf("Tuesday\n");
//         break;
//         case 'w' : printf("Wednesday\n");
//         break;
//         case 'T' : printf("Thursday\n");
//         break;
//         case 'f' : printf("Friday\n");
//         break;
//         case 's' : printf("Saturday\n");
//         break;
//         case 'S' : printf("Sunday\n");
//         break;
//         default : printf("Not a Valid day\n");
//     }
//     return 0;
// }

//  ---------  Nested condition   --------

// #include <stdio.h>
// int main (){
    // int number;
    // printf("Enter a number : ");
    // scanf("%d", &number);
//     if(number > 0){
//         printf("Positive\n");
//         if (number % 2 == 0)
//         {
//             printf("Even\n");
//         }else{
//           printf  ("Odd\n");
//         }
        
//     }else{
//         printf("Negative\n");
//     }
//     return 0  ;
// }

//  ----   Practice Question  -- 📝📝🧾🧾   🅿️🅿️🅿️ ➡️➡️ 1  ------ 
// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter your marks (0-100) : ");
//     scanf("%d",&marks);
//     if(marks > 0 && marks <=30){
//         printf(" 🥹   You are Fail\n");

//     }else if (marks > 30 && marks <= 100){
//         printf(" 😊  You are Pass\n");
//     }else{
//         printf(" 😔  Worng marks\n");
//     }

//     -----------  ✴️✴️ Ternary Operators✴️✴️ ---------
//     marks > 30 ? printf("PASS\n"):printf("FAIL\n");
//     return 0 ;
// }


//  ----   Practice Question  -- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 2   ------ 

// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter  Your Number (1-100) : ");
//     scanf("%d",&marks);
//     if(marks < 30){
//         printf("😭 C\n");
//     }else if ( marks >= 30 && marks < 70){
//         printf("🥲 B\n");
//     }else if(marks >=70 && marks < 90){
//         printf("😊 A\n");
//     }else if(marks >=90  && marks <= 100){
//         printf(" 🥳 A+\n");
//     }else{
//         printf("wrong marks\n");
//     }
//     return 0;
// }


//  ----   Practice Question  -- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 3   ------ 


// #include <stdio.h>
// int main(){
//     int x = 2;
//     if (x=1)
//     {
//         printf("x is equel to 1\n");
//     }else{
//         printf("x is equel to 1\n ");

//     }
//     return 0;
    
// }

//  ----   Practice Question  -- 📝📝🧾🧾 🅿️🅿️🅿️ ➡️➡️ 3   ------ 

#include <stdio.h>
int main(){
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);

    if (ch >='A' && ch <= 'Z' )
    {
       printf("Upper Case\n");
    }
     else if (ch >= 'a' && ch <= 'z')
     {
        printf("Lower Case\n");
     }else{
        printf("Not  English\n");

     }
     
    
}