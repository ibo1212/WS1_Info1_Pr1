#include <stdio.h>

int difference(int number1, int number2){
   return number1-number2;
}
  int  distance (int number1, int number2 ) {
    int result= number1-number2;
     return (unsigned int) result;
}


    int main () {

        int i = 0;
        int a = 21;
        int b = 2, c= 3;

        int number1= 42 , number2 = 41;
        int number3 = difference(number1,number2);
        unsigned int distance1 = distance(-5,-2);

       printf("Foo\n");
        printf(" number1= %d  number2 =%d result= %d \n",number1,number2,number3);
        printf("test distance %u\n", distance(-4,-2));
        printf("%u distance \n",distance1);
        printf("a\t\t\t\t|\tb\t\t\t\t|\tDifferenz\t\t\t\t|\tAbstand \n");
        printf("----------------------------------------------------------------------------\n");
        for ( i=0;i<=20;i=i+1){
            int a = i ,b= 20-i;
            printf("%d\t\t\t\t|\t%d\t\t\t\t|\t%d\t\t\t\t|\t%u\n",a,b, difference(a,b), distance(a,b));

        }


       // return c;
        return 0;

    }


