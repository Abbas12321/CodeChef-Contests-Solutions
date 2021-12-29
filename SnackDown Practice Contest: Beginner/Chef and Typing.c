#include <stdio.h>
#include<string.h>
int main()
{
	int t,n,i,j;
scanf("%d",&t);
	if(t>=1&&t<=100){
	while(t>0){
	scanf("%d",&n);
	char word[n][22];
	int ti=0,time=0;
    if(n>=1&&n<=100){
	for(i=0;i<n;i++){
	scanf("%s",word[i]);
	ti=2;
for(j=1;j<strlen(word[i]);j++){
	if(word[i][j]=='f'||word[i][j]=='d'){
	if(word[i][j-1]=='f'||word[i][j-1]=='d')
	ti=ti+4;
	else if(word[i][j-1]=='j'||word[i][j-1]=='k')
	ti=ti+2;
}
else if(word[i][j]=='j'||word[i][j]=='k'){
	if(word[i][j-1]=='j'||word[i][j-1]=='k')
	ti=ti+4;
else if(word[i][j-1]=='f'||word[i][j-1]=='d')
	ti=ti+2;
}
}
for(j=0;j<i;j++){
if(strcmp(word[j],word[i])==0){
	ti=ti/2;
	break;
}
}
time=time+ti;
}
}
printf("%d\n",time);
t--;
}
}
return 0;
}
