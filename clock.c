#include<stdio.h>
#include<windows.h>
int main(){
 
 int h,m,s;
 int d=1000; //we add a delaybof 1000 milliseconds and we will use it in the function sleep
 printf("Set time : \n");
 scanf("%d%d%d",&h,&m,&s);
 if(h>12 || m>60 || s>60)
 {
     printf("ERROR ! \n");
     exit(0);
 }
 while(1) //this is an infinite loop and anything inside will repeat itself to infinity
 {
      s++;
      if(s>59)
      {

          m++;
          s=0;
      }
      if(m>59)
      {
           h++;
           m=0;
      }
      if(h>12)
      {
           h=1;
      }
      printf("\n Clock :");
      printf("\n %02d:%02d:%02d",h,m,s); //this writes our time in this format 00:00:00
      //sleep(d); the function sleep slows down the whilw loop and make it more like real clock
      system("cls"); //this clears the screen
 }
return 0;
}