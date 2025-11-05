// 10. Numbers divisible by 2 and 3 (1-50)
// 6 12 18 24 30 36 42 48

#include<stdio.h>

int main()
{

    printf("Number divisible by 2 and 3 : ");
    // for(int i=1; i<=50; i++){
    //     if(i%2==0){
    //         if(i%3==0){
    //             printf(" %d ",i);
    //         }   
    //     }
    // }

    for(int i=1; i<=50; i++){
        if(i%2==0 && i%3==0){
                printf(" %d ",i);
            }          
    }
}