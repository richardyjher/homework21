#include<stdio.h>
#include<stdlib.h>

struct Servitor{
	
	char id[20];
	char name[20];
	int wage;
	int work_hours;
	int pay;
};
int salc(struct Servitor*);

int main(void){
	
	struct Servitor servitor;
	printf("輸入編號:");
	scanf("%s", servitor.id);
	printf("輸入姓名:");
	scanf("%s", servitor.name);
	printf("輸入薪資:");
	scanf("%d", &servitor.wage);
	printf("輸入工作時數:");
	scanf("%d", &servitor.work_hours);
	
	salc(&servitor);
	
	printf("\n\n%s的資料:---------\n", servitor.name);
	printf("id:%s\n", servitor.id);
	printf("姓名:%s\n", servitor.name);
	printf("實薪:%d\n", servitor.wage);
	printf("工作時數:%d\n", servitor.work_hours);
	printf("薪水:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	
	(ser->pay)=(ser->wage)*(ser->work_hours);
	
	return (ser->pay);
}
