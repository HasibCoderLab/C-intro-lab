// ========= Topic -> While Loop========
// Qs 14  ->   
// =====================

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);

//     int i =0;
//     while(i<= n){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }


// ========= Topic -> For Loop========
// Qs 15  ->   
//  find sum
// ===================== 
#include <stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);

    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum+=i ; 
        printf(" Sum is %d\n" , sum );

    }

            for( int i = n; i>=1;i--){
            printf("%d\n",i);
            }

     return 0; 
}