// 10. Numbers divisible by 2 and 3 (1-50)
// 6 12 18 24 30 36 42 48

// #include<stdio.h>

// int main()
// {

//     printf("Number divisible by 2 and 3 : ");
//     // for(int i=1; i<=50; i++){
//     //     if(i%2==0){
//     //         if(i%3==0){
//     //             printf(" %d ",i);
//     //         }   
//     //     }
//     // }

//     for(int i=1; i<=50; i++){
//         if(i%2==0 && i%3==0){
//                 printf(" %d ",i);
//             }          
//     }
// }


//////////////////////////////////////////////////////////////////////////////////


// 8. ASCII values from A to Z
// A = 65, B = 66, ... Z = 90

// #include<stdio.h>

// int main(){
    
//     // for(int i=65; i<=90; i++){
//     //     printf(" %c = %d, ",i,i);
//     // }
    
//     // int i=65;
//     // while (i<=90)
//     // {
//     //     printf("%c = %d, ",i,i);
//     //     i++;
//     // }

//     // int i=64;
//     // do
//     // {
//     //     i++;
//     //     printf("%c = %d, ",i,i);
//     // } while (i<90);

//     return 0;
// }

// 10. GCD of two numbers
// GCD(12, 18) = 6
// 12 : 2 ,2 ,3
// 18 : 2, 3, 3

#include<stdio.h>

int main(){

    int num1 = 12, num2=18,gcd;

    for(int i=1; i<num1 && i<num2; i++){
        if(num1 % i==0 && num2 % i==0){
            gcd = i;
        }
    }
    printf("My GCD of (12 ,18) : %d",gcd);

    return 0;
}








