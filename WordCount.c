#include<stdio.h>
int CodeCount(char path[]) 
{ 
	FILE *file;
	file=fopen(path,"r");
	int num = 0;
  	char code;
   	int count = 0;
   	if (file==NULL)
   	{
   		printf("ERROR:file is not exit.");
   		return 0;
	}
	else{
		while ((code = fgetc(file)) != EOF)
	 	num++;
	}
	fclose(file); 
	printf("字符数%d",num);
	return num; 
} 
int WordCount(char path[])
{  
	FILE *file = fopen(path, "r"); 
	int num = 0;
	int codenum = 0;
	int sign;
	char word;
	if (file==NULL)
   	{
   		printf("ERROR:file is not exit.");
   		return 0;
	}
 	else{
 		while((word=fgetc(file))!=EOF){
 			if(word!=','||word!=' ')
 			{
			sign = 1;
		 }
		else if(sign){
			num++;
			sign=0;
		}
	 }
}
	 printf("单词数%d",num+1);
	 fclose(file);
	 return num;
} 
int main(){
	int key;
	char path[500];
	do{
		printf("\t1.字符数统计\n");
		printf("\t2.单词数统计\n");
		printf("输入文件名:\n");
		printf("\n\n\t Enter:");
		scanf("%s",&path);
		printf("请选择 1 or 2:\n");
		printf("\n\n\t Enter:");
		scanf("%d",&key);
		switch(key){
			case 1:
				CodeCount(path);break;
			case 2:
				WordCount(path);break;
			default:
				printf("error");
		}
	}while(1);
	return 0;
}
