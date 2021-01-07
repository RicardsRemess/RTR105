#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    return (strcmp((char *)elem1,(char *)elem2));
}

int mode(char a[],int n) {
    int count = 0, maxCount = 0, maxValue;
    for(int i = 0;i<n;i++){
        if(a[i] == a[i+1]){
            count++;
        }else{count = 0;}
        
        if(count > maxCount){
            maxCount = count;
            maxValue = a[i];
        }
    }
  
    return maxValue;
}

int mode2(char a[],int n) {
    int count = 0, maxCount = 0, maxValue;
    for(int i = 0;i<n;i++){
        printf(" %d ", i);
        printf("%c", a[i]);
    }
  
    return maxValue;
}

int main()
{
	int ascii[64];
	char text[64] = {0};
	int locMin, locMax;
	int it =0;
	int sum = 0;
	printf("%s", "Ievadi tekstu: ");

    scanf("%s", &text);
	for(int i =0;i<sizeof(text)/sizeof(text[0]);i++){
	   if(text[i] && text[i+1]){
	    ascii[i] = text[i];
	    locMin = fmin(text[i],text[i+1]);
	    locMax = fmax(text[i],text[i+1]);
	    sum += text[i];
	    it ++;
	   }else if(text[i]){
	       locMin = fmin(text[i],locMin);
	       locMax = fmax(text[i],locMax);
	       sum += text[i];
	   }
	}
	
    qsort(text, it, sizeof(char), comp);
    printf("Alfabeta seciba: %s  ", text);
    printf("Alfabeta seciba(ASCII): ");
    for(int i = 0;i < it; i++){
       printf("%d, ", text[i]); 
    }
    printf("\n");
	printf("Min:%d Max:%d Vid:%d Med:%d Moda: %d",locMin, locMax, sum/it, text[it/2], mode(text,it));

	
	

    
    

    return 0;
}