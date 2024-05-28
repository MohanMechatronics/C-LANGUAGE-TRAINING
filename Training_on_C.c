#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

void main(){
 // calculator();
//  forloopchar();
 // BOX();
 // H_Shape();
  //  Factors();
 // NumberofFactors();
 // PrimeorNot();
 //  Sum_of_numbers_Static();
//   Sum_of_dynamic_numbers();
  // POWER();
 //  Sum_of_dynamic_numbers_with_condition();
  // Addition_of_all_numbers_in_INPUT();
//   Reverse();
 // LCM_of_two_numbers();
// Nestesd_loop_for_pattern();
// Array();
// Display_greatest_with_condition();
// BlinkText();
 // DigitalClock();
 // Find_the_number_game();
 // MultiDimensionArray();
// Convertingchar_to_string();
// Array_techniquies();
 // Two_player_Number_Game();
 // password_Hiddings();
 // passward_is_strong_not();
 //counting_number_of_words_in_a_paragraph();
 //Find_how_many_Vowels();
  // Remvoing_duplicates();
 // FLAMES();
 // FunctionControl();
 // biggest_of_two_numbwers();

 // TASK2();
 // TASK3();
  // TASK4();
 //  TASK5();
 // TASK6();
 // SUPER_FUNCTUIN_CALLING();
 // STRUCTURE();
  //  Nested_Structure();
 //   File_opener_Save();
   // SWAP();
 //  table();
 //  fibno();

}



void fibno(){
  int a, b=0, c=1,result;
  printf("Enter a number :- ");
  scanf("%d",&a);

  for(int i=0;i<a;i++){
    printf("%d ",b);
    result = b+c;
    b=c;
    c=result;
  }
}


void table(){

  printf("%-10s %-20s %-30s %-20s %-20s","Hello","MATCH","guna","Mohan","bye");

}

void File_opener_Save(){
  FILE * fptr;
  fptr = open("MOHAN.docs","a");
  fputs("HELLO BROOO",fptr);
  fclose(fptr);
//  return 0;
}


struct address{
  char street[50];
  char city[50];
  char state[50];
  int pincode;
};

struct student{
char a[50];
int age;
int marks[5];
float agg;
int empId;
char name[50];
float salary;
struct address studentaddress;
};

void Nested_Structure(){
    struct student stud ={ 101,"ROSHNI", 5000.0,{"0110 main street","chennai","Tamilnadu","600002"}};
//    printf("Employee ID: %d\n",stud.empID);
//    printf("Name : %s\n",student.name);
//    printf("Salary : %.2f\n",student.salary);
//    printf("Address :- \n",);
 //   printf("Street : %s\n",student.studentaddress);;
}

void STRUCTURE(){
  struct student s[2];
  for (int i=0;i<=1;i++){

  printf("Enter information for students %d \n",i+1);

  printf("Enter name :- ");
  scanf("%s",s[i].a);

  printf("Enter age :- ");
  scanf("%d",&s[i].age);

  int sum=0,agg;
  printf("Enter Marks :- ");
  for (int k=0;k<5;k++){
    scanf("%d",&s[i].marks[k]);
    sum=sum+s[i].marks[k];
  }
  s[i].agg=sum/5;
  printf("\n ");
 }

  printf("STUDENTS INFORMATION :- \n");
 for(int j=0;j<2;j++){
  printf("Student %d \n",j+1);
  printf("NAME %s \n",s[j].a);
  printf("AGE %d \n",s[j].age);
  printf("PERCENTAGE %f\n\n",s[j].agg);
 }
}

void SUPER_FUNCTUIN_CALLING(){
int a;
printf("ENTER TOPIC \n");
scanf("%d",&a);
 switch(a)
    {
        case 1:
         TASK2();
         break;

        case 2:
         TASK3();
         break;

        case 3:
         TASK4();
         break;

        case 4:
         biggest_of_two_numbwers();
         break;

        default:
            printf("Enter a word");
    }
}

void TASK5(){
    int current_year,current_month,current_day,birth_year,birth_month,birth_day;
    printf("ENTER BIRTH DATE \n");
    scanf("%d%d%d",&birth_year,&birth_month,&birth_day);
    printf("ENTER CURRENT DATE \n");
    scanf("%d%d%d",&current_year,&current_month,&current_day);

    int age = current_year-birth_year;
    printf("YOUR AGE IS ");
    if(current_month<birth_month  && current_day<birth_day ){
       age=age-1;
       printf("%d",age);
    }else{
      printf("%d",age);
    }
}

