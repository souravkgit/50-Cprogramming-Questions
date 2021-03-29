// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void main()
// {
//     int arr[4],b;
//     printf("Enter the Password :\n");
//     for(int i=0; i<4; i++)
//     {
//         scanf("%d",&arr[i]);
//         if (arr[i]!=i+1)
//         {
//             printf("You have entered wrong password");
//             break;
//         }
//         else if(i==3)
//         {
//             printf("Correct password");
//         }
//     }

// }


#include <stdio.h>
int main() {
	int pass, x=10;	

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pass);	
	
	if (pass==1234)
	{
		printf("Correct password");
		x=0;
    }
    else
    {
       printf("Wrong password, try another");       
	}
	printf("\n");
   }
	return 0;
} 
