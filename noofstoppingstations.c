#include<stdio.h>
int main(){
   int n = 16, s = 6;
   printf("Total number of stations = %d\nNumber of stopping station = %d\n", s, n);
   int p = s;
   int num = 1, dem = 1;
   while (p!=1) {
      dem*=p;
      p--;
   }
   int t = n-s+1;
   while (t!=(n-2*s+1)) {
      num *= t;
      t--;
   }
   if ((n-s+1) >= s)
      printf("Possible ways = %d", num / dem);
   else
      printf("no possible ways");
}