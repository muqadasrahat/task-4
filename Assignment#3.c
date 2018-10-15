#include<sys/types.h>

#include<unistd.h>

#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

#include<sys/types.h>

#include<string.h>

#include<sys/wait.h>





int main(){

	
   int fd1[2]; // Pipe 1 for child 1
	
   int fd2[2];	// Pipe 2 for child 2
	
   int fd3[2];  // Pipe 2 for child 2

	
   int fd4[2];
   int fd5[2];
   int fd6[2];
   int fd7[2];
   int fd8[2];
   int fd9[2];
   int fd10[2];
// 0 index is to read and 1 index to write in pipe

	

    pipe(fd1);
	
    pipe(fd2);
	
    pipe(fd3);

	
    pipe(fd4);

	
    pipe(fd5);

	
    pipe(fd6);

	
    pipe(fd7);

	
    pipe(fd8);

	
    pipe(fd9);

	
    pipe(fd10);

	
    
   int arraySize = 1000;
	
   int dataArr[arraySize];
	
   int arrayIndex = 0;
	

//Init the array of 1000 numbers
	
//We will be creating 10 child processes and every child process will add 10 numbers assign to it.

	

for (arrayIndex = 0 ; arrayIndex < arraySize; arrayIndex++)

     {
		
	dataArr[arrayIndex] = arrayIndex;
	
     }

	
 int cpid = fork(); // creating a child process

	
 if (cpid==0)
  {
			
       printf("Child # 1.\n");

		
	int sum = 0;
			
        int start = 0;
			
        int end = 10;
			
    for (start = 0; start < end ; start++)
   {
					
     sum = sum + dataArr[start];
		

	}
		
	
    write(fd1[1],&sum, sizeof(sum));
	
  }
	

else{
	

  int cpid1 = fork();
	
		
   if(cpid1==0)
{
			
   printf("Child # 2.\n");
				
	int sum = 0;
					
        int start = 10;
					
        int end = 20;
					
 for (start = 10; start < end ; start++)
{
					
	sum = sum + dataArr[start];
				
	}

					

     write(fd2[1],&sum, sizeof(sum));
		
}

  else
  {
		
	int cpid2 = fork();
			
   if (cpid2 == 0)
  {
					
	printf("Child # 3.\n");

						
        int sum = 0;
						
        int start = 20;
						
        int end = 30;
						
  for (start = 20; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd3[1],&sum, sizeof(sum));
			

  }

   else
  {
		
	int cpid3 = fork();
			
   if (cpid3 == 0)
  {
					
	printf("Child # 4.\n");

						
        int sum = 0;
						
        int start = 30;
						
        int end = 40;
						
  for (start = 30; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd4[1],&sum, sizeof(sum));
			

  }
 
  else
  {
		
	int cpid4= fork();
			
   if (cpid4 == 0)
  {
					
	printf("Child # 5.\n");

						
        int sum = 0;
						
        int start = 40;
						
        int end = 50;
						
  for (start = 40; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd5[1],&sum, sizeof(sum));
			

  }

  else
  {
		
	int cpid5= fork();
			
   if (cpid5 == 0)
  {
					
	printf("Child # 6.\n");

						
        int sum = 0;
						
        int start = 50;
						
        int end = 60;
						
  for (start = 50; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd6[1],&sum, sizeof(sum));
			

  }

  else
  {
		
	int cpid6= fork();
			
   if (cpid6 == 0)
  {
					
	printf("Child # 7.\n");

						
        int sum = 0;
						
        int start = 60;
						
        int end = 70;
						
  for (start = 60; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd7[1],&sum, sizeof(sum));
			

  }

else
  {
		
	int cpid7= fork();
			
   if (cpid7 == 0)
  {
					
	printf("Child # 8.\n");

						
        int sum = 0;
						
        int start = 70;
						
        int end = 80;
						
  for (start = 70; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd8[1],&sum, sizeof(sum));
			

  }

else
  {
		
	int cpid8= fork();
			
   if (cpid8 == 0)
  {
					
	printf("Child # 9.\n");

						
        int sum = 0;
						
        int start = 80;
						
        int end = 90;
						
  for (start = 80; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd9[1],&sum, sizeof(sum));
			

  }

else
  {
		
	int cpid9= fork();
			
   if (cpid9 == 0)
  {
					
	printf("Child # 10.\n");

						
        int sum = 0;
						
        int start = 90;
						
        int end = 100;
						
  for (start = 90; start < end ; start++)
{
								
    sum = sum + dataArr[start];
						
 }
						


    write(fd10[1],&sum, sizeof(sum));
			

  }



 else
 {
						
    // Waiting for all the child processes
							
    wait(NULL);
							
    wait(NULL);
							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							
    wait(NULL);


							

    int sum1;
							
    int sum2;
							
    int sum3;


    int sum4;


    int sum5;


    int sum6;


    int sum7;


    int sum8;


    int sum9;


    int sum10;

							
  read(fd1[0], &sum1, sizeof(sum1)); 	// reading from pip1
						
  read(fd2[0], &sum2, sizeof(sum2));	// reading from pip2
							
  read(fd3[0], &sum3, sizeof(sum3));	// reading from pip3


  read(fd4[0], &sum4, sizeof(sum4));
  read(fd5[0], &sum5, sizeof(sum5));
  read(fd6[0], &sum6, sizeof(sum6));
  read(fd7[0], &sum7, sizeof(sum7));
  read(fd8[0], &sum8, sizeof(sum8));
  read(fd9[0], &sum9, sizeof(sum9));
  read(fd10[0], &sum10, sizeof(sum10));	
						
  printf("Child 1 sum : %d\n" , sum1);
							
  printf("Child 2 sum : %d\n" , sum2);
							
  printf("Child 3 sum : %d\n" , sum3);



  printf("Child 4 sum : %d\n" , sum4);


	
  printf("Child 5 sum : %d\n" , sum5);


	
  printf("Child 6 sum : %d\n" , sum6);


	
  printf("Child 7 sum : %d\n" , sum7);


	
  printf("Child 8 sum : %d\n" , sum8);


	
  printf("Child 9 sum : %d\n" , sum9);


	
  printf("Child 10 sum : %d\n" , sum10);


								

  printf("Total Sum : %d\n" , sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10);


				
  printf("Hello!I am parent.\n");
			
     }
	
  }

	
  }


   return 0;

}


















