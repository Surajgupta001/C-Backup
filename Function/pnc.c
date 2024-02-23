// /*Without function*/
#include <stdio.h>
int main() {
  int n;
  printf("Enter n:");
  scanf("%d", &n);
  int r;
  printf("Enter r:");
  scanf("%d", &r);
  int nfact = 1;  // n!
  int rfact = 1;  // r!
  int nrfact = 1; // n-r!
  // Using loop
  for (int i=1; i<=n;i++) {
    nfact = nfact * i;
  }
  for (int i=1; i<= r;i++) {
    rfact = rfact * i;
  }
  for (int i=1; i<= n-r;i++) {
    nrfact = nrfact * i;
  }
  int ncr;
  ncr = nfact/(rfact*nrfact);
  printf("pnc value is : %d",ncr);
  return 0;
}

/*Using Function*/
#include <stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    {
      fact=fact*i;
    }
    return fact;
}
int main(){
int a = factorial(5);
printf("%d",a);
return 0;
}