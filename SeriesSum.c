#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); /*Read the value of N from test cases provided*/

/* Complete the program. Please use the printf statement given below:

printf("Sum of the series is: %.2f\n",sum);

*/
for(int i = 1; i <= N; i++){
  sum += 1.0/i;
}
printf("Sum of the series is: %.2f\n",sum);
return 0;
}