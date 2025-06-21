<h1>Question</h1>
Write the fraction 4/3 as 4.0 /3.0 (Try writing it as 4/3. What happens?)

<h1>Answer</h1>
The program will think 4/3 as integers.</br> 
4/3 would result in "1" instead of "1.333" , because it doesn't store float values.

```C
#include <stdio.h>

int main () {
	float r = 10.0;   //10 meter
	const float PHI = 3.14;

  	float volume1 = 4/3 * PHI * (r*r*r);    //volume1 = 3140.00 m^3
  	printf("Volume = %.3f m^3\n", volume1);

	float volume2 = 4.0/3.0 * PHI * (r*r*r);
	printf("Volume of 10 meter radius sphere is: %.3f m^3\n", volume2);  //volume2 = ~4186.667 m^3
	
	
	
	return 0;
}

```


</br>
Alternatively, we could use:  

```C
float volume = (float)3/4 * PHI * (r*r*r);      //volume = ~4186.667 m^3
```
By using this way, we can store float value in the 3/4 division.






