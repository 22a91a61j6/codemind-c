#include<stdio.h>
int main(){
//     import java.util.*;
// public class Test{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
        // int b=sc.nextInt();
        // int c=sc.nextInt();
        if(a+b > c && b+c>a && c+a>b){
            printf("Valid triangle");
        }else{
            printf("Invalid triangle");
        }
//     }
// }
}