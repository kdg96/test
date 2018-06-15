#include <stdio.h>
#include <string.h>

int main(){
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[60];

	printf("첫 번째 문자열 입력 : ");
	fgets(str1,sizeof(str1),stdin);
	str1[strlen(str1)-1]=0;

	printf("두 번째 문자열 입력 : ");
        fgets(str2,sizeof(str2),stdin);
        str1[strlen(str2)-1]=0;

	printf("두 번째 문자열 입력 : ");
        fgets(str3,sizeof(str3),stdin);
        str1[strlen(str3)-1]=0;
	
	strcpy(str4,str1);
	strcat(str4,str2);
	strcat(str4,str3);

	printf("조합의 결과 : %s \n",str4);
	return 0;
}