void TASK4(){
    int TABLE_1,TABLE_2;
    printf("Enter TABLE_1 value  ");
    scanf("%d",&TABLE_1);
    printf("Enter TABLE_2 value  ");
    scanf("%d",&TABLE_2);
    int var = TABLE_1;
    for(int i=TABLE_1;i<=TABLE_2;i++)
        {
     for(int j=0;j<=10;j++){
         printf("\n%d x %d = %d",TABLE_1,j,j*TABLE_1);
     }
     printf("\n");TABLE_1++;
   }
}

void power(int i,int exp){
     int res=1;
     for(int j=1;j<exp;j++){
        res=res*i;
     }
     printf("\nThe answer is  %d",res);
}

void TASK3(){
    int exp,base,res=1;
    printf("Enter base value  ");
    scanf("%d",&base);
    printf("Enter Expo value  ");
    scanf("%d",&exp);
    for (int i = 1; i <=base ; i++) {
     //    power();
        }
}



void TASK2() {
    int a;
    printf("Enter a Number  ");
    scanf("%d", &a);
    if(a % 2 == 0)
            printf("Not a prime number %d \n",a*a);
        else
            printf("Prime number %d \n",2*a);
}

int big(){
  int A,B,C,bigger;
   printf("Enter nums :- ");
   scanf("%d%d%d",&A,&B,&C);
  bigger = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
  return bigger;
}
void biggest_of_two_numbwers(){
  int res = big();
  printf("The BIGGER is %d\n\n",res);
}

int inputs(){
   int a,b;
   printf("Enter nums :- ");
   scanf("%d%d",&a,&b);
   return a*b;
}

int mul(){
   int a,b;
   printf("Enter nums :- ");
   scanf("%d%d",&a,&b);
   return a*b;
}
void FunctionControl(){
  int res = mul();
  printf("The multiplication is %d",res);
}


void Remvoing_duplicates(){
  int a[10];
  int size=10;
  printf("\n Enter array elements ");
  for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
  }
  for(int k=0;k<size;k++){
    for(int j=k+1;j<size;j++){
        if(a[k]==a[j])
        {
            for(int w=0;w<size;w++){
             a[j]=a[w+1];
            }
          }
        }
        size--;
    }
    printf("The Original elements are  ");
    for(int p=0;p<size;p++){
        printf("%d",a[p]);
    }
}
void counting_number_of_words_in_a_paragraph(){
  char sentence[300];
  int count=0;
  printf("\n Enter the sentence :- ");
  gets(sentence);
  int n = strlen(sentence);
  for (int i=0;i<=n;i++)
    {
    if(sentence[i]==' ' && sentence[i+1]!=' ' && sentence[n-1]!=' ')

        count++;
   }printf("\n No of words %d\n ",count+1);

}

void password_Hiddings(){

int i=0;
char ch;
char pwd [30];

printf("Enter your password :  ");

while((ch=_getch())!=13) {
    pwd[i]=ch;
    i++;
    printf("*");
  }
 pwd [i]='\0';
 printf("\n Your Password  :- %s", pwd);

}

void passward_is_strong_not(){

int i=0;
char ch;
char pwd [100];

printf("Enter your password :-  ");

while((ch=_getch())!=13) {
    pwd[i]=ch;
    i++;
    printf("*");
  }
 pwd [i]='\0';
 printf("\n \n Your Password  :- %s\n", pwd);
 int n=strlen(pwd);
 int a=0,b=0,c=0,d=0;
 if(n>8)
 {
     for(int i=0;i<n;i++){
        if(isupper(pwd[i])) a++;
        else if(islower(pwd[i])) b++;
        else if(isdigit(pwd[i])) c++;
        else if(isalnum(pwd[i])) d++;
     }
     if(a>0 && b>0 && c>0 && d>0)
        printf("\n STRONG PASSWORD \n");
     else
        printf("\n WEAK RA \n");

        printf("\n %d%d%d%d",a,b,c,d);
 }else {
    printf("\n WEAK RA USE your BRAIN \n");
   }
}


