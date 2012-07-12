#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<vector>
#define SUBJECTS 6
#define COMPONENTS 5
using namespace std;

int main()
{
    //FILE *fp=fopen("in.txt","r");
    int PASS=1;
    int CREDITS[SUBJECTS];
    double MARKS[SUBJECTS][COMPONENTS];
    char str[10];
    double TOTAL[SUBJECTS];
    int gradepoints[SUBJECTS];
    int NOS;
    int i,j,A_MARKS;
    scanf("%d",&NOS);
    while(NOS--)
    {
        PASS=1;
        //credits for each subject
        for(i=0;i<SUBJECTS;i++)
        scanf("%d",&CREDITS[i]);
        //marks obtained in each subject including attendance
        for(i=0;i<SUBJECTS;i++)
        {
            for(j=0;j<COMPONENTS;j++)
            {
                scanf("%s",str);
                MARKS[i][j]=atof(str);
            }
            sort(MARKS[i],MARKS[i]+3);//best of three
            TOTAL[i]=(MARKS[i][1]+MARKS[i][2])*(45.0/40);//45%
            TOTAL[i]+=MARKS[i][3]*(50.0/100);
            if(MARKS[i][4]<51)
            {
                 TOTAL[i]+=5;
            }
            else if(MARKS[i][4]<61)
            {
                TOTAL[i]+=4;
            }
            else if(MARKS[i][4]<71)
            TOTAL[i]+=3;
            else if(MARKS[i][4]<81)
            TOTAL[i]+=2;
            else if(MARKS[i][4]<91)
            TOTAL[i]+=1;
            //attendance details have to  code
            //printf("%f ",TOTAL[i]);
        }
        for(i=0;i<SUBJECTS;i++)//marks in each subject
        {
            if(TOTAL[i]>=91)
            {
                gradepoints[i]=10;
            }
            else if(TOTAL[i]>=81)
            gradepoints[i]=9;
            else if(TOTAL[i]>=71)
            gradepoints[i]=8;
            else if(TOTAL[i]>=61)
            gradepoints[i]=7;
            else if(TOTAL[i]>50)
            gradepoints[i]=6;
            else if(TOTAL[i]==50)
            gradepoints[i]=5;
            else if(TOTAL[i]<50)
            {
            PASS=0;
            gradepoints[i]=0;
            }
              //have toc code reagarding grading details set flag PASS =0 if marks<50
        }
        //calculate GPA
        double num=0;
        int denom=0;
        for(i=0;i<SUBJECTS;i++)
        {
            num+=(CREDITS[i]*gradepoints[i]);
            denom+=CREDITS[i];
        }
        double GPA=num/denom;
        char str[100];
        if(PASS)
        {
            strcpy(str,"PASSED");
        }
        else
        strcpy(str,"FAILED");
        printf("%s, %.2f\n",str,GPA);
    }
    return 0;
}
