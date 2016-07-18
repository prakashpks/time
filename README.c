# time
#include<stdio.h>
void main()
{
int t1,t2,m1,m2,m,time,min;
printf("enter time 1:");
scanf("%d%d",t1,m1);
printf("enter time 2:");
scanf("%d%d",t2,m2);
t1=t1*60;
m1=t1+m1;
t2=t2*60;
m2=t2+m2;
m=m2-m1;
time=m/60;
min=m%60;
printf("time=%d min=%d",time,min);
}
