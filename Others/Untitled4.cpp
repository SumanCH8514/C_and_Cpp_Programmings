#include <stdio.h>
int main (){
   int num[100],i, j, a, n;
   printf("enter range:");
   scanf("%d", &n);
   printf("Enter the elements:");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
      
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in descending order is:");
   for (i = 0; i < n; ++i){
      printf("%d,", num[i]);
   }
}