void Two_player_Number_Game(){

   srand(time(NULL));
   int a1,a2,a3,b1,b2,b3,n1,n2,s1=0,s2=0;
   char player1[15];
   char player2[15];

   printf("\n Enter Player 1 name  :- ");
    gets(player1);
   printf("\n Enter Player 2 name  :- ");
    gets(player2);
    printf("\n ******************************\n");
    a1=(rand()%6) +1;
    a2=(rand()%6) +1;
    a3=(rand()%6) +1;
    b1=(rand()%6) +1;
    b2=(rand()%6) +1;
    b3=(rand()%6) +1;
    printf("\n Hello %s you can play now",player1);
    for(int i=1;i<=3;i++){
        printf("\n Turn %d: Guess num :",i);
        scanf("%d",&n1);
        if(n1==a1 || n1==a2 || n1==a3){
            printf("\n -->(Correct)");
            s1++;
        }else{
          printf("\n -->(Wrong)");
        }

    }
    printf("\n ------------------------\n");
    printf("\n The Hidden nums are %d %d %d",a1,a2,a3);
    printf("\n YOUR SCORE IS %d :\n",s1);
    printf("\n ------------------------\n");
    printf("\n SUPERB %s ,%s have played you can play now \n",player2,player1);


    for(int j=1;j<=3;j++){
        printf("\n Turn %d: Guess num :",j);
        scanf("%d",&n2);
        if(n2==a1 || n2==a2 || n2==a3){
            printf("\n -->(Correct)");
            s2++;
        }else{
          printf("\n -->(Wrong)");
        }

    }
    printf("\n ------------------------\n");
    printf("\n The Hidden nums are %d %d %d",b1,b2,b3);
    printf("\n YOUR SCORE IS %d :\n",s2);
    printf("\n ------------------------\n");

    if(s1>s2){
        printf("\n %s have WON the match",player1);
    }else if (s2>s1){
        printf("\n %s have WON the match",player2);
    }else
       printf("\n DRAW MATCH");
    printf("\n");
}

void  Array_techniquies(){
    char name1[20][20];
    printf("Enter Five Names ");
    for(int i=0;i<5;i++){
    gets(name1[i]);
   }
   for(int j=0;j<5;j++){
    printf("\n NAME %d %s  ",j+1,strupr(name1[j]));
   }
   for(int k=0;k<5;k++){
    printf("\n Second letter in %d %c  ",k+1,name1[1][1]);
   }

   char player1[15];
   char player2[15];
   printf("\n Enter Player 1 name  :- ");
    gets(player1);
    printf("\n Enter Player 2 name  :- ");
    gets(player2);
    printf("\n %s AND %s are LOL",player1,player2);
}

void Convertingchar_to_string(){
  char a[5];
  char b[10];
  printf("Enter all character");
  for(int i=0;i<5;i++){
    scanf(" %c",a[i]);
    b[i]=a[i];
  }printf("\n hi hello %s",b);
}

void MultiDimensionArray(){
    int a[3][3];
    printf("Enter Elements of matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter a%d%d :- ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The Entered matrix is ");
    printf("\n");
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            printf("  %d",a[m][n]);
        }printf("\n");
    }
    printf("\n The Transpose of matrix is ");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\t%d",a[j][i]);
        }printf("\n");
    }

}

void Find_the_number_game(){
   srand(time(NULL));
   int a,guess;
   a=(rand()%10)+1;
   while(1){
    printf("\n Guess the number from 1 to 10 :- ");
    scanf("%d", &guess);
    if(guess == a){
        printf("Correct boss");
        break;
    }else{
    printf("\n Try again");
    }
  }
}

void DigitalClock(){
    for(int i=1;i!=0;i++){
     printf("---MECHATRONICS---");
    }
     Sleep(2000);
     printf("---MECHANICAL---");
     Sleep(2000);
     system("cls");
     Sleep(2000);
     printf("---ELECTRONICS---");
     Sleep(2000);
     system("cls");
     Sleep(2000);

}


void BlinkText(){

     printf("---MECHATRONICS---");
     Sleep(1000);
     system("cls");
     Sleep(1000);
     printf("---MECHANICAL---");
     Sleep(1000);
     system("cls");
     Sleep(1000);
     printf("---ELECTRONICS---");
     Sleep(1000);
     system("cls");
     Sleep(2000);

}

void Display_greatest_with_condition(){
 int a[10];
 for(int i=1;i<10;i++){
    printf("Enter a number ");
    scanf("%d",&a[i]);
 }

 int max=a[0],val=40,count=0;
 for(int j=1;j<10;j++){
    if (a[j] > val) {
        count++;
       }
    }
    printf(" Numbers above 40 are :- %d",count);
}

