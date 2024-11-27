#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
struct customer {
    int acc_no,balance;
    char name[50];
};
int transaction(int acc_no,int req_type,int amount,struct customer bank[10]) {
    int i;
    for(i=0;i<5;i++){
        if(bank[i].acc_no==acc_no){
            if(req_type==1&&bank[i].balance<amount)return 0;
            bank[i].balance+=(req_type==0?amount:-amount);
            return 1;
        }
    }
    return 0;
}
int main(){
    struct customer bank[10];
    int i,acc_no,amount,req_type;
    for(i=0;i<5;i++){
        printf("Enter acc_no, name, balance: ");
        scanf("%d%s%d",&bank[i].acc_no,bank[i].name,&bank[i].balance);
    }
    printf("Enter acc_no, request type (0-deposit,1-withdraw), amount: ");
    scanf("%d%d%d",&acc_no,&req_type,&amount);
    if(transaction(acc_no,req_type,amount,bank))
        printf("Transaction successful. Updated balance: %d",bank[i].balance);
    else printf("Transaction failed.");
}
