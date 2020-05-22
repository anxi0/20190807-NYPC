#include <stdio.h>
#include <string.h>

int main(){
	char a[100]={'\0',};
	int let=0,big=0,small=0,num=0,spec=0;
	scanf("%s",&a);
	if(strlen(a)>=8&&strlen(a)<=15) let=1;
	for(int i=0;i<=strlen(a);i++){
		if(a[i]>='A'&&'Z'>=a[i]) big=1;
		if(a[i]>='a'&&'z'>=a[i]) small=1;
		if(a[i]>='0'&&'9'>=a[i]) num=1;
		if((a[i]>=33&&a[i]<=47)||(a[i]>=58&&a[i]<=64)||(a[i]>=91&&a[i]<=96)||(a[i]>=123&&a[i]<=126)) spec=1;
	}
	printf("%s",let&&big&&small&&num&&spec?"valid":"invalid");
	
}
