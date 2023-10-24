#include<stdio.h>
int main(){
//     import java.util.*;
// public class Test{
//     public static void main(String []args){
//         Scanner sc=new Scanner(System.in);
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c){
            printf("Equilateral triangle");
        }else if(a==b || a==c || b==c){
            // n=c*1.50;
            // g=n+100;
            printf("Isosceles triangle");
        }else {
            printf("Scalene triangle");
        }
}