void Biggest_number_in_a_Array(){
 int a[10];
 for(int i=1;i<10;i++){
    printf("Enter a number ");
    scanf("%d",&a[i]);
 }
 int max=a[0];
 for(int j=1;j<10;j++){
    if (a[j] > max) {
        max = a[j];
       }
    }
    printf(" The greatest number is :- %d",max);
}

void Array(){
 int a[10];
 for(int i=1;i<=10;i++){
    printf("Enter a number ");
    scanf("%d",&a[i]);
 }
 printf(" The second number is  :- %d",a[2]);
}

void Nestesd_loop_for_pattern(){
    int A;
    printf("Enter Value ");
    scanf("%d", &A);
    for(int i=1;i<=A;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void LCM_of_two_numbers(){
    int A,B,big;
    int step;
    printf("Enter numbers :- ");
    scanf("%d%d",&A,&B);;
    big = A>B?A:B;
    step=big;
    while(1){
        if(big%A==0&&big%B==0)
            break;
        big = big+step;
    }
    printf("LCM is :-  %d",big);

}

void Reverse() {
    int num, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);


    while (num != 0) {
        int digit = num % 10;       // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to reversedNum
        num /= 10;                  // Remove the last digit
    }

    printf("Reversed number: %d\n", reversedNum);

}

void Addition_of_all_numbers_in_INPUT(){
    int a,sum=0;
    printf("Enter the Numbers ");
    scanf("%d",&a);
    while(a>0){
        sum=sum+(a%10);
        a=a/10;
    }
    printf("Sum of digits is %d",sum);
}


void Sum_of_dynamic_numbers_with_condition(){
    int a,sum=0;
    printf("Enter Numbers what ever you like and at last enter 0 ");

    for (int i = 1; i!=0; i++) {
         scanf("%d",&a);
         sum = sum+a;
         if(a==0)printf("\nThe sum is %d",sum);
        }

}

void POWER(){
    int exp,base,res=1;
    printf("Enter base value  ");
    scanf("%d",&base);
    printf("Enter Expo value  ");
    scanf("%d",&exp);
    for (int i = 1; i <= exp; i++) {

         res=base*res;
        }
    printf("\nThe answer is  %d",res);
}

void Sum_of_dynamic_numbers(){
    int a,sum=0;
    printf("Enter 10 Numbers  ");
    for (int i = 1; i <= 10; i++) {
         scanf("%d",&a);
         sum = sum+a;
        }
    printf("\nThe sum is %d",sum);
}

void Sum_of_numbers_Static(){
    int a,sum=0;
    printf("Enter a Number  ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
         sum = sum+i;
        }
    printf("\nThe sum is %d",sum);
}

void PrimeorNot() {
    int a;
    int count = 0;  // Variable to count the number of factors

    printf("Enter a Number  ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
        if(count==2)
            printf("Prime number");
        else
            printf("Not a prime number");
}

void H_Shape(){
    for(int i=1;i<=10;i++){
        printf("\n*                 *");
    }
    printf("\n");
    for(int k=1;k<=10;k++){
        printf("* ");
    }
    for(int j=1;j<=10;j++){
        printf("\n*                 *");
    }
}

void NumberofFactors() {
    int a;
    int count = 0;  // Variable to count the number of factors

    printf("Enter Number to factorize: ");
    scanf("%d", &a);

    printf("Factors of %d are: ", a);
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nNumber of factors: %d\n", count);
}

void Factors(){
    int a;
  printf("Enter Number to factorize :- ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
            if(a%i==0){
                printf("%d ",i);
       }
    }
}

void BOX(){
    for(int i=1;i<=10;i++){
        printf("* ");
    }
    for(int i=1;i<=10;i++){
        printf("\n*                 *");
    }
    printf("\n");
    for(int k=1;k<=10;k++){
        printf("* ");
    }
}



void forloopchar(){
    char s[100];
    printf("Enter CHAR ");
    scanf("%s",&s);
    for(int i=1;i<=10;i++){
        printf("\n %s",s);
    }
}

void calculator(){
    int a,b;
    char s;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Enter operator");
    scanf(" %c",&s);
    switch(s)
    {
        case'+':
         printf("Addition is %d",a+b);
         break;

        case'-':
         printf("Subraction is %d",a-b);
         break;

        case'*':
         printf("Multiplication is %d",a*b);
         break;

        case'/':
         printf("Division is %d",a/b);
         break;

        default:
            printf("Enter a word");
    }
}
