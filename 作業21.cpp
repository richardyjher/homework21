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
	printf("��J�s��:");
	scanf("%s", servitor.id);
	printf("��J�m�W:");
	scanf("%s", servitor.name);
	printf("��J�~��:");
	scanf("%d", &servitor.wage);
	printf("��J�u�@�ɼ�:");
	scanf("%d", &servitor.work_hours);
	
	salc(&servitor);
	
	printf("\n\n%s�����:---------\n", servitor.name);
	printf("id:%s\n", servitor.id);
	printf("�m�W:%s\n", servitor.name);
	printf("���~:%d\n", servitor.wage);
	printf("�u�@�ɼ�:%d\n", servitor.work_hours);
	printf("�~��:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	
	(ser->pay)=(ser->wage)*(ser->work_hours);
	
	return (ser->pay);
}
