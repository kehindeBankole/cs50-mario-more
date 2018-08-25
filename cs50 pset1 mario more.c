// #include <cs50.h>
// #include <stdio.h>

// int main(){

// int b;

//     do{
//         //get user input and check for condition
//  b = get_int("enter number here : ");
//     }
//     while(b < 0||b > 23);


//    for(int row = 0; row<b; row++){
//        for(int col=0; col<b; col++){
//            if(row + col < (b-1)){
//                printf(" ");
//            }else{
//                printf("#");
//            }

//        }
//        printf("\n");
//    }
// }


#include <stdio.h>
#include<cs50.h>
int main(){
    int n ;

    do{
        n = get_int("enter number: ");
    }while(n < 0 || n > 23);

    for(int x=0; x < n; x++){
        for(int y =0; y<2*n + 2; y++){
            if(y==n || x+y<n-1||y==n+1){
                printf(" ");
            }else if(y-x <= n+2){
                printf("#");
            }

        }
        printf("\n");
    }



}





