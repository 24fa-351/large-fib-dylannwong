#include <stdio.h>
#include <stdlib.h>

unsigned long long fibbi (int n) {

   unsigned long long num1 = 0;
   unsigned long long num2 = 1;
   unsigned long long sum = 1;

   if(n == 1) {
      return 0;
   } else {
      for(int i = 0; i < n - 1; ++i) {
         if(i + 2 == n) {
            return sum;
         }
         sum = num1 + num2;
         num1 = num2;
         num2 = sum;
      }
   }
   
}

unsigned long long fibbr(int n) {

   if(n == -1) {
      return 0;
   }
   if (n == 0 || n == 1) {
      return 1;
   }

   return fibbr(n - 1) + fibbr(n - 2);
}

int main(int argc, char *argv[]) {

   int n = atoi(argv[1]);

   if(*argv[2]=='i') {
      printf("%lld", fibbi(n));
   } else if(*argv[2]=='r') {
      printf("%lld", fibbr(n-2));
   }
   
   return 0;
}