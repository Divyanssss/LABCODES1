#include <stdio.h>
#include <math.h>
int main() {
  float V,S,T,H;
  int u,a,t,b,c,p;
  printf("value of u");
  scanf("%d",&u);
  printf("value of a");
  scanf("%d",&a);
  printf("value of t");
  scanf("%d",&t);
  printf("value of b");
  scanf("%d",&b);
  printf("value of c");
  scanf("%d",&c);
  printf("value of p");
  scanf("%d",&p);
  V=u+a*t;
  S=u*t+1/2*(a*(t*t));
  T=2*a+sqrt(b)+9*c;
  H=sqrt((b*b)+(p*p));

  printf("v=%f\n",V);
  printf("s=%f\n",S);
  printf("t=%f\n",T);
  printf("H=%f\n",H);
 return 0;
}