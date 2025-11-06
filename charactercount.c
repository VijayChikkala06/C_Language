#include<stdio.h>
int main(){
	char s[1000];
	int i,j,alpha=0,vow=0,con=0,upper=0,low=0,dig=0,sp=0;
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		alpha++;
	}
		for(i=0;s[i]!='\0';i++){
		if(s[i]>='A'&&s[i]<='Z'){
		upper++;
	}
	}
		for(i=0;s[i]!='\0';i++){
		if(s[i]>='a'&&s[i]<='z'){
		low++;
	}
	}
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='i'){
		vow++;
	}
	else if(s[i]>='0'&&s[i]<='9'){
		dig++;
	}
	  else if(s[i]==' '){
		sp=0;
	}
	else con++;
}

	printf("Alphabets=%d\nUppercase=%d\nLowercase=%d\nVowels=%d\nConsonants=%d\ndigits=%d",alpha,upper,low,vow,con,dig);
}

