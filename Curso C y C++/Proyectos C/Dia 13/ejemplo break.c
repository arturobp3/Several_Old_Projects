//demuestra el uso de break. SOlo se usa en interiores de ciclos o de un switch

#include <stdio.h>

char s[] = "This is a test string. It contains two sentences.";

main(){
	
	int count;
	
	printf("\nOriginal string: %s", s);
	
	for(count = 0; s[count] != '\0'; count++){
		if (s[count] == '.'){
			s[count+1] = '\0';
			break;
		}
	}
	
	printf("\nModified string: %s", s);
	
	system("PAUSE");
}