// codigo a completar
#include <stdio.h>
#include <time.h>


#define N 20



int main(){

int i;
double vt[N];
int *p;
p=&vt[0];
srand(time(NULL));
for(i = 0;i<N; i++)
{
*(vt + i)=1+rand()%100;
printf("%f\n", *(vt+i));

}
}
