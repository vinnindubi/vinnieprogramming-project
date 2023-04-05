# include<stdio.h>
#include<math.h>
#include<string.h>
struct Course {
    char name[50];
    int points;
};
  struct university {
  char name [50];
  struct Course courses[10];
  int num_courses;
  };
  struct university uon={"The University Of Nairobi",
    {
      {"Information technology",42},
      {"Software engineering",36},
      {"Data science",35},
      {"Computer science",38},
      {"Machine learning and Artificial intelligence",34},
      {"Bachelor Of science(statistics & programming)",32},
   }, 6 };
  struct university egerton={"Egerton university",
  {
      {"Bachelor of Science (Computer Science)",42},
      {"Software engineering",35},
      {"Computer engineering",38},
      {"Business information technology",34},
      {"Cyber security",35},
      {"Cloud computing and information security",36},
      },6 };

void greeting();
int main (void)
{
    int i,a,b,c,d,e,f,g,h,j,k,cluster,course,result1,result2,largest,secondlargest;
    int z=48; int y=84; int found_course=0;
    double multiply,squareroot,points,x;
    float answer1;
    float totalpoints;
    float sum;
    greeting();

             printf("enter your points for:\n mathematics:");
             scanf("%d",&a);
             /*at this point if a user inputs points that are within the range it displays error message*/
             if(a<1 || a>12){
                printf("invalid points:");
                return 0;
             }
             printf("enter your points for:\n Kiswahili:");
             scanf("%d",&b);
              if(b<1 || b>12){
                printf("invalid points:");
                return 0;
             }
            printf("enter your points for:\n English:");
             scanf("%d",&c);
              if(c<1 || c>12){
                printf("invalid points:");
                return 0;
             }
             printf("enter your points for:\n Physics:");
             scanf("%d",&d);
              if(d<1 || d>12){
                printf("invalid points: you need to have done physics");
                return 0;
             }
             printf("enter your points for:\n Biology:");
             scanf("%d",&e);
             /* if the user does not do biology 0 is allowed*/
              if(e<0 || e>12){
                printf("invalid points:");
                return 0;
             }
             printf("enter your points for:\n Chemistry:");
             scanf("%d",&f);
              if(f<1 || f>12){
                printf("invalid points:");
                return 0;
             }
             printf("enter your points for:\n Geography:");
             scanf("%d",&g);
             /* if the user does not geography 0 is allowed*/
              if(g<0 || g>12){
                printf("invalid points:");
                return 0;
             }
              printf("enter your points for:\n History:");
             scanf("%d",&h);
             /* if the user does not do History 0 is allowed*/
              if(h<0 || h>12){
                printf("invalid points:");
                return 0;
             }
            printf("enter your points for:\n CRE:");
             scanf("%d",&i);
             /* if the user does not do cre 0 is allowed*/
              if(i<0 || i>12){
                printf("invalid points:");
                return 0;
             }
             printf("enter your points for:\n agriculture:");
             scanf("%d",&j);
             /* if the user does not do agriculture 0 is allowed*/
              if(j<0 || j>12){
                printf("invalid points:");
                return 0;
             }
              printf("enter your points for:\n business:");
             scanf("%d",&k);
             /* if the user does not do business 0 is allowed*/
              if(k<0 || k>12){
                printf("invalid points:");
                return 0;
             }
                       if (b>c){result1=b;}else {result1=c;}/* if one subject is greater than the other choose the best*/
                         largest=e;
                         /* this code is supposed to give  the best scored subject in order to calculate total points*/
                        if(g>largest){largest=g;}
                        if(h>largest){largest=h;}
                        if(i>largest){largest=i;}
                        if(j>largest){largest=j;}
                        if(k>largest){largest=k;}
                      /*the field of computing require one to have a minimum requirement of c+ to apply */
                      if (d<7){printf("your physics grade is below than required.you cannot do a course in IT.");
                        return 0;}
                        secondlargest=e;
                        /* this is responsible for finding the second best subject of the user*/
                        if(g>secondlargest && g<largest){secondlargest=g;}
                        if(h>secondlargest && h<largest){secondlargest=h;}
                        if(i>secondlargest && i<largest){secondlargest=i;}
                        if(j>secondlargest && j<largest){secondlargest=j;}
                        if(k>secondlargest && k<largest){secondlargest=k;}
                         sum=a+result1+largest+d;/*this adds the total points of the 4 subjects required*/
                        answer1=sum/z;   /* it divides the sum by 48*/
                        /*the code calculates the total points of 7 subjects out of 8 as per kcse*/
                        totalpoints=a+b+c+d+f+largest+secondlargest;
                         x=totalpoints/y;
                        multiply= answer1*x;
                        squareroot=sqrt(multiply);
                        /* gives the cluster points the user has.*/
                        points=squareroot*z;
                        printf("your cluster points are:%lf\n",points);
                        /* using the cluster points  it loops about the university courses and prints the courses the user can apply*/
                for(int i=0;i< uon.num_courses;i++)
                {
                  if (points >= uon.courses[i].points){
                    printf("Congrats!You qualify for the %s course at %s.\n",uon.courses[i].name,uon.name);
                    found_course=1;
                  }
                }
                if (!found_course)
                    {
                    printf("Sorry, you do not qualify for any course at %s.\n",uon.name);
                    }
            for (int i=0;i<egerton.num_courses;i++)
            {
                if(points>=egerton.courses[i].points){
                    printf("you can also apply:%s course at %s.\n",egerton.courses[i].name,egerton.name);
                    found_course=1;
                }
            }
    return 0;
}
void greeting()
{
    printf("Hello there!.If you did not do a subject input 0.\n");
}
