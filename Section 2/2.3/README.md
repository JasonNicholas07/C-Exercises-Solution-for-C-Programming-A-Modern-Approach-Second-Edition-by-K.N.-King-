<h1>Task</h1>
Condense the <i>dweight.c</i> program by</br> 
(1) replacing the assignments to height,length, and width with initializers and</br> 
(2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.</br>

<h2>Old <i>dweight.c</i> program</h2>

```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>
int main (void){
	int height, length, width, volume, weight;
	
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weigth = (volume + 165) / 166;
	
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	
	return 0;
}
```

<h2>New <i>dweight.c</i> Program</h2>

```C
#include <stdio.h>
	
int main (void){
	int height = 8, 
      length = 12, 
      width = 10, 
      volume = height * length * width;;
	
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume+165) / 166;
	
	return 0;
}
```


