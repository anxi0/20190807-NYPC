#include <stdio.h>

int main(){
	int a,i,j=0; scanf("%d",&a);
	int s[100]={0,},s1[100]={0,};
	for(i=0;i<a;i++) scanf("%d",&s[i]);
	for(i=0;i<a;i++) scanf("%d",&s1[i]);
	for(i=0;1;i++){
		for(j=0;j<a;j++){
			if(s1[j]*i>s[j]) goto eng;
		}
	}
	eng:
	printf("%d",i-1);
} 
