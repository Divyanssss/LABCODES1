#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
  char ch[100];
    
    fgets(ch,100,stdin);
   for(i=0;i<n;i++)
      {
        if(flag==1)
        break;
        for(j=i+1;j<n;j++)
        {
        if(ch[i]==ch[j])
            break;
         else
          { 
            printf("%c",ch[i]);
            flag++;
           break;
           }
        }
      }
      return 0;


}