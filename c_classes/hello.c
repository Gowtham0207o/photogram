#include<stdio.h>
int main(){
    char y,x;
    printf("enter the value for a and b:");
scanf("%c %c",&x,&y);
if ((int)y==50 && (int)x==49){
    printf("%c of %c %d %d is %d\n",x,y,x,y,y+x);
}else if (y==1 && x==2){
    printf("it is from string");
}else{
    printf("nothing");
}
   return 1;

}