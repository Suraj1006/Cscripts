// #include <stdlib.h>

// int main()
// {
// 	printf("Hello world\n");

// 	return 0;
// }

// Variables 

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
	
// 	char characterName[] = "Tom" ;
// 	int characterAge = 67 ;
//  	printf("There was once a man named %s\n", characterName);
// 	printf("He was %d years old.\n", characterAge);
// 	characterAge = 30;
// 	printf("He really liked the name %s\n", characterName);
// 	printf("but did not like being %d\n", characterAge);
// 	return 0;
// }


//Datatypes
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int age = 10;
// 	double gpa = 3.8;
// 	char grade ='A';
// 	char phrase[] = "Girrafe Academy";

// 	return 0;

// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
// 	printf("My favourite %s is %f\n","number", 500.987 );
// 	return 0;
// }

//Using numbers ( Floating point numbers)
#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

// int main(int argc, char const *argv[])
// {
// 	printf("%f\n", floor(36.356));
// 	return 0;
//
//}

// int main(int argc, char const *argv[])
// {
// 	const int NUM = 5;
// 	printf("%d\n", NUM);
// 	printf("%d\n", NUM);

// 	return 0;
// }
// int main()
// {
// 	int age;
// 	printf("Enter your age: ");
// 	scanf("%d", &age);
// 	printf("You are %d years old\n", age);
	
// 	return 0;
// }
int main()
{
	char name[20];	
	printf("Enter your name: ");
	fgets(name, 20, stdin);
	printf("Your name is %s\n", name);

	return 0;
}

//fgets is used for userinput containing spaces 
//scanf stops as soon as it finds a space in the string 
//To take the input of a string we use char and we mention how many charecters we need to 
//input 