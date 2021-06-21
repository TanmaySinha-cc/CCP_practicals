#include <stdio.h>
int main() {
  int a[10][10], r, c,max[100] , i, j;
  r = 3;
  c = 4;

  printf("\nEnter matrix elements:\n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) 
  {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix of marks: \n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) 
  {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  for(int i = 0; i < r; i++)
  {
    max[i] = a[i][j];
    for(j = 0; j < c ; j++)
    {
    if(a[i][j]>max[i])
    {
    max[i]=a[i][j];
    }
  }

}
    for(i = 0; i < r; i++)
 {
    printf("Maximum marks in subject %d is: %d\n",i,max[i]);
 }
return 0;
}
  