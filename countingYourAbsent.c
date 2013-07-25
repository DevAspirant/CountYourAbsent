#include<stdio.h>
int CountYourAbsent(int AbsentCount){
 
 int TheAllLectureCount = 15;

 int total = TheAllLectureCount - AbsentCount;

 int result = total * 100;

 int TheTotal = result / 15;
  
return TheTotal;

}
int main(void)
{
//int TheTotal,AbsentCount,total,TheAllLectureCount=15;
int AbsentCounts = 0;
int TheTotal;
printf("How many lecture are you absent  in the class : ");
scanf("%d",&AbsentCounts);
TheTotal = CountYourAbsent(AbsentCounts);
printf("Your Absent Rate :%d\n",TheTotal);
if(TheTotal <  20 )
puts (" YOU ARE FAIULD");
else if (TheTotal >  20 )
puts ("YOU CAN CONTINUE THE CLASS ");
else if (TheTotal = 20 )
puts ("YOU ARE IN DANGUER , BE CAREFUL ");
else 
puts ("PLEASE ENTER THE ABSENT DAY ");
return 0;
}
