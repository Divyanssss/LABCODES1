#include <stdio.h>

int main() {
    char a[100];
    int v=0,c=0,d=0,w=0,i;
    fgets(a,sizeof(a),stdin);
    for(i = 0; a[i] != '\0'; i++) {
     

  
        if (a[i]=='A'||a[i] =='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            v++;}
    
        else if ((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
            c++;
        }
 
        else if (a[i]>='0'&&a[i]<='9') {
            d++;
        }
 else if (a[i]==' '||a[i]=='\t'||a[i]=='\n') {
            w++;
        }
    }
    printf("vowels %d\n",v);
    printf("consonants %d\n",c);
    printf("digits %d\n",d);
    printf("white spaces %d\n",w);

    return 0;
}