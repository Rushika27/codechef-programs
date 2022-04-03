#include <stdio.h>
int main() {
int T,A,B,i;
printf(" ");
scanf("%d",&T);

for(i=0;i<T;i++)
{
printf(" ");
scanf("%d",&A);
printf(" ");
scanf("%d",&B);

if(A>B)
{
printf(">\n");
}
else if(A<B)
{
printf("<\n");
}
else if(A==B)
{
printf("=\n");
}

}
return 0;
}
