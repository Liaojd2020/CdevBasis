#include <stdio.h>
#include <string.h> 
int main(){       
	char szTest[1000] = {0}; 
	int len = 0;  
	FILE *fp = fopen("E:\Study\Python\PythonApplication1\data.txt", "r");     
	if(NULL == fp)      
	{           
		printf("failed to open dos.txt\n");           
		return 1;          
	}  while(!feof(fp))   
	{           
		memset(szTest,0, sizeof(szTest));                  
		fgets(szTest,sizeof(szTest) - 1, fp);         
		printf("%s",szTest);       }  
	fclose(fp);   
	printf("\n");         
	return 0; 
}
